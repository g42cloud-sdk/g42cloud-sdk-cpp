
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MultiAudio.h>
#include <g42cloud/mpc/v1/model/AvParameters.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/Encryption.h>
#include <g42cloud/mpc/v1/model/Thumbnail.h>
#include <g42cloud/mpc/v1/model/Subtitle.h>
#include <vector>
#include <g42cloud/mpc/v1/model/AudioTrack.h>
#include <g42cloud/mpc/v1/model/VideoProcess.h>
#include <g42cloud/mpc/v1/model/WatermarkRequest.h>
#include <g42cloud/mpc/v1/model/Crop.h>
#include <g42cloud/mpc/v1/model/AudioProcess.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateTranscodingReq
    : public ModelBase
{
public:
    CreateTranscodingReq();
    virtual ~CreateTranscodingReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTranscodingReq members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::vector<int32_t>& getTransTemplateId();
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(std::vector<int32_t> value);


    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);


    std::vector<std::string>& getOutputFilenames();
    bool outputFilenamesIsSet() const;
    void unsetoutputFilenames();
    void setOutputFilenames(const std::vector<std::string>& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::vector<WatermarkRequest>& getWatermarks();
    bool watermarksIsSet() const;
    void unsetwatermarks();
    void setWatermarks(const std::vector<WatermarkRequest>& value);


    Thumbnail getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const Thumbnail& value);


    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);


    Subtitle getSubtitle() const;
    bool subtitleIsSet() const;
    void unsetsubtitle();
    void setSubtitle(const Subtitle& value);


    Encryption getEncryption() const;
    bool encryptionIsSet() const;
    void unsetencryption();
    void setEncryption(const Encryption& value);


    Crop getCrop() const;
    bool cropIsSet() const;
    void unsetcrop();
    void setCrop(const Crop& value);


    AudioTrack getAudioTrack() const;
    bool audioTrackIsSet() const;
    void unsetaudioTrack();
    void setAudioTrack(const AudioTrack& value);


    MultiAudio getMultiAudio() const;
    bool multiAudioIsSet() const;
    void unsetmultiAudio();
    void setMultiAudio(const MultiAudio& value);


    VideoProcess getVideoProcess() const;
    bool videoProcessIsSet() const;
    void unsetvideoProcess();
    void setVideoProcess(const VideoProcess& value);


    AudioProcess getAudioProcess() const;
    bool audioProcessIsSet() const;
    void unsetaudioProcess();
    void setAudioProcess(const AudioProcess& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<int32_t> transTemplateId_;
    bool transTemplateIdIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;
    std::vector<std::string> outputFilenames_;
    bool outputFilenamesIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::vector<WatermarkRequest> watermarks_;
    bool watermarksIsSet_;
    Thumbnail thumbnail_;
    bool thumbnailIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    Subtitle subtitle_;
    bool subtitleIsSet_;
    Encryption encryption_;
    bool encryptionIsSet_;
    Crop crop_;
    bool cropIsSet_;
    AudioTrack audioTrack_;
    bool audioTrackIsSet_;
    MultiAudio multiAudio_;
    bool multiAudioIsSet_;
    VideoProcess videoProcess_;
    bool videoProcessIsSet_;
    AudioProcess audioProcess_;
    bool audioProcessIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateTranscodingReq_H_
