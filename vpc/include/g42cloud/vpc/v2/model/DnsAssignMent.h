
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  DnsAssignMent
    : public ModelBase
{
public:
    DnsAssignMent();
    virtual ~DnsAssignMent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DnsAssignMent members


    std::string getHostname() const;
    bool hostnameIsSet() const;
    void unsethostname();
    void setHostname(const std::string& value);


    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


    std::string getFqdn() const;
    bool fqdnIsSet() const;
    void unsetfqdn();
    void setFqdn(const std::string& value);


protected:
    std::string hostname_;
    bool hostnameIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string fqdn_;
    bool fqdnIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_
