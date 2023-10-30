
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  NeutronShowSecurityGroupRequest
    : public ModelBase
{
public:
    NeutronShowSecurityGroupRequest();
    virtual ~NeutronShowSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronShowSecurityGroupRequest members


    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronShowSecurityGroupRequest_H_
