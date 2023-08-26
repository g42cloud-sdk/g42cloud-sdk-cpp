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

#ifndef G42CLOUD_SDK_CORE_EXCEPTION_CONNECTIONEXCEPTION_H
#define G42CLOUD_SDK_CORE_EXCEPTION_CONNECTIONEXCEPTION_H

#include <g42cloud/core/exception/SdkException.h>
#include <g42cloud/core/CoreExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Exception {
class G42CLOUD_CORE_EXPORT ConnectionException : public SdkException {
public:
    explicit ConnectionException(const char *message);
};
}
}
}
}

#endif // G42CLOUD_SDK_CORE_EXCEPTION_CONNECTIONEXCEPTION_H