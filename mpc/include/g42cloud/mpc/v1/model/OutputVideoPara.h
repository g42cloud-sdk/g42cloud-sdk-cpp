
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AudioInfo.h>
#include <string>
#include <g42cloud/mpc/v1/model/XCodeError.h>
#include <g42cloud/mpc/v1/model/VideoInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OutputVideoPara
    : public ModelBase
{
public:
    OutputVideoPara();
    virtual ~OutputVideoPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputVideoPara members


    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


    std::string getPack() const;
    bool packIsSet() const;
    void unsetpack();
    void setPack(const std::string& value);


    VideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoInfo& value);


    AudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const AudioInfo& value);


    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


    double getConverDuration() const;
    bool converDurationIsSet() const;
    void unsetconverDuration();
    void setConverDuration(double value);


    XCodeError getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const XCodeError& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string pack_;
    bool packIsSet_;
    VideoInfo video_;
    bool videoIsSet_;
    AudioInfo audio_;
    bool audioIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    double converDuration_;
    bool converDurationIsSet_;
    XCodeError error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_
