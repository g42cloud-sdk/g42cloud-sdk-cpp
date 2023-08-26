
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CreateVolumeTransferOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderCreateVolumeTransferRequestBody
    : public ModelBase
{
public:
    CinderCreateVolumeTransferRequestBody();
    virtual ~CinderCreateVolumeTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderCreateVolumeTransferRequestBody members


    CreateVolumeTransferOption getTransfer() const;
    bool transferIsSet() const;
    void unsettransfer();
    void setTransfer(const CreateVolumeTransferOption& value);


protected:
    CreateVolumeTransferOption transfer_;
    bool transferIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderCreateVolumeTransferRequestBody_H_
