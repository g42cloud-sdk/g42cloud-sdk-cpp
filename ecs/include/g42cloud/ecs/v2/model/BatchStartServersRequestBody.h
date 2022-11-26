
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchStartServersOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchStartServersRequestBody
    : public ModelBase
{
public:
    BatchStartServersRequestBody();
    virtual ~BatchStartServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStartServersRequestBody members


    BatchStartServersOption getOsStart() const;
    bool osStartIsSet() const;
    void unsetosStart();
    void setOsStart(const BatchStartServersOption& value);


protected:
    BatchStartServersOption osStart_;
    bool osStartIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchStartServersRequestBody_H_
