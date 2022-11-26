
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpOption_H_

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
class G42CLOUD_ECS_V2_EXPORT  DisassociateServerVirtualIpOption
    : public ModelBase
{
public:
    DisassociateServerVirtualIpOption();
    virtual ~DisassociateServerVirtualIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociateServerVirtualIpOption members


    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


    bool isReverseBinding() const;
    bool reverseBindingIsSet() const;
    void unsetreverseBinding();
    void setReverseBinding(bool value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    bool reverseBinding_;
    bool reverseBindingIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpOption_H_
