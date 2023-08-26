
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaCreateServersSchedulerHint.h>
#include <g42cloud/ecs/v2/model/NovaCreateServersOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateServersRequestBody
    : public ModelBase
{
public:
    NovaCreateServersRequestBody();
    virtual ~NovaCreateServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersRequestBody members


    NovaCreateServersOption getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const NovaCreateServersOption& value);


    NovaCreateServersSchedulerHint getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const NovaCreateServersSchedulerHint& value);


protected:
    NovaCreateServersOption server_;
    bool serverIsSet_;
    NovaCreateServersSchedulerHint osschedulerHints_;
    bool osschedulerHintsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersRequestBody_H_
