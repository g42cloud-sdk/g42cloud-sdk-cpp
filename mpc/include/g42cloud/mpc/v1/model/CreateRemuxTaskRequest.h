
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CreateRemuxTaskReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateRemuxTaskRequest
    : public ModelBase
{
public:
    CreateRemuxTaskRequest();
    virtual ~CreateRemuxTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateRemuxTaskRequest members


    CreateRemuxTaskReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateRemuxTaskReq& value);


protected:
    CreateRemuxTaskReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRemuxTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRemuxTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateRemuxTaskRequest_H_
