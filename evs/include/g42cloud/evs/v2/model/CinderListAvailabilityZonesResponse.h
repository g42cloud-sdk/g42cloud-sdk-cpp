
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/AzInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListAvailabilityZonesResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListAvailabilityZonesResponse();
    virtual ~CinderListAvailabilityZonesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListAvailabilityZonesResponse members


    std::vector<AzInfo>& getAvailabilityZoneInfo();
    bool availabilityZoneInfoIsSet() const;
    void unsetavailabilityZoneInfo();
    void setAvailabilityZoneInfo(const std::vector<AzInfo>& value);


protected:
    std::vector<AzInfo> availabilityZoneInfo_;
    bool availabilityZoneInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListAvailabilityZonesResponse_H_
