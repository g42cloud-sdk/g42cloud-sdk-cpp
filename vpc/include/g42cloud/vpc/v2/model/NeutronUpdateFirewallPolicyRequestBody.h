
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallPolicyOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallPolicyRequestBody();
    virtual ~NeutronUpdateFirewallPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyRequestBody members


    NeutronUpdateFirewallPolicyOption getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronUpdateFirewallPolicyOption& value);


protected:
    NeutronUpdateFirewallPolicyOption firewallPolicy_;
    bool firewallPolicyIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyRequestBody_H_
