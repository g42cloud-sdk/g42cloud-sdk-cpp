
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateSecurityGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateSecurityGroupRequestBody
    : public ModelBase
{
public:
    CreateSecurityGroupRequestBody();
    virtual ~CreateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRequestBody members


    CreateSecurityGroupOption getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const CreateSecurityGroupOption& value);


protected:
    CreateSecurityGroupOption securityGroup_;
    bool securityGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_
