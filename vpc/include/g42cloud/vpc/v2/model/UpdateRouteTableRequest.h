
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdateRoutetableReqBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdateRouteTableRequest
    : public ModelBase
{
public:
    UpdateRouteTableRequest();
    virtual ~UpdateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRouteTableRequest members


    std::string getRoutetableId() const;
    bool routetableIdIsSet() const;
    void unsetroutetableId();
    void setRoutetableId(const std::string& value);


    UpdateRoutetableReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRoutetableReqBody& value);


protected:
    std::string routetableId_;
    bool routetableIdIsSet_;
    UpdateRoutetableReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdateRouteTableRequest_H_
