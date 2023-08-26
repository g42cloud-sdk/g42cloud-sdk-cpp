
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdateVpcOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateVpcRequestBody
    : public ModelBase
{
public:
    UpdateVpcRequestBody();
    virtual ~UpdateVpcRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcRequestBody members


    UpdateVpcOption getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const UpdateVpcOption& value);


protected:
    UpdateVpcOption vpc_;
    bool vpcIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequestBody_H_
