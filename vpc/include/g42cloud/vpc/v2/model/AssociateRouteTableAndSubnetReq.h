
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  AssociateRouteTableAndSubnetReq
    : public ModelBase
{
public:
    AssociateRouteTableAndSubnetReq();
    virtual ~AssociateRouteTableAndSubnetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateRouteTableAndSubnetReq members


    std::vector<std::string>& getAssociate();
    bool associateIsSet() const;
    void unsetassociate();
    void setAssociate(const std::vector<std::string>& value);


    std::vector<std::string>& getDisassociate();
    bool disassociateIsSet() const;
    void unsetdisassociate();
    void setDisassociate(const std::vector<std::string>& value);


protected:
    std::vector<std::string> associate_;
    bool associateIsSet_;
    std::vector<std::string> disassociate_;
    bool disassociateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableAndSubnetReq_H_
