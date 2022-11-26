
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_

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
class G42CLOUD_ECS_V2_EXPORT  AttachServerVolumeOption
    : public ModelBase
{
public:
    AttachServerVolumeOption();
    virtual ~AttachServerVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachServerVolumeOption members


    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    std::string getHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(const std::string& value);


protected:
    std::string device_;
    bool deviceIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string hwpassthrough_;
    bool hwpassthroughIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_
