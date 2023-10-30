
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaSecurityGroup.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListServerSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListServerSecurityGroupsResponse();
    virtual ~NovaListServerSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListServerSecurityGroupsResponse members


    std::vector<NovaSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaSecurityGroup>& value);


protected:
    std::vector<NovaSecurityGroup> securityGroups_;
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

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_
