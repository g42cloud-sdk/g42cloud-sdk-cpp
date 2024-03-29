
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolumeExtendParam_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolumeExtendParam_H_


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
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerDataVolumeExtendParam
    : public ModelBase
{
public:
    PrePaidServerDataVolumeExtendParam();
    virtual ~PrePaidServerDataVolumeExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidServerDataVolumeExtendParam members


    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);


    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


protected:
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolumeExtendParam_H_
