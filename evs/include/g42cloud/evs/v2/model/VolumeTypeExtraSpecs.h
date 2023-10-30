
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  VolumeTypeExtraSpecs
    : public ModelBase
{
public:
    VolumeTypeExtraSpecs();
    virtual ~VolumeTypeExtraSpecs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeTypeExtraSpecs members


    std::string getRESKEYavailabilityZones() const;
    bool rESKEYavailabilityZonesIsSet() const;
    void unsetrESKEYavailabilityZones();
    void setRESKEYavailabilityZones(const std::string& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    std::string getOsVendorExtendedsoldOutAvailabilityZones() const;
    bool osVendorExtendedsoldOutAvailabilityZonesIsSet() const;
    void unsetosVendorExtendedsoldOutAvailabilityZones();
    void setOsVendorExtendedsoldOutAvailabilityZones(const std::string& value);


    std::string getVolumeBackendName() const;
    bool volumeBackendNameIsSet() const;
    void unsetvolumeBackendName();
    void setVolumeBackendName(const std::string& value);


    std::string getHWavailabilityZone() const;
    bool hWavailabilityZoneIsSet() const;
    void unsethWavailabilityZone();
    void setHWavailabilityZone(const std::string& value);


protected:
    std::string rESKEYavailabilityZones_;
    bool rESKEYavailabilityZonesIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string osVendorExtendedsoldOutAvailabilityZones_;
    bool osVendorExtendedsoldOutAvailabilityZonesIsSet_;
    std::string volumeBackendName_;
    bool volumeBackendNameIsSet_;
    std::string hWavailabilityZone_;
    bool hWavailabilityZoneIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_VolumeTypeExtraSpecs_H_
