
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ExtraDhcpOption.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateSubnetOption
    : public ModelBase
{
public:
    UpdateSubnetOption();
    virtual ~UpdateSubnetOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubnetOption members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);


    bool isDhcpEnable() const;
    bool dhcpEnableIsSet() const;
    void unsetdhcpEnable();
    void setDhcpEnable(bool value);


    std::string getPrimaryDns() const;
    bool primaryDnsIsSet() const;
    void unsetprimaryDns();
    void setPrimaryDns(const std::string& value);


    std::string getSecondaryDns() const;
    bool secondaryDnsIsSet() const;
    void unsetsecondaryDns();
    void setSecondaryDns(const std::string& value);


    std::vector<std::string>& getDnsList();
    bool dnsListIsSet() const;
    void unsetdnsList();
    void setDnsList(const std::vector<std::string>& value);


    std::vector<ExtraDhcpOption>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    bool dhcpEnable_;
    bool dhcpEnableIsSet_;
    std::string primaryDns_;
    bool primaryDnsIsSet_;
    std::string secondaryDns_;
    bool secondaryDnsIsSet_;
    std::vector<std::string> dnsList_;
    bool dnsListIsSet_;
    std::vector<ExtraDhcpOption> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetOption_H_
