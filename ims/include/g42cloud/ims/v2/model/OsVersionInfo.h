
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  OsVersionInfo
    : public ModelBase
{
public:
    OsVersionInfo();
    virtual ~OsVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OsVersionInfo members


    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);


    std::string getOsVersionKey() const;
    bool osVersionKeyIsSet() const;
    void unsetosVersionKey();
    void setOsVersionKey(const std::string& value);


    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);


    int32_t getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(int32_t value);


    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);


protected:
    std::string platform_;
    bool platformIsSet_;
    std::string osVersionKey_;
    bool osVersionKeyIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    int32_t osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_OsVersionInfo_H_
