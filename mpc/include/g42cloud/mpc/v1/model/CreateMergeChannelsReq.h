
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MpcMultiAudio.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateMergeChannelsReq
    : public ModelBase
{
public:
    CreateMergeChannelsReq();
    virtual ~CreateMergeChannelsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeChannelsReq members


    MpcMultiAudio getMultiAudio() const;
    bool multiAudioIsSet() const;
    void unsetmultiAudio();
    void setMultiAudio(const MpcMultiAudio& value);


protected:
    MpcMultiAudio multiAudio_;
    bool multiAudioIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_
