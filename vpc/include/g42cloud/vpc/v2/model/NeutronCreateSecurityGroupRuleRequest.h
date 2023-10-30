
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRuleRequest
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRuleRequest();
    virtual ~NeutronCreateSecurityGroupRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRuleRequest members


    NeutronCreateSecurityGroupRuleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateSecurityGroupRuleRequestBody& value);


protected:
    NeutronCreateSecurityGroupRuleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateSecurityGroupRuleRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateSecurityGroupRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleRequest_H_
