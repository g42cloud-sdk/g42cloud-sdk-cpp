<p align="center">
<a href="https://www.g42cloud.com/"><img src="https://upload.wikimedia.org/wikipedia/en/4/43/Group_42_Logo.jpg"></a>
</p>

<h1 align="center">G42 Cloud C++ Software Development Kit (C++ SDK)</h1>

The G42 Cloud C++ SDK allows you to easily work with G42 Cloud services such as Elastic Compute Service (ECS) and
Virtual Private Cloud (VPC) without the need to handle API related tasks.

This document introduces how to obtain and use G42 Cloud C++ SDK.

## Requirements

- To use G42 Cloud C++ SDK, you must have G42 Cloud account as well as the Access Key (AK) and Secret key (SK) of the G42
  Cloud account. You can create an Access Key in the G42 Cloud console. For more information,

- To use G42 Cloud C++ SDK to access the APIs of specific service, please make sure you do have activated the service
  in [G42 Cloud console](https://console.g42cloud.com/console/) if needed.

- G42 Cloud C++ SDK requires **C++ 14** or later, and requires **CMake 3.10** or later.

## Install C++ SDK

### Dependent Third-Party Libraries

`curl`, `boost`, `cpprestsdk`, `spdlog`, `openssl`

### Install SDK on Linux platform

#### Step 1: Install third-party libraries

The required third-party packages are available in great part of package management tools of different OS.

Take `Debian/Ubuntu` system for example, you could run the following commands:

``` bash
sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev
```

`spdlog` is able to installed by source code only:

``` bash
git clone https://github.com/gabime/spdlog.git
cd spdlog
mkdir build
cd build
cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..  // for shared library
make
sudo make install
```

#### Step 2: Build and install SDK

``` bash
git clone https://github.com/github-sdk/g42cloud-sdk-cpp.git
cd g42cloud-sdk-cpp
mkdir build
cd build
cmake ..
make
sudo make install
```

After the preceding commands completed, **the installation directory of C++ SDK** is `/usr/local`.

### Install SDK on Windows platform

#### Step 1: Install vcpkg and install third-part libraries by vcpkg:

``` bash
vcpkg install curl cpprestsdk boost openssl spdlog
```

#### Step 2: Build By CLion

1. open directory `g42cloud-sdk-cpp` by clion

2. choose `File` -> `Settings`

3. choose `Build, Execution, Devloyment` -> `CMake`

4. add `-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake` in `CMake options`

5. click `CMakeLists.txt` and choose `Load CMake Project`

6. Configure compilation toolchain of clion as MSVC: Select Toolchain as Visual Studio on the `CMake` configuration page in step 3, and you cannot select other compilers such as mingw (the windows platform relies on the msvc compiler,
   Compiling with other compilers such as mingw will report an error). In addition, the user can also choose whether the compiled binary file is in Debug mode or Release mode, and select `Build Type` to make a drop-down selection.
 
7. Configure the architecture and platform of the target file: the windows platform supports compiling sdk link library files of different CPU architectures (x64, x86), users can configure according to actual needs, click
   `Build, Execution, Deployment` → `Toolchains`, in the Architecture option, you can drop down to select the supported CPU architecture.
 
8. choose `Build` and start compile

#### Step 3: Install C++ SDK

choose `Build` -> `Install` after compilation.

After the preceding commands completed, **the installation directory of C++ SDK**
is `C:\Program File (x86)\g42cloud-sdk-cpp`.

## Code example

- The following example shows how to query a list of VPC in a specific region, you need to substitute your
  real `{Service}Client` for `VpcClient` in actual use.

- Substitute the values for `{your ak string}`, `{your sk string}`, `{your endpoint}` and `{your project id}`.

``` cpp
#include <cstdio>
#include <iostream>
#include <g42cloud/core/exception/Exceptions.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/vpc/v2/VpcClient.h>

using namespace G42Cloud::Sdk;
using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Core::Exception;

int main(void)
{
    // Initialize HTTP config
    HttpConfig httpConfig = HttpConfig();

    // Initialize AK/SK module
    auto basicCredentials = std::make_unique<BasicCredentials>();
    basicCredentials->withAk("{your ak string}")
            .withSk("{your sk string}")
            .withProjectId("{your project id}");
    
    // Configure VpcClient instance
    std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
            .withCredentials(std::unique_ptr<Credentials>(basicCredentials.release()))
            .withHttpConfig(httpConfig)
            .withEndPoint("{your endpoint}")
            .build();

    // Initialize request parameters
    Vpc::V2::Model::ListVpcsRequest listRequest;
    try {
        std::string stringValue;
        // Creat an API request and get response
        std::cout << "************ListVpc***********" << std::endl;
        std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
            vpcApi->listVpcs(listRequest);
        stringValue = listRes->getHttpBody();
        std::cout << stringValue << std::endl;
    } catch (HostUnreachableException& e) { // handle exception
        std::cout << e.what() << std::endl;
    } catch (SslHandShakeException& e) {
        std::cout << e.what() << std::endl;
    } catch (RetryOutageException& e) {
        std::cout << e.what() << std::endl;
    } catch (CallTimeoutException& e) {
        std::cout << e.what() << std::endl;
    } catch (ServiceResponseException& e) {
        std::cout << "StatusCode: " << e.getStatusCode() << std::endl;
        std::cout << "ErrorCode: " << e.getErrorCode() << std::endl;
        std::cout << "ErrorMsg: " << e.getErrorMsg() << std::endl;
        std::cout << "RequestId: " << e.getRequestId() << std::endl;
    }
    return 0;
}
```

If you want to run the example on Linux platform, please copy commands above and save as vpc_test.cpp, then build with
the following command:

``` bash
$ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
$ ./vpc_test
# response
$
```
If you use cmake to manage projects under Windows, you need to introduce the relevant dependencies of the sdk core package and service package in CMakeLists.txt.
You can refer to the following CMakeLists.txt file:
```
cmake_minimum_required(VERSION 3.16)
project(demo)
find_package(CURL REQUIRED)
set(CMAKE_CXX_STANDARD 14)

set(LINK_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/bin;")
set(BIN_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/lib;")
set(SERVICE_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/include;")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_UUID_FORCE_AUTO_LINK")

link_directories(${BIN_DIR})
include_directories(${SERVICE_DIR})
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(demo main.cpp)
target_link_libraries(demo PUBLIC core vpc_v2)
```

## Online Debugging

[API Explorer](https://console.g42cloud.com/apiexplorer/#/overview) provides api retrieval and online debugging, supports full fast retrieval, visual debugging, help document viewing, and online consultation.

## Changelog

Detailed changes for each released version are documented in
the [CHANGELOG.md](https://github.com/g42cloud-sdk/g42cloud-sdk-cpp/blob/master/CHANGELOG.md).

## User Manual [:top:](#g42-cloud-c-software-development-kit-c-sdk)

* [1. Client Configuration](#1-client-configuration-top)
    * [1.1 Default Configuration](#11-default-configuration-top)
    * [1.2 Network Proxy](#12-network-proxy-top)
    * [1.3 Timeout Configuration](#13-timeout-configuration-top)
    * [1.4 SSL Certification](#14-ssl-certification-top)
* [2. Credentials Configuration](#2-credentials-configuration-top)
    * [2.1 Use Permanent AK&SK](#21-use-permanent-aksk-top)
    * [2.2 Use Temporary AK&SK](#22-use-temporary-aksk-top)
* [3. Client Initialization](#3-client-initialization-top)
    * [3.1 Initialize the client with specified Endpoint](#31-initialize-the-serviceclient-with-specified-endpoint-top)
* [4. Send Requests and Handle Responses](#4-send-requests-and-handle-responses-top)
    * [4.1 Exceptions](#41-exceptions-top)
* [5. Use Asynchronous Client](#5-use-asynchronous-client-top)
* [6. Troubleshooting](#6-troubleshooting-top)
    * [6.1 Access Log](#61-access-log-top)
* [7. Set CMakeLists.txt](#7-set-cmakeliststxt-top)

### 1. Client Configuration [:top:](#user-manual-top)

#### 1.1 Default Configuration [:top:](#user-manual-top)

``` cpp
// Use default configuration
HttpConfig httpConfig = HttpConfig();
```

#### 1.2 Network Proxy [:top:](#user-manual-top)

``` cpp
// Use network proxy if needed
httpConfig.setProxyProtocol("http");
httpConfig.setProxyHost("proxy.g42cloud.com");
httpConfig.setProxyPort("8080");
httpConfig.setProxyUser("username");
httpConfig.setProxyPassword("password");
```

#### 1.3 Timeout Configuration [:top:](#user-manual-top)

``` cpp
// The default connection timeout is 60 seconds, the default read timeout is 120 seconds. You could change it if needed.
httpConfig.setConnectTimeout(60);
httpConfig.setReadTimeout(120);
```

#### 1.4 SSL Certification [:top:](#user-manual-top)

``` cpp
// Skip SSL certification checking while using https protocol if needed
httpConfig.setIgnoreSslVerification(true);
```

### 2. Credentials Configuration [:top:](#user-manual-top)

There are two types of G42 Cloud services, `regional` services and `global` services.

Global services only contain IAM.

For `regional` services' authentication, project_id is required. 

For `global` services' authentication, domain_id is required.

**Parameter description**:

- `ak` is the access key ID for your account.
- `sk` is the secret access key for your account.
- `project_id` is the ID of your project depending on your region which you want to operate.
- `domain_id` is the account ID of G42 Cloud.
- `security_token` is the security token when using temporary AK/SK.

You could use permanent AK and SK **or** use temporary AK and SK and SecurityToken to complete credentials'
configuration.

#### 2.1 Use Permanent AK&SK [:top:](#user-manual-top)

``` cpp
// Regional services
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId);

// Global services
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId);
```

#### 2.2 Use Temporary AK&SK [:top:](#user-manual-top)

It's required to obtain temporary AK&SK and security token first, which could be obtained through
permanent AK&SK or through an agency.

- Obtaining a temporary access key and security token through token, you could refer to
document: https://docs.g42cloud.com/api/iam/en-us_topic_0097949518.html . The API mentioned in the document above
corresponds to the method of `CreateTemporaryAccessKeyByToken` in IAM SDK.

``` cpp
// Regional services
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId)
    .withSecurityToken(securityToken);

// Global services
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId)
    .withSecurityToken(securityToken);
```

### 3. Client Initialization [:top:](#user-manual-top)

#### 3.1 Initialize the {Service}Client with specified Endpoint [:top:](#user-manual-top)

``` cpp
// Initialize specified service client instance, take VpcClient for example
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withEndPoint(endpoint)
    .build();
```

### 4. Send Requests and Handle Responses [:top:](#user-manual-top)

``` cpp
// Initialize request
Vpc::V2::Model::ListVpcsRequest listRequest;
std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi->listVpcs(listRequest);
std::string responseBody = listRes->getHttpBody();
std::cout << stringValue << std::endl;
```

#### 4.1 Exceptions [:top:](#user-manual-top)

| Level 1                  | Notice                 | Level 2                  | Notice                                        |
| :----------------------- | :--------------------- | :----------------------- | :-------------------------------------------- |
| ConnectionException      | Connection error       | HostUnreachableException | Host is not reachable                         |
|                          |                        | SslHandShakeException    | SSL certification error                       |
| RequestTimeoutException  | Request timeout        | CallTimeoutException     | timeout for single request                    |
|                          |                        | RetryOutageException     | no response after retrying                    |
| ServiceResponseException | service response error | ServerResponseException  | server inner error, http status code: [500,]  |
|                          |                        | ClientRequestException   | invalid request, http status code: [400? 500) |

``` cpp
// handle exceptions
try {
    std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
        vpcApi->listVpcs(listRequest);
    std::string responseBody = listRes->getHttpBody();
    std::cout << stringValue << std::endl;
} catch (HostUnreachableException& e) {
    std::cout << e.what() << std::endl;
} catch (SslHandShakeException& e) {
    std::cout << e.what() << std::endl;
} catch (RetryQutageException& e) {
    std::cout << e.what() << std::endl;
} catch (CallTimeoutException& e) {
    std::cout << e.what() << std::endl;
} catch (ServiceResponseException& e) {
    std::cout << "StatusCode: " << e.getStatusCode() << std::endl;
    std::cout << "ErrorCode: " << e.getErrorCode() << std::endl;
    std::cout << "ErrorMsg: " << e.getErrorMsg() << std::endl;
    std::cout << "RequestId: " << e.getRequestId() << std::endl;
}
```

### 5. Use Asynchronous Client [:top:](#user-manual-top)

``` cpp
// use c++ std::async
#include <future>
auto future = std::async(std::launch::async,
                        &Vpc::V2::VpcClient::listVpcs, vpcApi, listRequest);
auto listResponse = future.get();
```

### 6. Troubleshooting [:top:](#user-manual-top)

SDK supports `Access` log which could be configured manually.

#### 6.1 Access Log [:top:](#user-manual-top)

SDK supports print access log which could be enabled by manual configuration, the log could be output to the console or
specified files.

For example:

``` cpp
// Initialize specified service client instance, take VpcClient for example
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withFileLog(R"(.\log.txt)", true)
    .withStreamLog(true)
    .withEndPoint(endpoint)
    .build();
```

**where:**

- `withFileLogger`:
    - `logPath` means log file path.
    - `enable` means file log is enabled.
- `withStreamLogger`:
    - `enable` means console log is enabled.

After enabled log, the SDK will print the access log by default, every request will be recorded to the console like:

``` text
[2020-10-16 03:10:29][INFO] "GET https://iam.ae-ad-1.g42cloud.com/v3.0/OS-CREDENTIAL/credentials/W8VHHFEFPIJV6TFOUOQO"  200 244 7a68399eb8ed63fc91018426a7c4b8a0
```

The format of access log is:

``` text
"{httpMethod} {uri}" {httpStatusCode} {responseContentLength} {requestId}
```

### 7. Set CMakeLists.txt [:top:](#user-manual-top)

- If you want to use one service, you could configure like this:

``` cmake
# USE ONE SERVICE
SET(BUILD_SERVICE vpc)
SET(SERVICE_VERSION v2)

if(BUILD_SERVICE STREQUAL "")
    add_subdirectory(core)
else()
    add_subdirectory(core)
    add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
    message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()
```

- If you want to use multiple services, you could configure like this:

``` cmake
# USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
add_subdirectory(core)
add_subdirectory(vpc/src/v2)
add_subdirectory(evs/src/v2)
add_subdirectory(ecs/src/v2)
```
