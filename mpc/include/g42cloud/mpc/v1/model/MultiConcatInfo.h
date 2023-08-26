
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AvParameters.h>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/ImageWatermarkSetting.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MultiConcatInfo
    : public ModelBase
{
public:
    MultiConcatInfo();
    virtual ~MultiConcatInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiConcatInfo members


    std::vector<ObsObjInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<ObsObjInfo>& value);


    std::vector<int32_t>& getTransTemplateIds();
    bool transTemplateIdsIsSet() const;
    void unsettransTemplateIds();
    void setTransTemplateIds(std::vector<int32_t> value);


    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::vector<ImageWatermarkSetting>& getImageWatermarkSettings();
    bool imageWatermarkSettingsIsSet() const;
    void unsetimageWatermarkSettings();
    void setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value);


protected:
    std::vector<ObsObjInfo> inputs_;
    bool inputsIsSet_;
    std::vector<int32_t> transTemplateIds_;
    bool transTemplateIdsIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarkSettings_;
    bool imageWatermarkSettingsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MultiConcatInfo_H_
