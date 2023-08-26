
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateVpcOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcRequestBody
    : public ModelBase
{
public:
    CreateVpcRequestBody();
    virtual ~CreateVpcRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcRequestBody members


    CreateVpcOption getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const CreateVpcOption& value);


protected:
    CreateVpcOption vpc_;
    bool vpcIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRequestBody_H_
