
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_WatermarkTemplate_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_WatermarkTemplate_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ImageWatermark.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  WatermarkTemplate
    : public ModelBase
{
public:
    WatermarkTemplate();
    virtual ~WatermarkTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WatermarkTemplate members


    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);


    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);


    std::string getReferpos() const;
    bool referposIsSet() const;
    void unsetreferpos();
    void setReferpos(const std::string& value);


    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);


    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);


    std::string getImageProcess() const;
    bool imageProcessIsSet() const;
    void unsetimageProcess();
    void setImageProcess(const std::string& value);


    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);


    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);


    std::string getBase() const;
    bool baseIsSet() const;
    void unsetbase();
    void setBase(const std::string& value);


    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string dx_;
    bool dxIsSet_;
    std::string dy_;
    bool dyIsSet_;
    std::string referpos_;
    bool referposIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineDuration_;
    bool timelineDurationIsSet_;
    std::string imageProcess_;
    bool imageProcessIsSet_;
    std::string width_;
    bool widthIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string base_;
    bool baseIsSet_;
    int32_t templateId_;
    bool templateIdIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_WatermarkTemplate_H_
