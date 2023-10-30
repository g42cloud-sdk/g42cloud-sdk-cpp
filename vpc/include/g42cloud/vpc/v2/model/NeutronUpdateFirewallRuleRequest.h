
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallRuleRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronUpdateFirewallRuleRequest();
    virtual ~NeutronUpdateFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallRuleRequest members


    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);


    NeutronUpdateFirewallRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateFirewallRuleRequestBody& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;
    NeutronUpdateFirewallRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallRuleRequest_H_
