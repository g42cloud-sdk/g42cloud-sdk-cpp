
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListAvailabilityZonesRequest
    : public ModelBase
{
public:
    NovaListAvailabilityZonesRequest();
    virtual ~NovaListAvailabilityZonesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListAvailabilityZonesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListAvailabilityZonesRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListAvailabilityZonesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_
