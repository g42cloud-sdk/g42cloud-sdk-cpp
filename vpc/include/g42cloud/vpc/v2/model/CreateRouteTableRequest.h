
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreateRoutetableReqBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateRouteTableRequest
    : public ModelBase
{
public:
    CreateRouteTableRequest();
    virtual ~CreateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRouteTableRequest members


    CreateRoutetableReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateRoutetableReqBody& value);


protected:
    CreateRoutetableReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateRouteTableRequest_H_
