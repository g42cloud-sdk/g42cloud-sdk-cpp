
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRequest
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRequest();
    virtual ~NeutronCreateSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRequest members


    NeutronCreateSecurityGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateSecurityGroupRequestBody& value);


protected:
    NeutronCreateSecurityGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_
