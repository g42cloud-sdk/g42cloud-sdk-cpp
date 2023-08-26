
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ImageWatermark.h>
#include <g42cloud/mpc/v1/model/TextWatermark.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  WatermarkRequest
    : public ModelBase
{
public:
    WatermarkRequest();
    virtual ~WatermarkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WatermarkRequest members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


    std::string getTextContext() const;
    bool textContextIsSet() const;
    void unsettextContext();
    void setTextContext(const std::string& value);


    ImageWatermark getImageWatermark() const;
    bool imageWatermarkIsSet() const;
    void unsetimageWatermark();
    void setImageWatermark(const ImageWatermark& value);


    TextWatermark getTextWatermark() const;
    bool textWatermarkIsSet() const;
    void unsettextWatermark();
    void setTextWatermark(const TextWatermark& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string textContext_;
    bool textContextIsSet_;
    ImageWatermark imageWatermark_;
    bool imageWatermarkIsSet_;
    TextWatermark textWatermark_;
    bool textWatermarkIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_WatermarkRequest_H_
