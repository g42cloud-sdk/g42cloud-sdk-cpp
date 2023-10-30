
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/UpdateQualityEnhanceTemplateReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateQualityEnhanceTemplateRequest
    : public ModelBase
{
public:
    UpdateQualityEnhanceTemplateRequest();
    virtual ~UpdateQualityEnhanceTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateQualityEnhanceTemplateRequest members


    UpdateQualityEnhanceTemplateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateQualityEnhanceTemplateReq& value);


protected:
    UpdateQualityEnhanceTemplateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateQualityEnhanceTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateQualityEnhanceTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateRequest_H_
