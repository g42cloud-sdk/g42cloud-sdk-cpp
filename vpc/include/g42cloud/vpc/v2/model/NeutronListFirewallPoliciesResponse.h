
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronFirewallPolicy.h>
#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronListFirewallPoliciesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFirewallPoliciesResponse();
    virtual ~NeutronListFirewallPoliciesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListFirewallPoliciesResponse members


    std::vector<NeutronFirewallPolicy>& getFirewallPolicies();
    bool firewallPoliciesIsSet() const;
    void unsetfirewallPolicies();
    void setFirewallPolicies(const std::vector<NeutronFirewallPolicy>& value);


    std::vector<NeutronPageLink>& getFirewallPoliciesLinks();
    bool firewallPoliciesLinksIsSet() const;
    void unsetfirewallPoliciesLinks();
    void setFirewallPoliciesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronFirewallPolicy> firewallPolicies_;
    bool firewallPoliciesIsSet_;
    std::vector<NeutronPageLink> firewallPoliciesLinks_;
    bool firewallPoliciesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallPoliciesResponse_H_
