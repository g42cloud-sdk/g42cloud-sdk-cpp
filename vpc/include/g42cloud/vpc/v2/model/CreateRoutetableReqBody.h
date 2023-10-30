
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateRouteTableReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateRoutetableReqBody
    : public ModelBase
{
public:
    CreateRoutetableReqBody();
    virtual ~CreateRoutetableReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRoutetableReqBody members


    CreateRouteTableReq getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const CreateRouteTableReq& value);


protected:
    CreateRouteTableReq routetable_;
    bool routetableIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateRoutetableReqBody_H_
