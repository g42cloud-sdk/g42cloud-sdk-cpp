
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_

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
class G42CLOUD_ECS_V2_EXPORT  NovaServerNetwork
    : public ModelBase
{
public:
    NovaServerNetwork();
    virtual ~NovaServerNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerNetwork members


    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);


    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);


    std::string getFixedIp() const;
    bool fixedIpIsSet() const;
    void unsetfixedIp();
    void setFixedIp(const std::string& value);


protected:
    std::string port_;
    bool portIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string fixedIp_;
    bool fixedIpIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_
