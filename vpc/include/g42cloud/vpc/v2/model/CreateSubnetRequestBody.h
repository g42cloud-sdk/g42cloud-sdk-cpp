
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateSubnetOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateSubnetRequestBody
    : public ModelBase
{
public:
    CreateSubnetRequestBody();
    virtual ~CreateSubnetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSubnetRequestBody members


    CreateSubnetOption getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const CreateSubnetOption& value);


protected:
    CreateSubnetOption subnet_;
    bool subnetIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetRequestBody_H_
