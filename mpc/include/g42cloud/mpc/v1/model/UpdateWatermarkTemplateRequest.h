
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/WatermarkTemplate.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateWatermarkTemplateRequest
    : public ModelBase
{
public:
    UpdateWatermarkTemplateRequest();
    virtual ~UpdateWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWatermarkTemplateRequest members


    WatermarkTemplate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WatermarkTemplate& value);


protected:
    WatermarkTemplate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_
