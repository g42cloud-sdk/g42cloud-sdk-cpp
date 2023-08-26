
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateVpcRouteRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcRouteRequest
    : public ModelBase
{
public:
    CreateVpcRouteRequest();
    virtual ~CreateVpcRouteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcRouteRequest members


    CreateVpcRouteRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateVpcRouteRequestBody& value);


protected:
    CreateVpcRouteRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVpcRouteRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVpcRouteRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcRouteRequest_H_
