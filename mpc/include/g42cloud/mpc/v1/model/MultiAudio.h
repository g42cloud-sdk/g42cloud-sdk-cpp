
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AudioFile.h>
#include <string>
#include <vector>
#include <g42cloud/mpc/v1/model/TracksInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MultiAudio
    : public ModelBase
{
public:
    MultiAudio();
    virtual ~MultiAudio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiAudio members


    std::vector<TracksInfo>& getTracksInfo();
    bool tracksInfoIsSet() const;
    void unsettracksInfo();
    void setTracksInfo(const std::vector<TracksInfo>& value);


    std::vector<AudioFile>& getAudioFiles();
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const std::vector<AudioFile>& value);


    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);


protected:
    std::vector<TracksInfo> tracksInfo_;
    bool tracksInfoIsSet_;
    std::vector<AudioFile> audioFiles_;
    bool audioFilesIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_
