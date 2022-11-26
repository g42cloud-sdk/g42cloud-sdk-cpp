
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronFirewallRule.h>
#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronListFirewallRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFirewallRulesResponse();
    virtual ~NeutronListFirewallRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFirewallRulesResponse members


    std::vector<NeutronFirewallRule>& getFirewallRules();
    bool firewallRulesIsSet() const;
    void unsetfirewallRules();
    void setFirewallRules(const std::vector<NeutronFirewallRule>& value);


    std::vector<NeutronPageLink>& getFirewallRulesLinks();
    bool firewallRulesLinksIsSet() const;
    void unsetfirewallRulesLinks();
    void setFirewallRulesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronFirewallRule> firewallRules_;
    bool firewallRulesIsSet_;
    std::vector<NeutronPageLink> firewallRulesLinks_;
    bool firewallRulesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesResponse_H_
