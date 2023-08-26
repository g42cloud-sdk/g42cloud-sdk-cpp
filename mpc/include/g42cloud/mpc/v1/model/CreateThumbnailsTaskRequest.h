
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CreateThumbReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateThumbnailsTaskRequest
    : public ModelBase
{
public:
    CreateThumbnailsTaskRequest();
    virtual ~CreateThumbnailsTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateThumbnailsTaskRequest members


    CreateThumbReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateThumbReq& value);


protected:
    CreateThumbReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateThumbnailsTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateThumbnailsTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbnailsTaskRequest_H_
