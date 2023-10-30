
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronDeleteFirewallRuleRequest
    : public ModelBase
{
public:
    NeutronDeleteFirewallRuleRequest();
    virtual ~NeutronDeleteFirewallRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronDeleteFirewallRuleRequest members


    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronDeleteFirewallRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronDeleteFirewallRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronDeleteFirewallRuleRequest_H_
