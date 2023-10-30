
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/NeutronRemoveFirewallRuleRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronRemoveFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronRemoveFirewallRuleRequest();
    virtual ~NeutronRemoveFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronRemoveFirewallRuleRequest members


    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);


    NeutronRemoveFirewallRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronRemoveFirewallRuleRequestBody& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;
    NeutronRemoveFirewallRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronRemoveFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronRemoveFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequest_H_
