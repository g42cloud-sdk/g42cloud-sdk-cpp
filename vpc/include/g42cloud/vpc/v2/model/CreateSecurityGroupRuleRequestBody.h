
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateSecurityGroupRuleOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateSecurityGroupRuleRequestBody
    : public ModelBase
{
public:
    CreateSecurityGroupRuleRequestBody();
    virtual ~CreateSecurityGroupRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSecurityGroupRuleRequestBody members


    CreateSecurityGroupRuleOption getSecurityGroupRule() const;
    bool securityGroupRuleIsSet() const;
    void unsetsecurityGroupRule();
    void setSecurityGroupRule(const CreateSecurityGroupRuleOption& value);


protected:
    CreateSecurityGroupRuleOption securityGroupRule_;
    bool securityGroupRuleIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRuleRequestBody_H_
