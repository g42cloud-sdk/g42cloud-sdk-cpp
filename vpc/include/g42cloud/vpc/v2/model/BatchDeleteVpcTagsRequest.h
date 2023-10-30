
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/vpc/v2/model/BatchDeleteVpcTagsRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  BatchDeleteVpcTagsRequest
    : public ModelBase
{
public:
    BatchDeleteVpcTagsRequest();
    virtual ~BatchDeleteVpcTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteVpcTagsRequest members


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


    BatchDeleteVpcTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteVpcTagsRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    BatchDeleteVpcTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteVpcTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteVpcTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_
