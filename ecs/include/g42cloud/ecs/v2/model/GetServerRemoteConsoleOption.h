
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  GetServerRemoteConsoleOption
    : public ModelBase
{
public:
    GetServerRemoteConsoleOption();
    virtual ~GetServerRemoteConsoleOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetServerRemoteConsoleOption members


    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_
