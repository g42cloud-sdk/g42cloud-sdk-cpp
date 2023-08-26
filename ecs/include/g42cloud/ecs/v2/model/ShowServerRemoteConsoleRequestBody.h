
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/GetServerRemoteConsoleOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ShowServerRemoteConsoleRequestBody
    : public ModelBase
{
public:
    ShowServerRemoteConsoleRequestBody();
    virtual ~ShowServerRemoteConsoleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerRemoteConsoleRequestBody members


    GetServerRemoteConsoleOption getRemoteConsole() const;
    bool remoteConsoleIsSet() const;
    void unsetremoteConsole();
    void setRemoteConsole(const GetServerRemoteConsoleOption& value);


protected:
    GetServerRemoteConsoleOption remoteConsole_;
    bool remoteConsoleIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_
