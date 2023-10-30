
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_DeleteRouteTableRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_DeleteRouteTableRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  DeleteRouteTableRequest
    : public ModelBase
{
public:
    DeleteRouteTableRequest();
    virtual ~DeleteRouteTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRouteTableRequest members


    std::string getRoutetableId() const;
    bool routetableIdIsSet() const;
    void unsetroutetableId();
    void setRoutetableId(const std::string& value);


protected:
    std::string routetableId_;
    bool routetableIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteRouteTableRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteRouteTableRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_DeleteRouteTableRequest_H_
