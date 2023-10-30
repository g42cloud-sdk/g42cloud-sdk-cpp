
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateFirewallGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallGroupRequestBody
    : public ModelBase
{
public:
    NeutronCreateFirewallGroupRequestBody();
    virtual ~NeutronCreateFirewallGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateFirewallGroupRequestBody members


    NeutronCreateFirewallGroupOption getFirewallGroup() const;
    bool firewallGroupIsSet() const;
    void unsetfirewallGroup();
    void setFirewallGroup(const NeutronCreateFirewallGroupOption& value);


protected:
    NeutronCreateFirewallGroupOption firewallGroup_;
    bool firewallGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequestBody_H_
