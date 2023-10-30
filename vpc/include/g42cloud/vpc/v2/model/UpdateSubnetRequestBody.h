
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdateSubnetOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateSubnetRequestBody
    : public ModelBase
{
public:
    UpdateSubnetRequestBody();
    virtual ~UpdateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubnetRequestBody members


    UpdateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const UpdateSubnetOption& value);


protected:
    UpdateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateSubnetRequestBody_H_
