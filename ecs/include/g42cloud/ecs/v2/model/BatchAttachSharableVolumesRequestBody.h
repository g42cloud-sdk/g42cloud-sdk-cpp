
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchAttachSharableVolumesOption.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchAttachSharableVolumesRequestBody
    : public ModelBase
{
public:
    BatchAttachSharableVolumesRequestBody();
    virtual ~BatchAttachSharableVolumesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAttachSharableVolumesRequestBody members


    std::vector<BatchAttachSharableVolumesOption>& getServerinfo();
    bool serverinfoIsSet() const;
    void unsetserverinfo();
    void setServerinfo(const std::vector<BatchAttachSharableVolumesOption>& value);


protected:
    std::vector<BatchAttachSharableVolumesOption> serverinfo_;
    bool serverinfoIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesRequestBody_H_
