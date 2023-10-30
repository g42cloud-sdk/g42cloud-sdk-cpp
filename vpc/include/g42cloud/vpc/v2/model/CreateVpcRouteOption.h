
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcRouteOption
    : public ModelBase
{
public:
    CreateVpcRouteOption();
    virtual ~CreateVpcRouteOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVpcRouteOption members


    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);


    std::string getNexthop() const;
    bool nexthopIsSet() const;
    void unsetnexthop();
    void setNexthop(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::string destination_;
    bool destinationIsSet_;
    std::string nexthop_;
    bool nexthopIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteOption_H_
