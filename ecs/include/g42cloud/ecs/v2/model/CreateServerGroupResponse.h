
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/CreateServerGroupResult.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreateServerGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateServerGroupResponse();
    virtual ~CreateServerGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateServerGroupResponse members


    CreateServerGroupResult getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const CreateServerGroupResult& value);


protected:
    CreateServerGroupResult serverGroup_;
    bool serverGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupResponse_H_
