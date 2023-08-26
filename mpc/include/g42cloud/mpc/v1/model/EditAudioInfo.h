
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_

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
class G42CLOUD_MPC_V1_EXPORT  EditAudioInfo
    : public ModelBase
{
public:
    EditAudioInfo();
    virtual ~EditAudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditAudioInfo members


    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);


    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);


    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);


    std::string getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(const std::string& value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    std::string channels_;
    bool channelsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_EditAudioInfo_H_
