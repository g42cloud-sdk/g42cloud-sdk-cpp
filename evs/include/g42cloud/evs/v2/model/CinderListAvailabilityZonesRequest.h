
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesRequest_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListAvailabilityZonesRequest
    : public ModelBase
{
public:
    CinderListAvailabilityZonesRequest();
    virtual ~CinderListAvailabilityZonesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderListAvailabilityZonesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListAvailabilityZonesRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListAvailabilityZonesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesRequest_H_
