
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateQualityEnhanceTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateQualityEnhanceTemplateResponse();
    virtual ~UpdateQualityEnhanceTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateQualityEnhanceTemplateResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateResponse_H_
