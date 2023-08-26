
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CinderAcceptVolumeTransferOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderAcceptVolumeTransferRequestBody
    : public ModelBase
{
public:
    CinderAcceptVolumeTransferRequestBody();
    virtual ~CinderAcceptVolumeTransferRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderAcceptVolumeTransferRequestBody members


    CinderAcceptVolumeTransferOption getAccept() const;
    bool acceptIsSet() const;
    void unsetaccept();
    void setAccept(const CinderAcceptVolumeTransferOption& value);


protected:
    CinderAcceptVolumeTransferOption accept_;
    bool acceptIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderAcceptVolumeTransferRequestBody_H_
