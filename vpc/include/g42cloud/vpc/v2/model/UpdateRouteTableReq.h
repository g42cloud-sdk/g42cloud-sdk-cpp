
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/RouteTableRoute.h>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateRouteTableReq
    : public ModelBase
{
public:
    UpdateRouteTableReq();
    virtual ~UpdateRouteTableReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRouteTableReq members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::map<std::string, std::vector<RouteTableRoute>>& getRoutes();
    bool routesIsSet() const;
    void unsetroutes();
    void setRoutes(const std::map<std::string, std::vector<RouteTableRoute>>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, std::vector<RouteTableRoute>> routes_;
    bool routesIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableReq_H_
