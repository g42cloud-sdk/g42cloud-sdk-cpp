
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_

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
class G42CLOUD_MPC_V1_EXPORT  DeleteQualityEnhanceTemplateRequest
    : public ModelBase
{
public:
    DeleteQualityEnhanceTemplateRequest();
    virtual ~DeleteQualityEnhanceTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteQualityEnhanceTemplateRequest members


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
    DeleteQualityEnhanceTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteQualityEnhanceTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_
