
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronRemoveFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronRemoveFirewallRuleRequestBody();
    virtual ~NeutronRemoveFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronRemoveFirewallRuleRequestBody members


    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronRemoveFirewallRuleRequestBody_H_
