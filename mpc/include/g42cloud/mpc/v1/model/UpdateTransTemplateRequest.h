
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateTransTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateTransTemplateRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ModifyTransTemplateReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateTransTemplateRequest
    : public ModelBase
{
public:
    UpdateTransTemplateRequest();
    virtual ~UpdateTransTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTransTemplateRequest members


    ModifyTransTemplateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyTransTemplateReq& value);


protected:
    ModifyTransTemplateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTransTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTransTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateTransTemplateRequest_H_
