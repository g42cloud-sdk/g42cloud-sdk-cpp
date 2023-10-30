
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFirewallGroupRequestBody();
    virtual ~NeutronUpdateFirewallGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupRequestBody members


    NeutronUpdateFirewallGroupOption getFirewallGroup() const;
    bool firewallGroupIsSet() const;
    void unsetfirewallGroup();
    void setFirewallGroup(const NeutronUpdateFirewallGroupOption& value);


protected:
    NeutronUpdateFirewallGroupOption firewallGroup_;
    bool firewallGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupRequestBody_H_
