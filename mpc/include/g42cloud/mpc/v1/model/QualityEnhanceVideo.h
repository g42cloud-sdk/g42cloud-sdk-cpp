
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/VideoSaturation.h>
#include <g42cloud/mpc/v1/model/VideoSuperresolution.h>
#include <g42cloud/mpc/v1/model/VideoContrast.h>
#include <g42cloud/mpc/v1/model/VideoDeblock.h>
#include <g42cloud/mpc/v1/model/VideoSharp.h>
#include <g42cloud/mpc/v1/model/VideoDenoise.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  QualityEnhanceVideo
    : public ModelBase
{
public:
    QualityEnhanceVideo();
    virtual ~QualityEnhanceVideo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QualityEnhanceVideo members


    VideoDenoise getVideoDenoise() const;
    bool videoDenoiseIsSet() const;
    void unsetvideoDenoise();
    void setVideoDenoise(const VideoDenoise& value);


    VideoSharp getVideoSharp() const;
    bool videoSharpIsSet() const;
    void unsetvideoSharp();
    void setVideoSharp(const VideoSharp& value);


    VideoContrast getVideoContrast() const;
    bool videoContrastIsSet() const;
    void unsetvideoContrast();
    void setVideoContrast(const VideoContrast& value);


    VideoSuperresolution getVideoSuperresolution() const;
    bool videoSuperresolutionIsSet() const;
    void unsetvideoSuperresolution();
    void setVideoSuperresolution(const VideoSuperresolution& value);


    VideoDeblock getVideoDeblock() const;
    bool videoDeblockIsSet() const;
    void unsetvideoDeblock();
    void setVideoDeblock(const VideoDeblock& value);


    VideoSaturation getVideoSaturation() const;
    bool videoSaturationIsSet() const;
    void unsetvideoSaturation();
    void setVideoSaturation(const VideoSaturation& value);


protected:
    VideoDenoise videoDenoise_;
    bool videoDenoiseIsSet_;
    VideoSharp videoSharp_;
    bool videoSharpIsSet_;
    VideoContrast videoContrast_;
    bool videoContrastIsSet_;
    VideoSuperresolution videoSuperresolution_;
    bool videoSuperresolutionIsSet_;
    VideoDeblock videoDeblock_;
    bool videoDeblockIsSet_;
    VideoSaturation videoSaturation_;
    bool videoSaturationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_QualityEnhanceVideo_H_
