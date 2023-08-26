
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>
#include <g42cloud/vpc/v2/model/VpcRoute.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListVpcRoutesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcRoutesResponse();
    virtual ~ListVpcRoutesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcRoutesResponse members


    std::vector<VpcRoute>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::vector<VpcRoute>& value);


    std::vector<NeutronPageLink>& getRoutesLinks();
    bool routesLinksIsSet() const;
    void unsetroutesLinks();
    void setRoutesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<VpcRoute> routes_;
    bool routesIsSet_;
    std::vector<NeutronPageLink> routesLinks_;
    bool routesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListVpcRoutesResponse_H_
