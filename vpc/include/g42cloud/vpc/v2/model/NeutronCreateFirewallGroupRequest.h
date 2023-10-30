
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateFirewallGroupRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronCreateFirewallGroupRequest();
    virtual ~NeutronCreateFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateFirewallGroupRequest members


    NeutronCreateFirewallGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateFirewallGroupRequestBody& value);


protected:
    NeutronCreateFirewallGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_
