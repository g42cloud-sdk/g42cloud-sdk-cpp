
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/SecurityGroup.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecurityGroupsResponse();
    virtual ~ListSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecurityGroupsResponse members


    std::vector<SecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<SecurityGroup>& value);


protected:
    std::vector<SecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_
