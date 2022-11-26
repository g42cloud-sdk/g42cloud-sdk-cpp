
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  AllowedAddressPair
    : public ModelBase
{
public:
    AllowedAddressPair();
    virtual ~AllowedAddressPair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AllowedAddressPair members


    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_AllowedAddressPair_H_
