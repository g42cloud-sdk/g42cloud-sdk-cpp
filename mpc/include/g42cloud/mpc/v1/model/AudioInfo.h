
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  AudioInfo
    : public ModelBase
{
public:
    AudioInfo();
    virtual ~AudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioInfo members


    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);


    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);


    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);


    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);


    int64_t getBitrateBps() const;
    bool bitrateBpsIsSet() const;
    void unsetbitrateBps();
    void setBitrateBps(int64_t value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int64_t bitrateBps_;
    bool bitrateBpsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AudioInfo_H_
