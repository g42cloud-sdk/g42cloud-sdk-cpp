
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderShowVolumeTransferRequest
    : public ModelBase
{
public:
    CinderShowVolumeTransferRequest();
    virtual ~CinderShowVolumeTransferRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderShowVolumeTransferRequest members


    std::string getTransferId() const;
    bool transferIdIsSet() const;
    void unsettransferId();
    void setTransferId(const std::string& value);


protected:
    std::string transferId_;
    bool transferIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderShowVolumeTransferRequest& dereference_from_shared_ptr(std::shared_ptr<CinderShowVolumeTransferRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderShowVolumeTransferRequest_H_
