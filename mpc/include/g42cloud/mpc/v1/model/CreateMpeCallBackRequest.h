
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateMpeCallBackRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateMpeCallBackRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MpeCallBackReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateMpeCallBackRequest
    : public ModelBase
{
public:
    CreateMpeCallBackRequest();
    virtual ~CreateMpeCallBackRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMpeCallBackRequest members


    MpeCallBackReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MpeCallBackReq& value);


protected:
    MpeCallBackReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMpeCallBackRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMpeCallBackRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateMpeCallBackRequest_H_
