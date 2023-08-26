
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/Audio.h>
#include <string>
#include <g42cloud/mpc/v1/model/Video.h>
#include <g42cloud/mpc/v1/model/Common.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  QueryTransTemplate
    : public ModelBase
{
public:
    QueryTransTemplate();
    virtual ~QueryTransTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryTransTemplate members


    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


    Video getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const Video& value);


    Audio getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const Audio& value);


    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    Video video_;
    bool videoIsSet_;
    Audio audio_;
    bool audioIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_