
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcPeeringRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcPeeringRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  DeleteVpcPeeringRequest
    : public ModelBase
{
public:
    DeleteVpcPeeringRequest();
    virtual ~DeleteVpcPeeringRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteVpcPeeringRequest members


    std::string getPeeringId() const;
    bool peeringIdIsSet() const;
    void unsetpeeringId();
    void setPeeringId(const std::string& value);


protected:
    std::string peeringId_;
    bool peeringIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteVpcPeeringRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteVpcPeeringRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcPeeringRequest_H_
