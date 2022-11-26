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

#ifndef G42CLOUD_SDK_CORE_EXPORT_H
#define G42CLOUD_SDK_CORE_EXPORT_H

#if defined(_WIN32)
    #ifdef _MSC_VER
        #pragma warning(disable : 4251)
    #endif // _MSC_VER
    #define G42CLOUD_EXPORT __declspec(dllexport)
    #define G42CLOUD_IMPORT __declspec(dllimport)
#elif defined(__linux__)
    #define G42CLOUD_EXPORT __attribute__((visibility("default")))
    #define G42CLOUD_IMPORT __attribute__((visibility("default")))
#endif

#if !defined(G42CLOUD_EXPORT)
    #define G42CLOUD_EXPORT
#endif

#if !defined(G42CLOUD_IMPORT)
    #define G42CLOUD_IMPORT
#endif

#endif //G42CLOUD_SDK_CORE_EXPORT_H
