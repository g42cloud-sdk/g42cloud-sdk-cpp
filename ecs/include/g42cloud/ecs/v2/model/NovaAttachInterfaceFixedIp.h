
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceFixedIp_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceFixedIp_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaAttachInterfaceFixedIp
    : public ModelBase
{
public:
    NovaAttachInterfaceFixedIp();
    virtual ~NovaAttachInterfaceFixedIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAttachInterfaceFixedIp members


    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceFixedIp_H_
