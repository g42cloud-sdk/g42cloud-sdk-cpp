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

#ifndef G42CLOUD_SDK_CORE_UTILS_Object_H_
#define G42CLOUD_SDK_CORE_UTILS_Object_H_

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/CoreExport.h>

#include <cpprest/details/basic_types.h>
#include <cpprest/json.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Utils {
class G42CLOUD_CORE_EXPORT Object : public ModelBase {
public:
    Object();
    virtual ~Object();

    // ///////////////////////////////////////////
    // / ModelBase overrides
    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value &json) override;

    // ///////////////////////////////////////////
    // / Object manipulation
    web::json::value getValue(const utility::string_t &key) const;
    void setValue(const utility::string_t &key, const web::json::value &value);

private:
    web::json::value object_;
};
}
}
}
}
#endif // G42CLOUD_SDK_CORE_UTILS_Object_H_