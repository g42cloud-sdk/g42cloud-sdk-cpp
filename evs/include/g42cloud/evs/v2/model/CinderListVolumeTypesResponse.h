
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeType.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListVolumeTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListVolumeTypesResponse();
    virtual ~CinderListVolumeTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderListVolumeTypesResponse members


    std::vector<VolumeType>& getVolumeTypes();
    bool volumeTypesIsSet() const;
    void unsetvolumeTypes();
    void setVolumeTypes(const std::vector<VolumeType>& value);


protected:
    std::vector<VolumeType> volumeTypes_;
    bool volumeTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesResponse_H_
