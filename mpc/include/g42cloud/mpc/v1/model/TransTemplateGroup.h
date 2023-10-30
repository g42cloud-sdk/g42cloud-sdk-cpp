
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_TransTemplateGroup_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_TransTemplateGroup_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/Audio.h>
#include <g42cloud/mpc/v1/model/VideoCommon.h>
#include <g42cloud/mpc/v1/model/VideoObj.h>
#include <string>
#include <vector>
#include <g42cloud/mpc/v1/model/Common.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  TransTemplateGroup
    : public ModelBase
{
public:
    TransTemplateGroup();
    virtual ~TransTemplateGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransTemplateGroup members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::vector<VideoObj>& getVideos();
    bool videosIsSet() const;
    void unsetvideos();
    void setVideos(const std::vector<VideoObj>& value);


    Audio getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const Audio& value);


    VideoCommon getVideoCommon() const;
    bool videoCommonIsSet() const;
    void unsetvideoCommon();
    void setVideoCommon(const VideoCommon& value);


    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<VideoObj> videos_;
    bool videosIsSet_;
    Audio audio_;
    bool audioIsSet_;
    VideoCommon videoCommon_;
    bool videoCommonIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_TransTemplateGroup_H_
