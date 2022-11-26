
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaRemoveSecurityGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaDisassociateSecurityGroupRequestBody
    : public ModelBase
{
public:
    NovaDisassociateSecurityGroupRequestBody();
    virtual ~NovaDisassociateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaDisassociateSecurityGroupRequestBody members


    NovaRemoveSecurityGroupOption getRemoveSecurityGroup() const;
    bool removeSecurityGroupIsSet() const;
    void unsetremoveSecurityGroup();
    void setRemoveSecurityGroup(const NovaRemoveSecurityGroupOption& value);


protected:
    NovaRemoveSecurityGroupOption removeSecurityGroup_;
    bool removeSecurityGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaDisassociateSecurityGroupRequestBody_H_
