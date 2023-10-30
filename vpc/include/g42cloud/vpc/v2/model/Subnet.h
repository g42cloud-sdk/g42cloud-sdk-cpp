
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_Subnet_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_Subnet_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ExtraDhcpOption.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  Subnet
    : public ModelBase
{
public:
    Subnet();
    virtual ~Subnet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subnet members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);


    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);


    std::string getCidrV6() const;
    bool cidrV6IsSet() const;
    void unsetcidrV6();
    void setCidrV6(const std::string& value);


    std::string getGatewayIpV6() const;
    bool gatewayIpV6IsSet() const;
    void unsetgatewayIpV6();
    void setGatewayIpV6(const std::string& value);


    bool isDhcpEnable() const;
    bool dhcpEnableIsSet() const;
    void unsetdhcpEnable();
    void setDhcpEnable(bool value);


    std::string getPrimaryDns() const;
    bool primaryDnsIsSet() const;
    void unsetprimaryDns();
    void setPrimaryDns(const std::string& value);


    std::string getSecondaryDns() const;
    bool secondaryDnsIsSet() const;
    void unsetsecondaryDns();
    void setSecondaryDns(const std::string& value);


    std::vector<std::string>& getDnsList();
    bool dnsListIsSet() const;
    void unsetdnsList();
    void setDnsList(const std::vector<std::string>& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getNeutronNetworkId() const;
    bool neutronNetworkIdIsSet() const;
    void unsetneutronNetworkId();
    void setNeutronNetworkId(const std::string& value);


    std::string getNeutronSubnetId() const;
    bool neutronSubnetIdIsSet() const;
    void unsetneutronSubnetId();
    void setNeutronSubnetId(const std::string& value);


    std::string getNeutronSubnetIdV6() const;
    bool neutronSubnetIdV6IsSet() const;
    void unsetneutronSubnetIdV6();
    void setNeutronSubnetIdV6(const std::string& value);


    std::vector<ExtraDhcpOption>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value);


    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    std::string cidrV6_;
    bool cidrV6IsSet_;
    std::string gatewayIpV6_;
    bool gatewayIpV6IsSet_;
    bool dhcpEnable_;
    bool dhcpEnableIsSet_;
    std::string primaryDns_;
    bool primaryDnsIsSet_;
    std::string secondaryDns_;
    bool secondaryDnsIsSet_;
    std::vector<std::string> dnsList_;
    bool dnsListIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string neutronNetworkId_;
    bool neutronNetworkIdIsSet_;
    std::string neutronSubnetId_;
    bool neutronSubnetIdIsSet_;
    std::string neutronSubnetIdV6_;
    bool neutronSubnetIdV6IsSet_;
    std::vector<ExtraDhcpOption> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::string scope_;
    bool scopeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_Subnet_H_
