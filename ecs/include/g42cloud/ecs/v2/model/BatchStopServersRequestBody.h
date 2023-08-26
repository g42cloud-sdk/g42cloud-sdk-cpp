
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchStopServersOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchStopServersRequestBody
    : public ModelBase
{
public:
    BatchStopServersRequestBody();
    virtual ~BatchStopServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopServersRequestBody members


    BatchStopServersOption getOsStop() const;
    bool osStopIsSet() const;
    void unsetosStop();
    void setOsStop(const BatchStopServersOption& value);


protected:
    BatchStopServersOption osStop_;
    bool osStopIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequestBody_H_
