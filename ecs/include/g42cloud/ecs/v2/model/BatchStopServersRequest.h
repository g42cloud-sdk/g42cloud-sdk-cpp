
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchStopServersRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchStopServersRequest
    : public ModelBase
{
public:
    BatchStopServersRequest();
    virtual ~BatchStopServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopServersRequest members


    BatchStopServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchStopServersRequestBody& value);


protected:
    BatchStopServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchStopServersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchStopServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_
