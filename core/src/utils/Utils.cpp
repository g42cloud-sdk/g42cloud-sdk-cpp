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

#include <g42cloud/core/utils/Utils.h>

namespace G42Cloud {
namespace Sdk {
namespace Core {
namespace Utils {

inline std::string& lTrim(std::string &ss) {
    auto p = find_if(ss.begin(), ss.end(), not1(std::ptr_fun(isspace)));
    ss.erase(ss.begin(), p);
    return ss;
}

inline std::string& rTrim(std::string &ss) {
    auto p = find_if(ss.rbegin(), ss.rend(), not1(std::ptr_fun(isspace)));
    ss.erase(p.base(),ss.end());
    return ss;
}

// Remove leading and tailing spaces
std::string trim(std::string str)
{
    lTrim(rTrim(str));
    return str;
}

std::string toLowerCaseStr(std::string str)
{
    for (auto &c : str) {
        c = tolower(c);
    }

    return str;
}

std::string toISO8601Time(const time_t &time)
{
    char buffer[32];
    struct tm timeinfo;
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    gmtime_s(&timeinfo, &time);
#else
    gmtime_r(&time, &timeinfo);
#endif
    strftime(buffer, sizeof(buffer), "%Y%m%dT%H%M%SZ", &timeinfo);
    std::string str(buffer);
    return str;
}

std::string uriDecode(std::string &str)
{
    char ch, c, decoded;
    std::string encodedStr;
    enum {
        SW_USUAL = 0,
        SW_QUOTED,
        SW_QUOTED_SECOND
    } state;

    state = SW_USUAL;
    decoded = 0;
    for (char i : str) {
        ch = i;

        switch (state) {
            case SW_USUAL:
                if (ch == '%') {
                    state = SW_QUOTED;
                    break;
                }
                encodedStr = dealSwUsual(ch, encodedStr);
                break;
            case SW_QUOTED:
                if (ch >= '0' && ch <= '9') {
                    decoded = (unsigned char) (ch - '0');
                    state = SW_QUOTED_SECOND;
                    break;
                }

                c = (unsigned char) (ch | 0x20);
                if (c >= 'a' && c <= 'f') {
                    decoded = (unsigned char) (c - 'a' + 10); // 10���������
                    state = SW_QUOTED_SECOND;
                    break;
                }

                /* the invalid quoted character */
                state = SW_USUAL;
                encodedStr += ch;
                break;

            default:
                state = SW_USUAL;
                encodedStr = dealSwQuotedSecond(ch, encodedStr, decoded);

                /* the invalid quoted character */
                break;
        }
    }
    return encodedStr;
}

std::string dealSwQuotedSecond(char ch, std::string encodedStr, char decoded)
{
    if (ch >= '0' && ch <= '9') {
        ch = static_cast<unsigned char>((decoded << 4) + ch - '0'); // 4���������
        encodedStr += ch;
        return encodedStr;
    }

    char c = static_cast<unsigned char>(ch | 0x20);
    if (c >= 'a' && c <= 'f') {
        ch = static_cast<unsigned char>((decoded << 4) + c - 'a' + 10); // 4��10���������
        encodedStr += ch;
        return encodedStr;
    }
    return encodedStr;
}

std::string dealSwUsual(char ch, std::string encodedStr)
{
    if (ch == '+') {
        encodedStr += ' ';
        return encodedStr;
    }
    encodedStr += ch;
    return encodedStr;
}
unsigned char toHex(unsigned char x) {
    return x > 9 ? x + 55 : x + 48;
}

std::string uriEncode(std::string &str, bool path)
{
    std::string encodedStr;
    if (str.empty()) {
        return encodedStr;
    }
    for (char i : str) {
        unsigned char c = i;
        if (isalnum(static_cast<unsigned char>(c)) || c == '.' || c == '~' || c == '_' || c == '-' || (path && c == '/')) {
            encodedStr += i;
        } else {
            encodedStr += '%';
            encodedStr += toHex(c >> 4); // 4���������
            encodedStr += toHex(c & 0xf);
        }
    }
    return encodedStr;
}

std::string getContentType(const std::string &contentType, bool &isJson, bool &isMultiPart, bool &isBson)
{
    if (contentType == "application/json") {
        isJson = true;
        return "application/json";
    } else if (contentType == "application/json;charset=UTF-8") {
        isJson = true;
        return "application/json;charset=UTF-8";
    } else if (contentType == "multipart/form-data") {
        isMultiPart = true;
        return "multipart/form-data";
    } else if (contentType == "application/bson") {
        isBson = true;
        return "application/bson";
    } else {
        isJson = true;
        return "application/json";
    }
}
}
}
}
}
