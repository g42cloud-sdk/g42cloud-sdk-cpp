
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronInsertFirewallRuleRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronAddFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronAddFirewallRuleRequest();
    virtual ~NeutronAddFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronAddFirewallRuleRequest members


    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);


    NeutronInsertFirewallRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronInsertFirewallRuleRequestBody& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;
    NeutronInsertFirewallRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronAddFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronAddFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleRequest_H_
