
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateFirewallPolicyRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallPolicyRequest
    : public ModelBase
{
public:
    NeutronCreateFirewallPolicyRequest();
    virtual ~NeutronCreateFirewallPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFirewallPolicyRequest members


    NeutronCreateFirewallPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateFirewallPolicyRequestBody& value);


protected:
    NeutronCreateFirewallPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateFirewallPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateFirewallPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallPolicyRequest_H_
