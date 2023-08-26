
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CreateTranscodingReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateTranscodingTaskRequest
    : public ModelBase
{
public:
    CreateTranscodingTaskRequest();
    virtual ~CreateTranscodingTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTranscodingTaskRequest members


    CreateTranscodingReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTranscodingReq& value);


protected:
    CreateTranscodingReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTranscodingTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTranscodingTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskRequest_H_
