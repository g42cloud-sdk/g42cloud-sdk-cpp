
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeTransferSummary.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListVolumeTransfersResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListVolumeTransfersResponse();
    virtual ~CinderListVolumeTransfersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderListVolumeTransfersResponse members


    std::vector<VolumeTransferSummary>& getTransfers();
    bool transfersIsSet() const;
    void unsettransfers();
    void setTransfers(const std::vector<VolumeTransferSummary>& value);


protected:
    std::vector<VolumeTransferSummary> transfers_;
    bool transfersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListVolumeTransfersResponse_H_
