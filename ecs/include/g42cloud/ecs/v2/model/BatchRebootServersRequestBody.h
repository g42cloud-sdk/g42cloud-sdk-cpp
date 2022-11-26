
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchRebootSeversOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchRebootServersRequestBody
    : public ModelBase
{
public:
    BatchRebootServersRequestBody();
    virtual ~BatchRebootServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchRebootServersRequestBody members


    BatchRebootSeversOption getReboot() const;
    bool rebootIsSet() const;
    void unsetreboot();
    void setReboot(const BatchRebootSeversOption& value);


protected:
    BatchRebootSeversOption reboot_;
    bool rebootIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchRebootServersRequestBody_H_
