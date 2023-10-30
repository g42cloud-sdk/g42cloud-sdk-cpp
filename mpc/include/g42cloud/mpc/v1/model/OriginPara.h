
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OriginPara_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OriginPara_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AudioInfo.h>
#include <string>
#include <g42cloud/mpc/v1/model/VideoInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OriginPara
    : public ModelBase
{
public:
    OriginPara();
    virtual ~OriginPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OriginPara members


    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


    int64_t getDurationMs() const;
    bool durationMsIsSet() const;
    void unsetdurationMs();
    void setDurationMs(int64_t value);


    std::string getFileFormat() const;
    bool fileFormatIsSet() const;
    void unsetfileFormat();
    void setFileFormat(const std::string& value);


    VideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoInfo& value);


    AudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const AudioInfo& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    int64_t durationMs_;
    bool durationMsIsSet_;
    std::string fileFormat_;
    bool fileFormatIsSet_;
    VideoInfo video_;
    bool videoIsSet_;
    AudioInfo audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OriginPara_H_
