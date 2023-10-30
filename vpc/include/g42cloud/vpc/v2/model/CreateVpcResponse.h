
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/Vpc.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVpcResponse();
    virtual ~CreateVpcResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcResponse members


    Vpc getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const Vpc& value);


protected:
    Vpc vpc_;
    bool vpcIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcResponse_H_
