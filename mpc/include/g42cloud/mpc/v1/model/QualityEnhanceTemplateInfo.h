
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplateInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplateInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/XCodeError.h>
#include <g42cloud/mpc/v1/model/QualityEnhanceTemplate.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  QualityEnhanceTemplateInfo
    : public ModelBase
{
public:
    QualityEnhanceTemplateInfo();
    virtual ~QualityEnhanceTemplateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualityEnhanceTemplateInfo members


    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


    QualityEnhanceTemplate getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const QualityEnhanceTemplate& value);


    XCodeError getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const XCodeError& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    QualityEnhanceTemplate template_;
    bool templateIsSet_;
    XCodeError error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplateInfo_H_
