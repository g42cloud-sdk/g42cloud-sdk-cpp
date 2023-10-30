
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/QualityEnhanceTemplate.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateQualityEnhanceTemplateRequest
    : public ModelBase
{
public:
    CreateQualityEnhanceTemplateRequest();
    virtual ~CreateQualityEnhanceTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateQualityEnhanceTemplateRequest members


    QualityEnhanceTemplate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QualityEnhanceTemplate& value);


protected:
    QualityEnhanceTemplate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateQualityEnhanceTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateQualityEnhanceTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateRequest_H_
