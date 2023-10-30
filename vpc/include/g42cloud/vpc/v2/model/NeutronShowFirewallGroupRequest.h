
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  NeutronShowFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronShowFirewallGroupRequest();
    virtual ~NeutronShowFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronShowFirewallGroupRequest members


    std::string getFirewallGroupId() const;
    bool firewallGroupIdIsSet() const;
    void unsetfirewallGroupId();
    void setFirewallGroupId(const std::string& value);


protected:
    std::string firewallGroupId_;
    bool firewallGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowFirewallGroupRequest_H_
