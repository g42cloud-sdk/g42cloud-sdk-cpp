
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_Audio_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_Audio_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/OutputPolicy.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  Audio
    : public ModelBase
{
public:
    Audio();
    virtual ~Audio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Audio members


    std::string getOutputPolicy() const;
    bool outputPolicyIsSet() const;
    void unsetoutputPolicy();
    void setOutputPolicy(const std::string& value);


    int32_t getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(int32_t value);


    int32_t getSampleRate() const;
    bool sampleRateIsSet() const;
    void unsetsampleRate();
    void setSampleRate(int32_t value);


    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);


    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);


protected:
    std::string outputPolicy_;
    bool outputPolicyIsSet_;
    int32_t codec_;
    bool codecIsSet_;
    int32_t sampleRate_;
    bool sampleRateIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t channels_;
    bool channelsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_Audio_H_
