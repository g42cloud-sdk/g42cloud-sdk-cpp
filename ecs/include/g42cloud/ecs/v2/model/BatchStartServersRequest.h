
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchStartServersRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchStartServersRequest
    : public ModelBase
{
public:
    BatchStartServersRequest();
    virtual ~BatchStartServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStartServersRequest members


    BatchStartServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchStartServersRequestBody& value);


protected:
    BatchStartServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchStartServersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchStartServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequest_H_
