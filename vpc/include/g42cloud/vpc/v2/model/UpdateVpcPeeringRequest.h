
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdateVpcPeeringRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateVpcPeeringRequest
    : public ModelBase
{
public:
    UpdateVpcPeeringRequest();
    virtual ~UpdateVpcPeeringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVpcPeeringRequest members


    std::string getPeeringId() const;
    bool peeringIdIsSet() const;
    void unsetpeeringId();
    void setPeeringId(const std::string& value);


    UpdateVpcPeeringRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateVpcPeeringRequestBody& value);


protected:
    std::string peeringId_;
    bool peeringIdIsSet_;
    UpdateVpcPeeringRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVpcPeeringRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVpcPeeringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcPeeringRequest_H_
