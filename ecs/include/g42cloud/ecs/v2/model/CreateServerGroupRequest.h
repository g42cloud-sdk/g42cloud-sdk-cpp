
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/CreateServerGroupRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreateServerGroupRequest
    : public ModelBase
{
public:
    CreateServerGroupRequest();
    virtual ~CreateServerGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServerGroupRequest members


    CreateServerGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateServerGroupRequestBody& value);


protected:
    CreateServerGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateServerGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateServerGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreateServerGroupRequest_H_
