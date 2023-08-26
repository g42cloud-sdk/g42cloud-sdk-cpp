
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AudioInfo.h>
#include <string>
#include <g42cloud/mpc/v1/model/VideoInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  SourceInfo
    : public ModelBase
{
public:
    SourceInfo();
    virtual ~SourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SourceInfo members


    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


    int64_t getDurationMs() const;
    bool durationMsIsSet() const;
    void unsetdurationMs();
    void setDurationMs(int64_t value);


    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


    VideoInfo getVideoInfo() const;
    bool videoInfoIsSet() const;
    void unsetvideoInfo();
    void setVideoInfo(const VideoInfo& value);


    std::vector<AudioInfo>& getAudioInfo();
    bool audioInfoIsSet() const;
    void unsetaudioInfo();
    void setAudioInfo(const std::vector<AudioInfo>& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    int64_t durationMs_;
    bool durationMsIsSet_;
    std::string format_;
    bool formatIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    VideoInfo videoInfo_;
    bool videoInfoIsSet_;
    std::vector<AudioInfo> audioInfo_;
    bool audioInfoIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_
