
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_BatchCreateVpcTagsRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_BatchCreateVpcTagsRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/BatchCreateVpcTagsRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  BatchCreateVpcTagsRequest
    : public ModelBase
{
public:
    BatchCreateVpcTagsRequest();
    virtual ~BatchCreateVpcTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateVpcTagsRequest members


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


    BatchCreateVpcTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateVpcTagsRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    BatchCreateVpcTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateVpcTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateVpcTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_BatchCreateVpcTagsRequest_H_
