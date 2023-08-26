
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateFirewallRuleOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallRuleRequestBody();
    virtual ~NeutronCreateFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallRuleRequestBody members


    NeutronCreateFirewallRuleOption getFirewallRule() const;
    bool firewallRuleIsSet() const;
    void unsetfirewallRule();
    void setFirewallRule(const NeutronCreateFirewallRuleOption& value);


protected:
    NeutronCreateFirewallRuleOption firewallRule_;
    bool firewallRuleIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallRuleRequestBody_H_
