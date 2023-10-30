
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/CreateServerGroupOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreateServerGroupRequestBody
    : public ModelBase
{
public:
    CreateServerGroupRequestBody();
    virtual ~CreateServerGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateServerGroupRequestBody members


    CreateServerGroupOption getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const CreateServerGroupOption& value);


protected:
    CreateServerGroupOption serverGroup_;
    bool serverGroupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequestBody_H_
