
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/RoutetableAssociateReqbody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  AssociateRouteTableRequest
    : public ModelBase
{
public:
    AssociateRouteTableRequest();
    virtual ~AssociateRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociateRouteTableRequest members


    std::string getRoutetableId() const;
    bool routetableIdIsSet() const;
    void unsetroutetableId();
    void setRoutetableId(const std::string& value);


    RoutetableAssociateReqbody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RoutetableAssociateReqbody& value);


protected:
    std::string routetableId_;
    bool routetableIdIsSet_;
    RoutetableAssociateReqbody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_AssociateRouteTableRequest_H_
