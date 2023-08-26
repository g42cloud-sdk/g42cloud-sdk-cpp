
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdateRouteTableReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateRoutetableReqBody
    : public ModelBase
{
public:
    UpdateRoutetableReqBody();
    virtual ~UpdateRoutetableReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateRoutetableReqBody members


    UpdateRouteTableReq getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const UpdateRouteTableReq& value);


protected:
    UpdateRouteTableReq routetable_;
    bool routetableIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateRoutetableReqBody_H_
