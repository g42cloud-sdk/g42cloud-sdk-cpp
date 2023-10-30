
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateVpcRouteOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcRouteRequestBody
    : public ModelBase
{
public:
    CreateVpcRouteRequestBody();
    virtual ~CreateVpcRouteRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcRouteRequestBody members


    CreateVpcRouteOption getRoute() const;
    bool routeIsSet() const;
    void unsetroute();
    void setRoute(const CreateVpcRouteOption& value);


protected:
    CreateVpcRouteOption route_;
    bool routeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequestBody_H_
