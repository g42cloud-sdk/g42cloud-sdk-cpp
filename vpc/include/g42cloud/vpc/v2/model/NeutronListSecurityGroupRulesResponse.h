
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronSecurityGroupRule.h>
#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListSecurityGroupRulesResponse();
    virtual ~NeutronListSecurityGroupRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListSecurityGroupRulesResponse members


    std::vector<NeutronSecurityGroupRule>& getSecurityGroupRules();
    bool securityGroupRulesIsSet() const;
    void unsetsecurityGroupRules();
    void setSecurityGroupRules(const std::vector<NeutronSecurityGroupRule>& value);


    std::vector<NeutronPageLink>& getSecurityGroupRulesLinks();
    bool securityGroupRulesLinksIsSet() const;
    void unsetsecurityGroupRulesLinks();
    void setSecurityGroupRulesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronSecurityGroupRule> securityGroupRules_;
    bool securityGroupRulesIsSet_;
    std::vector<NeutronPageLink> securityGroupRulesLinks_;
    bool securityGroupRulesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_
