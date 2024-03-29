
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  NeutronListFirewallRulesRequest
    : public ModelBase
{
public:
    NeutronListFirewallRulesRequest();
    virtual ~NeutronListFirewallRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListFirewallRulesRequest members


    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::vector<std::string>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(const std::vector<std::string>& value);


    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);


    std::vector<std::string>& getDescription();
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::vector<std::string>& value);


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> id_;
    bool idIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;
    std::vector<std::string> description_;
    bool descriptionIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListFirewallRulesRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListFirewallRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListFirewallRulesRequest_H_
