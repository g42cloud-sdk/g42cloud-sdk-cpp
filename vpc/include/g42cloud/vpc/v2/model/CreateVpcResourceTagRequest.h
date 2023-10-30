
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResourceTagRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResourceTagRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/CreateVpcResourceTagRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcResourceTagRequest
    : public ModelBase
{
public:
    CreateVpcResourceTagRequest();
    virtual ~CreateVpcResourceTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcResourceTagRequest members


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


    CreateVpcResourceTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateVpcResourceTagRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    CreateVpcResourceTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVpcResourceTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVpcResourceTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResourceTagRequest_H_
