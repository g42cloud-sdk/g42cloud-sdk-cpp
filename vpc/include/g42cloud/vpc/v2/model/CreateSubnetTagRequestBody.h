
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ResourceTag.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateSubnetTagRequestBody
    : public ModelBase
{
public:
    CreateSubnetTagRequestBody();
    virtual ~CreateSubnetTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubnetTagRequestBody members


    ResourceTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const ResourceTag& value);


protected:
    ResourceTag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequestBody_H_
