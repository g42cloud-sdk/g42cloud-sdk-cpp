
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MpeMetaData
    : public ModelBase
{
public:
    MpeMetaData();
    virtual ~MpeMetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MpeMetaData members


    std::string getPackType() const;
    bool packTypeIsSet() const;
    void unsetpackType();
    void setPackType(const std::string& value);


    double getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(double value);


    int64_t getVideoSize() const;
    bool videoSizeIsSet() const;
    void unsetvideoSize();
    void setVideoSize(int64_t value);


    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


    int32_t getBitRate() const;
    bool bitRateIsSet() const;
    void unsetbitRate();
    void setBitRate(int32_t value);


    int32_t getAudioBitRate() const;
    bool audioBitRateIsSet() const;
    void unsetaudioBitRate();
    void setAudioBitRate(int32_t value);


    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


    std::string getCodecName() const;
    bool codecNameIsSet() const;
    void unsetcodecName();
    void setCodecName(const std::string& value);


    std::string getAudioCodecName() const;
    bool audioCodecNameIsSet() const;
    void unsetaudioCodecName();
    void setAudioCodecName(const std::string& value);


    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);


    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);


    bool isIsAudio() const;
    bool isAudioIsSet() const;
    void unsetisAudio();
    void setIsAudio(bool value);


protected:
    std::string packType_;
    bool packTypeIsSet_;
    double duration_;
    bool durationIsSet_;
    int64_t videoSize_;
    bool videoSizeIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitRate_;
    bool bitRateIsSet_;
    int32_t audioBitRate_;
    bool audioBitRateIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    std::string codecName_;
    bool codecNameIsSet_;
    std::string audioCodecName_;
    bool audioCodecNameIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    bool isAudio_;
    bool isAudioIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MpeMetaData_H_
