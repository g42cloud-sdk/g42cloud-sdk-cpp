
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CinderCreateVolumeTransferRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderCreateVolumeTransferRequest
    : public ModelBase
{
public:
    CinderCreateVolumeTransferRequest();
    virtual ~CinderCreateVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderCreateVolumeTransferRequest members


    CinderCreateVolumeTransferRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CinderCreateVolumeTransferRequestBody& value);


protected:
    CinderCreateVolumeTransferRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderCreateVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderCreateVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequest_H_
