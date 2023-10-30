
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateFirewallGroupOption
    : public ModelBase
{
public:
    NeutronCreateFirewallGroupOption();
    virtual ~NeutronCreateFirewallGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateFirewallGroupOption members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getIngressFirewallPolicyId() const;
    bool ingressFirewallPolicyIdIsSet() const;
    void unsetingressFirewallPolicyId();
    void setIngressFirewallPolicyId(const std::string& value);


    std::string getEgressFirewallPolicyId() const;
    bool egressFirewallPolicyIdIsSet() const;
    void unsetegressFirewallPolicyId();
    void setEgressFirewallPolicyId(const std::string& value);


    std::vector<std::string>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<std::string>& value);


    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string ingressFirewallPolicyId_;
    bool ingressFirewallPolicyIdIsSet_;
    std::string egressFirewallPolicyId_;
    bool egressFirewallPolicyIdIsSet_;
    std::vector<std::string> ports_;
    bool portsIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupOption_H_
