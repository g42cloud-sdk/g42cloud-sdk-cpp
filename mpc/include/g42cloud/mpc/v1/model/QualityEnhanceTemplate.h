
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/QualityEnhanceVideo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  QualityEnhanceTemplate
    : public ModelBase
{
public:
    QualityEnhanceTemplate();
    virtual ~QualityEnhanceTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualityEnhanceTemplate members


    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


    std::string getTemplateDescription() const;
    bool templateDescriptionIsSet() const;
    void unsettemplateDescription();
    void setTemplateDescription(const std::string& value);


    QualityEnhanceVideo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const QualityEnhanceVideo& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateDescription_;
    bool templateDescriptionIsSet_;
    QualityEnhanceVideo video_;
    bool videoIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_
