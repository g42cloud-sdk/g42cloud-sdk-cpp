
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DetachServerVolumeRequest
    : public ModelBase
{
public:
    DetachServerVolumeRequest();
    virtual ~DetachServerVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachServerVolumeRequest members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    std::string getDeleteFlag() const;
    bool deleteFlagIsSet() const;
    void unsetdeleteFlag();
    void setDeleteFlag(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string deleteFlag_;
    bool deleteFlagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachServerVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<DetachServerVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_
