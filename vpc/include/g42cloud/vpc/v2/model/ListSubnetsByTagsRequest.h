
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetsByTagsRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetsByTagsRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ListSubnetsByTagsRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListSubnetsByTagsRequest
    : public ModelBase
{
public:
    ListSubnetsByTagsRequest();
    virtual ~ListSubnetsByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubnetsByTagsRequest members


    ListSubnetsByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListSubnetsByTagsRequestBody& value);


protected:
    ListSubnetsByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubnetsByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubnetsByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListSubnetsByTagsRequest_H_
