
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberResponse_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DeleteServerGroupMemberResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteServerGroupMemberResponse();
    virtual ~DeleteServerGroupMemberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteServerGroupMemberResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberResponse_H_
