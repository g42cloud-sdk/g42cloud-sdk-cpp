
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListFlavorsRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListFlavorsRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListFlavorsRequest
    : public ModelBase
{
public:
    ListFlavorsRequest();
    virtual ~ListFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFlavorsRequest members


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListFlavorsRequest_H_
