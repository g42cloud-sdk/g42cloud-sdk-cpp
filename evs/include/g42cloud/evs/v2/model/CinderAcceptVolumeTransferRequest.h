
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CinderAcceptVolumeTransferRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferRequest
    : public ModelBase
{
public:
    CinderAcceptVolumeTransferRequest();
    virtual ~CinderAcceptVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferRequest members


    std::string getTransferId() const;
    bool transferIdIsSet() const;
    void unsettransferId();
    void setTransferId(const std::string& value);


    CinderAcceptVolumeTransferRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CinderAcceptVolumeTransferRequestBody& value);


protected:
    std::string transferId_;
    bool transferIdIsSet_;
    CinderAcceptVolumeTransferRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderAcceptVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderAcceptVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequest_H_
