
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MixInfo.h>
#include <g42cloud/mpc/v1/model/ClipInfo.h>
#include <g42cloud/mpc/v1/model/OutputSetting.h>
#include <g42cloud/mpc/v1/model/EditSetting.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/ConcatInfo.h>
#include <g42cloud/mpc/v1/model/MultiConcatInfo.h>
#include <g42cloud/mpc/v1/model/ImageWatermarkSetting.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateEditingJobReq
    : public ModelBase
{
public:
    CreateEditingJobReq();
    virtual ~CreateEditingJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEditingJobReq members


    std::vector<std::string>& getEditType();
    bool editTypeIsSet() const;
    void unseteditType();
    void setEditType(const std::vector<std::string>& value);


    std::vector<ClipInfo>& getClips();
    bool clipsIsSet() const;
    void unsetclips();
    void setClips(const std::vector<ClipInfo>& value);


    std::vector<MultiConcatInfo>& getConcats();
    bool concatsIsSet() const;
    void unsetconcats();
    void setConcats(const std::vector<MultiConcatInfo>& value);


    ConcatInfo getConcat() const;
    bool concatIsSet() const;
    void unsetconcat();
    void setConcat(const ConcatInfo& value);


    MixInfo getMix() const;
    bool mixIsSet() const;
    void unsetmix();
    void setMix(const MixInfo& value);


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    OutputSetting getOutputSetting() const;
    bool outputSettingIsSet() const;
    void unsetoutputSetting();
    void setOutputSetting(const OutputSetting& value);


    std::vector<ImageWatermarkSetting>& getImageWatermarkSettings();
    bool imageWatermarkSettingsIsSet() const;
    void unsetimageWatermarkSettings();
    void setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value);


    std::vector<EditSetting>& getEditSettings();
    bool editSettingsIsSet() const;
    void unseteditSettings();
    void setEditSettings(const std::vector<EditSetting>& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::vector<std::string> editType_;
    bool editTypeIsSet_;
    std::vector<ClipInfo> clips_;
    bool clipsIsSet_;
    std::vector<MultiConcatInfo> concats_;
    bool concatsIsSet_;
    ConcatInfo concat_;
    bool concatIsSet_;
    MixInfo mix_;
    bool mixIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    OutputSetting outputSetting_;
    bool outputSettingIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarkSettings_;
    bool imageWatermarkSettingsIsSet_;
    std::vector<EditSetting> editSettings_;
    bool editSettingsIsSet_;
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateEditingJobReq_H_
