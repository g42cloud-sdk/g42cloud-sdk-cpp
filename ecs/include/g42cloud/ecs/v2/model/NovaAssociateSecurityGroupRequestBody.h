
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaAddSecurityGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaAssociateSecurityGroupRequestBody
    : public ModelBase
{
public:
    NovaAssociateSecurityGroupRequestBody();
    virtual ~NovaAssociateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAssociateSecurityGroupRequestBody members


    NovaAddSecurityGroupOption getAddSecurityGroup() const;
    bool addSecurityGroupIsSet() const;
    void unsetaddSecurityGroup();
    void setAddSecurityGroup(const NovaAddSecurityGroupOption& value);


protected:
    NovaAddSecurityGroupOption addSecurityGroup_;
    bool addSecurityGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequestBody_H_
