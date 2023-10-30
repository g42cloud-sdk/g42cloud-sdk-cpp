
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AudioFile_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AudioFile_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <vector>
#include <g42cloud/mpc/v1/model/TracksInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  AudioFile
    : public ModelBase
{
public:
    AudioFile();
    virtual ~AudioFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioFile members


    std::vector<TracksInfo>& getTracksInfo();
    bool tracksInfoIsSet() const;
    void unsettracksInfo();
    void setTracksInfo(const std::vector<TracksInfo>& value);


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


protected:
    std::vector<TracksInfo> tracksInfo_;
    bool tracksInfoIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AudioFile_H_
