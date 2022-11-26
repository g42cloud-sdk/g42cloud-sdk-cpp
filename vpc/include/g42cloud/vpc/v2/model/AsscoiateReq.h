
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/AssociateRouteTableAndSubnetReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  AsscoiateReq
    : public ModelBase
{
public:
    AsscoiateReq();
    virtual ~AsscoiateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AsscoiateReq members


    AssociateRouteTableAndSubnetReq getSubnets() const;
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const AssociateRouteTableAndSubnetReq& value);


protected:
    AssociateRouteTableAndSubnetReq subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_AsscoiateReq_H_
