
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaAvailabilityZone.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListAvailabilityZonesResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListAvailabilityZonesResponse();
    virtual ~NovaListAvailabilityZonesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListAvailabilityZonesResponse members


    std::vector<NovaAvailabilityZone>& getAvailabilityZoneInfo();
    bool availabilityZoneInfoIsSet() const;
    void unsetavailabilityZoneInfo();
    void setAvailabilityZoneInfo(const std::vector<NovaAvailabilityZone>& value);


protected:
    std::vector<NovaAvailabilityZone> availabilityZoneInfo_;
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

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_
