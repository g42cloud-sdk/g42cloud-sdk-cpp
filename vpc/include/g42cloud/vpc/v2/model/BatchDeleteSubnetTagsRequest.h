
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteSubnetTagsRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteSubnetTagsRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/BatchDeleteSubnetTagsRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  BatchDeleteSubnetTagsRequest
    : public ModelBase
{
public:
    BatchDeleteSubnetTagsRequest();
    virtual ~BatchDeleteSubnetTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSubnetTagsRequest members


    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


    BatchDeleteSubnetTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteSubnetTagsRequestBody& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    BatchDeleteSubnetTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteSubnetTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteSubnetTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteSubnetTagsRequest_H_
