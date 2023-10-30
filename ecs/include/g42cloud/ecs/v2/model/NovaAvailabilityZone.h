
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/NovaAvailabilityZoneState.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaAvailabilityZone
    : public ModelBase
{
public:
    NovaAvailabilityZone();
    virtual ~NovaAvailabilityZone();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAvailabilityZone members


    std::vector<std::string>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<std::string>& value);


    std::string getZoneName() const;
    bool zoneNameIsSet() const;
    void unsetzoneName();
    void setZoneName(const std::string& value);


    NovaAvailabilityZoneState getZoneState() const;
    bool zoneStateIsSet() const;
    void unsetzoneState();
    void setZoneState(const NovaAvailabilityZoneState& value);


protected:
    std::vector<std::string> hosts_;
    bool hostsIsSet_;
    std::string zoneName_;
    bool zoneNameIsSet_;
    NovaAvailabilityZoneState zoneState_;
    bool zoneStateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_
