
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/BatchAttachSharableVolumesRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchAttachSharableVolumesRequest
    : public ModelBase
{
public:
    BatchAttachSharableVolumesRequest();
    virtual ~BatchAttachSharableVolumesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAttachSharableVolumesRequest members


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    BatchAttachSharableVolumesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAttachSharableVolumesRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    BatchAttachSharableVolumesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAttachSharableVolumesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAttachSharableVolumesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequest_H_
