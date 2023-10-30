
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CreateVolumeTransferDetail.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderCreateVolumeTransferResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderCreateVolumeTransferResponse();
    virtual ~CinderCreateVolumeTransferResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderCreateVolumeTransferResponse members


    CreateVolumeTransferDetail getTransfer() const;
    bool transferIsSet() const;
    void unsettransfer();
    void setTransfer(const CreateVolumeTransferDetail& value);


protected:
    CreateVolumeTransferDetail transfer_;
    bool transferIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferResponse_H_
