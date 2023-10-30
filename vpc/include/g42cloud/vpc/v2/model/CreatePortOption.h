
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/AllowedAddressPair.h>
#include <g42cloud/vpc/v2/model/FixedIp.h>
#include <string>
#include <vector>
#include <g42cloud/vpc/v2/model/ExtraDhcpOpt.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreatePortOption
    : public ModelBase
{
public:
    CreatePortOption();
    virtual ~CreatePortOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePortOption members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


    std::vector<FixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<FixedIp>& value);


    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);


    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);


    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);


    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);


    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::vector<FixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreatePortOption_H_
