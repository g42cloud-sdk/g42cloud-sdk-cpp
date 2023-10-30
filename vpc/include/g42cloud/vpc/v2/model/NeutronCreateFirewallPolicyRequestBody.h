
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateFirewallPolicyOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallPolicyRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallPolicyRequestBody();
    virtual ~NeutronCreateFirewallPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateFirewallPolicyRequestBody members


    NeutronCreateFirewallPolicyOption getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronCreateFirewallPolicyOption& value);


protected:
    NeutronCreateFirewallPolicyOption firewallPolicy_;
    bool firewallPolicyIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequestBody_H_
