
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreateServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreateServersRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PrePaidServer.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreateServersRequestBody
    : public ModelBase
{
public:
    CreateServersRequestBody();
    virtual ~CreateServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServersRequestBody members


    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


    PrePaidServer getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const PrePaidServer& value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    PrePaidServer server_;
    bool serverIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreateServersRequestBody_H_
