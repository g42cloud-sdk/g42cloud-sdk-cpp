
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/EditVideoInfo.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/EditHlsInfo.h>
#include <g42cloud/mpc/v1/model/EditAudioInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OutputSetting
    : public ModelBase
{
public:
    OutputSetting();
    virtual ~OutputSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputSetting members


    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


    EditVideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const EditVideoInfo& value);


    EditAudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const EditAudioInfo& value);


    EditHlsInfo getHls() const;
    bool hlsIsSet() const;
    void unsethls();
    void setHls(const EditHlsInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    std::string format_;
    bool formatIsSet_;
    EditVideoInfo video_;
    bool videoIsSet_;
    EditAudioInfo audio_;
    bool audioIsSet_;
    EditHlsInfo hls_;
    bool hlsIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_
