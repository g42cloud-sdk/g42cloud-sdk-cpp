
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/Ipv6Bandwidth.h>
#include <string>
#include <g42cloud/ecs/v2/model/ServerNicSecurityGroup.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchAddServerNicOption
    : public ModelBase
{
public:
    BatchAddServerNicOption();
    virtual ~BatchAddServerNicOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAddServerNicOption members


    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


    std::vector<ServerNicSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<ServerNicSecurityGroup>& value);


    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);


    Ipv6Bandwidth getIpv6Bandwidth() const;
    bool ipv6BandwidthIsSet() const;
    void unsetipv6Bandwidth();
    void setIpv6Bandwidth(const Ipv6Bandwidth& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<ServerNicSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    Ipv6Bandwidth ipv6Bandwidth_;
    bool ipv6BandwidthIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicOption_H_
