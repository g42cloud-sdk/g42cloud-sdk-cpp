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
#ifndef G42CLOUD_SDK_CORE_AUTH_REGION_H
#define G42CLOUD_SDK_CORE_AUTH_REGION_H

#include <string>
#include <g42cloud/core/CoreExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Auth {
class G42CLOUD_CORE_EXPORT Region {
public:
    Region() = default;
    virtual ~Region() = default;

    Region(const Region& region);
    Region(std::string regionId, std::string endpoint);
   
    Region& withRegionId(std::string regionId);
    Region& withEndpoint(std::string endpoint);

    const std::string getEndpoint() const;
    const std::string getRegionId() const;
private:
    std::string regionId_;
    std::string endpoint_;
};
}
}
}
}
#endif //G42CLOUD_CPP_SDK_V3_REGION_H
