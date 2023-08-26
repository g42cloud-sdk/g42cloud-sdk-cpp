
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListSubnetTagsRequest
    : public ModelBase
{
public:
    ListSubnetTagsRequest();
    virtual ~ListSubnetTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSubnetTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubnetTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubnetTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetTagsRequest_H_
