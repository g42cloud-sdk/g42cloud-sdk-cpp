
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateMediaProcessTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateMediaProcessTaskRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CreateMediaProcessReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateMediaProcessTaskRequest
    : public ModelBase
{
public:
    CreateMediaProcessTaskRequest();
    virtual ~CreateMediaProcessTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMediaProcessTaskRequest members


    CreateMediaProcessReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMediaProcessReq& value);


protected:
    CreateMediaProcessReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMediaProcessTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMediaProcessTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateMediaProcessTaskRequest_H_
