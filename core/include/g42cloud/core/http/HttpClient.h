/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache LICENSE, Version 2.0 (the
 * "LICENSE"); you may not use this file except in compliance
 * with the LICENSE.  You may obtain a copy of the LICENSE at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the LICENSE is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the LICENSE for the
 * specific language governing permissions and limitations
 * under the LICENSE.
 */

#ifndef G42CLOUD_SDK_CORE_HTTP_HTTPCLIENT_H
#define G42CLOUD_SDK_CORE_HTTP_HTTPCLIENT_H

#include <iostream>
#include <map>

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/spdlog.h>
#include <curl/curl.h>
#include <boost/algorithm/string.hpp>

#include <g42cloud/core/http/HttpConfig.h>
#include <g42cloud/core/http/HttpResponse.h>
#include <g42cloud/core/http/HttpRequest.h>
#include <g42cloud/core/RequestParams.h>

#include <g42cloud/core/exception/SslHandShakeException.h>
#include <g42cloud/core/exception/CallTimeoutException.h>
#include <g42cloud/core/exception/RetryOutageException.h>
#include <g42cloud/core/exception/HostUnreachableException.h>
#include <g42cloud/core/exception/ServerResponseException.h>
#include <g42cloud/core/exception/ClientRequestException.h>
#include <g42cloud/core/CoreExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Http {
class G42CLOUD_CORE_EXPORT HttpClient {
public:
    HttpClient();
    ~HttpClient();

    virtual std::unique_ptr<HttpResponse>
    doHttpRequestSync(const HttpRequest &httpRequest, const HttpConfig &httpConfig,
                      const std::function<void(const HttpResponse &)> &handler_response);

private:
    static constexpr int HTTP_SUCCESS_BEGIN_CODE = 200;
    static constexpr int HTTP_SUCCESS_END_CODE = 299;
    std::string APPLICATION_BSON = "application/bson";


    CURLcode curl_perform(const HttpRequest &httpRequest, const HttpConfig &httpConfig, std::string &body,
        std::string &header, long &statusCode);

    std::map<std::string, std::string> parseErrorMessage(const std::string &responseBody);
    void dealSslHandShakeException(bool streamLog, bool fileLog);
    void dealHostUnreachableException(bool streamLog, bool fileLog);
    void dealCallTimeoutException(bool streamLog, bool fileLog);
    void dealRetryOutageException(bool streamLog, bool fileLog);
    void dealCurlOk(const HttpRequest &httpRequest, HttpResponse &httpResponse, bool streamLog, bool fileLog);

    std::string parseRequestId(const std::string &responseHeader);
#if defined(G42CLOUD_SDK_BSON_)
    std::map<std::string, std::string> parseBsonErrorMessage(const std::string &responseBody);
#endif
};
}
}
}
}

#endif // G42CLOUD_SDK_CORE_HTTP_HTTPCLIENT_H