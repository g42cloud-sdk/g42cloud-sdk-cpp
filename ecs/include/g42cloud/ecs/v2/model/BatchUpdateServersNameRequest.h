
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequest_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchUpdateServersNameRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchUpdateServersNameRequest
    : public ModelBase
{
public:
    BatchUpdateServersNameRequest();
    virtual ~BatchUpdateServersNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateServersNameRequest members


    BatchUpdateServersNameRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpdateServersNameRequestBody& value);


protected:
    BatchUpdateServersNameRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateServersNameRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateServersNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequest_H_
