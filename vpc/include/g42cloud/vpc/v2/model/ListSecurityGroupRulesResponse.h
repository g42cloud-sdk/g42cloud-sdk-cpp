
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <vector>
#include <g42cloud/vpc/v2/model/SecurityGroupRule.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListSecurityGroupRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecurityGroupRulesResponse();
    virtual ~ListSecurityGroupRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecurityGroupRulesResponse members


    std::vector<SecurityGroupRule>& getSecurityGroupRules();
    bool securityGroupRulesIsSet() const;
    void unsetsecurityGroupRules();
    void setSecurityGroupRules(const std::vector<SecurityGroupRule>& value);


protected:
    std::vector<SecurityGroupRule> securityGroupRules_;
    bool securityGroupRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupRulesResponse_H_
