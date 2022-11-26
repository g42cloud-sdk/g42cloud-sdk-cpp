
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/CreatePostPaidServersRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreatePostPaidServersRequest
    : public ModelBase
{
public:
    CreatePostPaidServersRequest();
    virtual ~CreatePostPaidServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePostPaidServersRequest members


    CreatePostPaidServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePostPaidServersRequestBody& value);


protected:
    CreatePostPaidServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePostPaidServersRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePostPaidServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_
