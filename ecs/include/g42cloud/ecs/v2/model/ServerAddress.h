
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerAddress
    : public ModelBase
{
public:
    ServerAddress();
    virtual ~ServerAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerAddress members


    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);


    std::string getOSEXTIPStype() const;
    bool oSEXTIPStypeIsSet() const;
    void unsetoSEXTIPStype();
    void setOSEXTIPStype(const std::string& value);


    std::string getOSEXTIPSMACmacAddr() const;
    bool oSEXTIPSMACmacAddrIsSet() const;
    void unsetoSEXTIPSMACmacAddr();
    void setOSEXTIPSMACmacAddr(const std::string& value);


    std::string getOSEXTIPSportId() const;
    bool oSEXTIPSportIdIsSet() const;
    void unsetoSEXTIPSportId();
    void setOSEXTIPSportId(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string addr_;
    bool addrIsSet_;
    std::string oSEXTIPStype_;
    bool oSEXTIPStypeIsSet_;
    std::string oSEXTIPSMACmacAddr_;
    bool oSEXTIPSMACmacAddrIsSet_;
    std::string oSEXTIPSportId_;
    bool oSEXTIPSportIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerAddress_H_
