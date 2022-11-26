
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_

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
class G42CLOUD_VPC_V2_EXPORT  NeutronShowFirewallPolicyRequest
    : public ModelBase
{
public:
    NeutronShowFirewallPolicyRequest();
    virtual ~NeutronShowFirewallPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowFirewallPolicyRequest members


    std::string getFirewallPolicyId() const;
    bool firewallPolicyIdIsSet() const;
    void unsetfirewallPolicyId();
    void setFirewallPolicyId(const std::string& value);


protected:
    std::string firewallPolicyId_;
    bool firewallPolicyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowFirewallPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowFirewallPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallPolicyRequest_H_
