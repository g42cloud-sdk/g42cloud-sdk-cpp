
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ReinstallServerWithCloudInitOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ReinstallServerWithCloudInitRequestBody
    : public ModelBase
{
public:
    ReinstallServerWithCloudInitRequestBody();
    virtual ~ReinstallServerWithCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallServerWithCloudInitRequestBody members


    ReinstallServerWithCloudInitOption getOsReinstall() const;
    bool osReinstallIsSet() const;
    void unsetosReinstall();
    void setOsReinstall(const ReinstallServerWithCloudInitOption& value);


protected:
    ReinstallServerWithCloudInitOption osReinstall_;
    bool osReinstallIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitRequestBody_H_
