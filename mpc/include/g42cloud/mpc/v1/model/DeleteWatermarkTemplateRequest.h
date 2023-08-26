
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_

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
class G42CLOUD_MPC_V1_EXPORT  DeleteWatermarkTemplateRequest
    : public ModelBase
{
public:
    DeleteWatermarkTemplateRequest();
    virtual ~DeleteWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteWatermarkTemplateRequest members


    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_
