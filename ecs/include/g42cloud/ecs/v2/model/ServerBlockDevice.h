
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_

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
class G42CLOUD_ECS_V2_EXPORT  ServerBlockDevice
    : public ModelBase
{
public:
    ServerBlockDevice();
    virtual ~ServerBlockDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerBlockDevice members


    int32_t getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(int32_t value);


    std::string getPciAddress() const;
    bool pciAddressIsSet() const;
    void unsetpciAddress();
    void setPciAddress(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getBus() const;
    bool busIsSet() const;
    void unsetbus();
    void setBus(const std::string& value);


protected:
    int32_t bootIndex_;
    bool bootIndexIsSet_;
    std::string pciAddress_;
    bool pciAddressIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string device_;
    bool deviceIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string bus_;
    bool busIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_
