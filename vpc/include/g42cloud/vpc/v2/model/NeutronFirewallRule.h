
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallRule_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallRule_H_

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
class G42CLOUD_VPC_V2_EXPORT  NeutronFirewallRule
    : public ModelBase
{
public:
    NeutronFirewallRule();
    virtual ~NeutronFirewallRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronFirewallRule members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);


    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);


    std::string getDestinationIpAddress() const;
    bool destinationIpAddressIsSet() const;
    void unsetdestinationIpAddress();
    void setDestinationIpAddress(const std::string& value);


    std::string getDestinationPort() const;
    bool destinationPortIsSet() const;
    void unsetdestinationPort();
    void setDestinationPort(const std::string& value);


    std::string getSourceIpAddress() const;
    bool sourceIpAddressIsSet() const;
    void unsetsourceIpAddress();
    void setSourceIpAddress(const std::string& value);


    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string destinationIpAddress_;
    bool destinationIpAddressIsSet_;
    std::string destinationPort_;
    bool destinationPortIsSet_;
    std::string sourceIpAddress_;
    bool sourceIpAddressIsSet_;
    std::string sourcePort_;
    bool sourcePortIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallRule_H_
