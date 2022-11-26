/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef G42CLOUD_SDK_CORE_AUTH_AUTHCACHE_H
#define G42CLOUD_SDK_CORE_AUTH_AUTHCACHE_H

#include <g42cloud/core/CoreExport.h>
#include <unordered_map>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Auth {
class G42CLOUD_CORE_EXPORT AuthCache {
public:
    static void setAuth(std::string key, std::string value);
    static std::string getAuth(std::string key);
private:
    static std::unordered_map<std::string, std::string> authCache;
};
}
}
}
}
#endif // G42CLOUD_SDK_CORE_AUTH_AUTHCACHE_H
