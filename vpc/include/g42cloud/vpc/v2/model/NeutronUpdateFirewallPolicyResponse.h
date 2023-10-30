
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronFirewallPolicy.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateFirewallPolicyResponse();
    virtual ~NeutronUpdateFirewallPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyResponse members


    NeutronFirewallPolicy getFirewallPolicy() const;
    bool firewallPolicyIsSet() const;
    void unsetfirewallPolicy();
    void setFirewallPolicy(const NeutronFirewallPolicy& value);


protected:
    NeutronFirewallPolicy firewallPolicy_;
    bool firewallPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyResponse_H_
