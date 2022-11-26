
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ReinstallServerWithoutCloudInitOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ReinstallServerWithoutCloudInitRequestBody
    : public ModelBase
{
public:
    ReinstallServerWithoutCloudInitRequestBody();
    virtual ~ReinstallServerWithoutCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReinstallServerWithoutCloudInitRequestBody members


    ReinstallServerWithoutCloudInitOption getOsReinstall() const;
    bool osReinstallIsSet() const;
    void unsetosReinstall();
    void setOsReinstall(const ReinstallServerWithoutCloudInitOption& value);


protected:
    ReinstallServerWithoutCloudInitOption osReinstall_;
    bool osReinstallIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitRequestBody_H_
