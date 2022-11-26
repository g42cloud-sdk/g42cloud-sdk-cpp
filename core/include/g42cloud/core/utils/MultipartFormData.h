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
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 */

#ifndef G42CLOUD_SDK_CORE_UTILS_MultipartFormData_H_
#define G42CLOUD_SDK_CORE_UTILS_MultipartFormData_H_

#include <g42cloud/core/utils/IHttpBody.h>
#include <g42cloud/core/utils/HttpContent.h>
#include <g42cloud/core/CoreExport.h>

#include <vector>
#include <map>
#include <memory>

#include <cpprest/details/basic_types.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Utils {
class G42CLOUD_CORE_EXPORT MultipartFormData : public IHttpBody {
public:
    MultipartFormData();
    explicit MultipartFormData(utility::string_t boundary);
    virtual ~MultipartFormData();

    virtual void add(std::shared_ptr<HttpContent> content);
    virtual utility::string_t getBoundary();
    virtual std::shared_ptr<HttpContent> getContent(const utility::string_t &name) const;
    virtual bool hasContent(const utility::string_t &name) const;
    virtual void writeTo(std::ostream &target);

protected:
    std::vector<std::shared_ptr<HttpContent>> contents_;
    utility::string_t boundary_;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> contentLookup_;
};
}
}
}
}
#endif // G42CLOUD_SDK_CORE_UTILS_MultipartFormData_H_