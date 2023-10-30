
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  BucketAuthorizedReq
    : public ModelBase
{
public:
    BucketAuthorizedReq();
    virtual ~BucketAuthorizedReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BucketAuthorizedReq members


    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);


    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string operation_;
    bool operationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_
