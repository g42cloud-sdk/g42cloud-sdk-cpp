
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/RouteTableListResp.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListRouteTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRouteTablesResponse();
    virtual ~ListRouteTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRouteTablesResponse members


    std::vector<RouteTableListResp>& getRoutetables();
    bool routetablesIsSet() const;
    void unsetroutetables();
    void setRoutetables(const std::vector<RouteTableListResp>& value);


protected:
    std::vector<RouteTableListResp> routetables_;
    bool routetablesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListRouteTablesResponse_H_
