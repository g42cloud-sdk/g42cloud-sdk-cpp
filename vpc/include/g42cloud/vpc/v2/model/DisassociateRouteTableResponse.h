
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_DisassociateRouteTableResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_DisassociateRouteTableResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/RouteTableResp.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  DisassociateRouteTableResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateRouteTableResponse();
    virtual ~DisassociateRouteTableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateRouteTableResponse members


    RouteTableResp getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const RouteTableResp& value);


protected:
    RouteTableResp routetable_;
    bool routetableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_DisassociateRouteTableResponse_H_
