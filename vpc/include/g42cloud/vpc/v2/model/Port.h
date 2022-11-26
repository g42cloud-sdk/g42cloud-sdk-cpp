
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_Port_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_Port_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/BindingVifDetails.h>
#include <g42cloud/vpc/v2/model/AllowedAddressPair.h>
#include <g42cloud/vpc/v2/model/FixedIp.h>
#include <string>
#include <g42cloud/vpc/v2/model/DnsAssignMent.h>
#include <g42cloud/core/utils/Object.h>
#include <vector>
#include <g42cloud/vpc/v2/model/ExtraDhcpOpt.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  Port
    : public ModelBase
{
public:
    Port();
    virtual ~Port();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Port members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);


    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);


    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);


    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);


    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);


    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);


    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);


    std::string getBindingvnicType() const;
    bool bindingvnicTypeIsSet() const;
    void unsetbindingvnicType();
    void setBindingvnicType(const std::string& value);


    std::vector<DnsAssignMent>& getDnsAssignment();
    bool dnsAssignmentIsSet() const;
    void unsetdnsAssignment();
    void setDnsAssignment(const std::vector<DnsAssignMent>& value);


    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);


    BindingVifDetails getBindingvifDetails() const;
    bool bindingvifDetailsIsSet() const;
    void unsetbindingvifDetails();
    void setBindingvifDetails(const BindingVifDetails& value);


    Object getBindingprofile() const;
    bool bindingprofileIsSet() const;
    void unsetbindingprofile();
    void setBindingprofile(const Object& value);


    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);


    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);


    std::string getZoneId() const;
    bool zoneIdIsSet() const;
    void unsetzoneId();
    void setZoneId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::string bindingvnicType_;
    bool bindingvnicTypeIsSet_;
    std::vector<DnsAssignMent> dnsAssignment_;
    bool dnsAssignmentIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    BindingVifDetails bindingvifDetails_;
    bool bindingvifDetailsIsSet_;
    Object bindingprofile_;
    bool bindingprofileIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;
    std::string zoneId_;
    bool zoneIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_Port_H_
