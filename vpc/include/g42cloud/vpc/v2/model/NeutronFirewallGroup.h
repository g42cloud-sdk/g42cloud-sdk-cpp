
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallGroup_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallGroup_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronFirewallGroup
    : public ModelBase
{
public:
    NeutronFirewallGroup();
    virtual ~NeutronFirewallGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronFirewallGroup members


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


    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);


    std::string getEgressFirewallPolicyId() const;
    bool egressFirewallPolicyIdIsSet() const;
    void unsetegressFirewallPolicyId();
    void setEgressFirewallPolicyId(const std::string& value);


    std::string getIngressFirewallPolicyId() const;
    bool ingressFirewallPolicyIdIsSet() const;
    void unsetingressFirewallPolicyId();
    void setIngressFirewallPolicyId(const std::string& value);


    std::vector<std::string>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<std::string>& value);


    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);


    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string egressFirewallPolicyId_;
    bool egressFirewallPolicyIdIsSet_;
    std::string ingressFirewallPolicyId_;
    bool ingressFirewallPolicyIdIsSet_;
    std::vector<std::string> ports_;
    bool portsIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronFirewallGroup_H_
