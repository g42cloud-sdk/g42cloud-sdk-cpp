
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallRuleOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallRuleRequestBody();
    virtual ~NeutronUpdateFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallRuleRequestBody members


    NeutronUpdateFirewallRuleOption getFirewallRule() const;
    bool firewallRuleIsSet() const;
    void unsetfirewallRule();
    void setFirewallRule(const NeutronUpdateFirewallRuleOption& value);


protected:
    NeutronUpdateFirewallRuleOption firewallRule_;
    bool firewallRuleIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequestBody_H_
