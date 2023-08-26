
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BlockDeviceAttachableQuantity.h>
#include <vector>
#include <g42cloud/ecs/v2/model/ServerBlockDevice.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListServerBlockDevicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerBlockDevicesResponse();
    virtual ~ListServerBlockDevicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerBlockDevicesResponse members


    BlockDeviceAttachableQuantity getAttachableQuantity() const;
    bool attachableQuantityIsSet() const;
    void unsetattachableQuantity();
    void setAttachableQuantity(const BlockDeviceAttachableQuantity& value);


    std::vector<ServerBlockDevice>& getVolumeAttachments();
    bool volumeAttachmentsIsSet() const;
    void unsetvolumeAttachments();
    void setVolumeAttachments(const std::vector<ServerBlockDevice>& value);


protected:
    BlockDeviceAttachableQuantity attachableQuantity_;
    bool attachableQuantityIsSet_;
    std::vector<ServerBlockDevice> volumeAttachments_;
    bool volumeAttachmentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_
