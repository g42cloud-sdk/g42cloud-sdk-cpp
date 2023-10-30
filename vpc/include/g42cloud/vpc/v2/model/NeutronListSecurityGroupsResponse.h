
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronSecurityGroup.h>
#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListSecurityGroupsResponse();
    virtual ~NeutronListSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListSecurityGroupsResponse members


    std::vector<NeutronSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NeutronSecurityGroup>& value);


    std::vector<NeutronPageLink>& getSecurityGroupsLinks();
    bool securityGroupsLinksIsSet() const;
    void unsetsecurityGroupsLinks();
    void setSecurityGroupsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NeutronPageLink> securityGroupsLinks_;
    bool securityGroupsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_
