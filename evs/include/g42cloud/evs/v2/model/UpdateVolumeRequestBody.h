
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/UpdateVolumeOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  UpdateVolumeRequestBody
    : public ModelBase
{
public:
    UpdateVolumeRequestBody();
    virtual ~UpdateVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVolumeRequestBody members


    UpdateVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const UpdateVolumeOption& value);


protected:
    UpdateVolumeOption volume_;
    bool volumeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequestBody_H_
