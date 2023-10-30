
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallGroupRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronUpdateFirewallGroupRequest();
    virtual ~NeutronUpdateFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupRequest members


    std::string getFirewallGroupId() const;
    bool firewallGroupIdIsSet() const;
    void unsetfirewallGroupId();
    void setFirewallGroupId(const std::string& value);


    NeutronUpdateFirewallGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateFirewallGroupRequestBody& value);


protected:
    std::string firewallGroupId_;
    bool firewallGroupIdIsSet_;
    NeutronUpdateFirewallGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequest_H_
