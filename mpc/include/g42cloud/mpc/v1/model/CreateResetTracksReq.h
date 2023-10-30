
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/SubAudioFile.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateResetTracksReq
    : public ModelBase
{
public:
    CreateResetTracksReq();
    virtual ~CreateResetTracksReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResetTracksReq members


    SubAudioFile getAudioFile() const;
    bool audioFileIsSet() const;
    void unsetaudioFile();
    void setAudioFile(const SubAudioFile& value);


protected:
    SubAudioFile audioFile_;
    bool audioFileIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_
