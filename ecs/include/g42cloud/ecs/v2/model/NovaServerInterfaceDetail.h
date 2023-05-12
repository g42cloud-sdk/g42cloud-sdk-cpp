
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceDetail_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceDetail_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/NovaServerInterfaceFixedIp.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaServerInterfaceDetail
    : public ModelBase
{
public:
    NovaServerInterfaceDetail();
    virtual ~NovaServerInterfaceDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerInterfaceDetail members


    std::vector<NovaServerInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<NovaServerInterfaceFixedIp>& value);


    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);


    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);


    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);


protected:
    std::vector<NovaServerInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string macAddr_;
    bool macAddrIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portState_;
    bool portStateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceDetail_H_
