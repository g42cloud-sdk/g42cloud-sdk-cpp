
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateBucketAuthorizedRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateBucketAuthorizedRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/BucketAuthorizedReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateBucketAuthorizedRequest
    : public ModelBase
{
public:
    UpdateBucketAuthorizedRequest();
    virtual ~UpdateBucketAuthorizedRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBucketAuthorizedRequest members


    BucketAuthorizedReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BucketAuthorizedReq& value);


protected:
    BucketAuthorizedReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateBucketAuthorizedRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateBucketAuthorizedRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateBucketAuthorizedRequest_H_
