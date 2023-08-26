
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcTagRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcTagRequest_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  DeleteVpcTagRequest
    : public ModelBase
{
public:
    DeleteVpcTagRequest();
    virtual ~DeleteVpcTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteVpcTagRequest members


    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string key_;
    bool keyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteVpcTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteVpcTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_DeleteVpcTagRequest_H_
