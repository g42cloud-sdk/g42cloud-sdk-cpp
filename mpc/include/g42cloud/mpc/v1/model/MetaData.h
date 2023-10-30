
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MetaData_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MetaData_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
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
class G42CLOUD_MPC_V1_EXPORT  MetaData
    : public ModelBase
{
public:
    MetaData();
    virtual ~MetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetaData members


    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


    double getDurationMs() const;
    bool durationMsIsSet() const;
    void unsetdurationMs();
    void setDurationMs(double value);


    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);


    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


    int64_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int64_t value);


    std::vector<VideoInfo>& getVideo();
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const std::vector<VideoInfo>& value);


    std::vector<AudioInfo>& getAudio();
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const std::vector<AudioInfo>& value);


protected:
    int64_t size_;
    bool sizeIsSet_;
    double durationMs_;
    bool durationMsIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    std::string format_;
    bool formatIsSet_;
    int64_t bitrate_;
    bool bitrateIsSet_;
    std::vector<VideoInfo> video_;
    bool videoIsSet_;
    std::vector<AudioInfo> audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MetaData_H_
