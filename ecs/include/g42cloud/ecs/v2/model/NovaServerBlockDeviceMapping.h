
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_

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
class G42CLOUD_ECS_V2_EXPORT  NovaServerBlockDeviceMapping
    : public ModelBase
{
public:
    NovaServerBlockDeviceMapping();
    virtual ~NovaServerBlockDeviceMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerBlockDeviceMapping members


    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);


    std::string getDestinationType() const;
    bool destinationTypeIsSet() const;
    void unsetdestinationType();
    void setDestinationType(const std::string& value);


    std::string getGuestFormat() const;
    bool guestFormatIsSet() const;
    void unsetguestFormat();
    void setGuestFormat(const std::string& value);


    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);


    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


    std::string getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(const std::string& value);


    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);


    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);


    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


protected:
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::string destinationType_;
    bool destinationTypeIsSet_;
    std::string guestFormat_;
    bool guestFormatIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string bootIndex_;
    bool bootIndexIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_
