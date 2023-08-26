
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListVolumeTypesRequest
    : public ModelBase
{
public:
    CinderListVolumeTypesRequest();
    virtual ~CinderListVolumeTypesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListVolumeTypesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListVolumeTypesRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListVolumeTypesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTypesRequest_H_
