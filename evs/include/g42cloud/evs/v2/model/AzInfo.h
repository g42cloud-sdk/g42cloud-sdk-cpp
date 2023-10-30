
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_AzInfo_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_AzInfo_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/evs/v2/model/ZoneState.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  AzInfo
    : public ModelBase
{
public:
    AzInfo();
    virtual ~AzInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AzInfo members


    std::string getZoneName() const;
    bool zoneNameIsSet() const;
    void unsetzoneName();
    void setZoneName(const std::string& value);


    ZoneState getZoneState() const;
    bool zoneStateIsSet() const;
    void unsetzoneState();
    void setZoneState(const ZoneState& value);


protected:
    std::string zoneName_;
    bool zoneNameIsSet_;
    ZoneState zoneState_;
    bool zoneStateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_AzInfo_H_
