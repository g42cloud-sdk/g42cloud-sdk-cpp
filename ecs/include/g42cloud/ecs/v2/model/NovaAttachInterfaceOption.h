
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaAttachInterfaceFixedIp.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaAttachInterfaceOption
    : public ModelBase
{
public:
    NovaAttachInterfaceOption();
    virtual ~NovaAttachInterfaceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAttachInterfaceOption members


    std::vector<NovaAttachInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<NovaAttachInterfaceFixedIp>& value);


    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);


    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


protected:
    std::vector<NovaAttachInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceOption_H_
