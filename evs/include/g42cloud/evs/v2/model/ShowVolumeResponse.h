
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeDetail.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ShowVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVolumeResponse();
    virtual ~ShowVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVolumeResponse members


    VolumeDetail getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const VolumeDetail& value);


protected:
    VolumeDetail volume_;
    bool volumeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ShowVolumeResponse_H_
