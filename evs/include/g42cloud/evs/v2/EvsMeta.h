#ifndef G42CLOUD_SDK_EVS_V2_EvsMeta_H_
#define G42CLOUD_SDK_EVS_V2_EvsMeta_H_

#include <g42cloud/core/http/HttpRequestDef.h>
#include <g42cloud/evs/v2/EvsExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Http;

class G42CLOUD_EVS_V2_EXPORT  EvsMeta {
public:
    static HttpRequestDef genRequestDefForBatchCreateVolumeTags();
    static HttpRequestDef genRequestDefForBatchDeleteVolumeTags();
    static HttpRequestDef genRequestDefForCinderAcceptVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderCreateVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderDeleteVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderListAvailabilityZones();
    static HttpRequestDef genRequestDefForCinderListQuotas();
    static HttpRequestDef genRequestDefForCinderListVolumeTransfers();
    static HttpRequestDef genRequestDefForCinderListVolumeTypes();
    static HttpRequestDef genRequestDefForCinderShowVolumeTransfer();
    static HttpRequestDef genRequestDefForCreateSnapshot();
    static HttpRequestDef genRequestDefForCreateVolume();
    static HttpRequestDef genRequestDefForDeleteSnapshot();
    static HttpRequestDef genRequestDefForDeleteVolume();
    static HttpRequestDef genRequestDefForListSnapshots();
    static HttpRequestDef genRequestDefForListVolumeTags();
    static HttpRequestDef genRequestDefForListVolumes();
    static HttpRequestDef genRequestDefForListVolumesByTags();
    static HttpRequestDef genRequestDefForResizeVolume();
    static HttpRequestDef genRequestDefForRollbackSnapshot();
    static HttpRequestDef genRequestDefForShowJob();
    static HttpRequestDef genRequestDefForShowSnapshot();
    static HttpRequestDef genRequestDefForShowVolume();
    static HttpRequestDef genRequestDefForShowVolumeTags();
    static HttpRequestDef genRequestDefForUpdateSnapshot();
    static HttpRequestDef genRequestDefForUpdateVolume();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForShowVersion();
};

}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_EvsMeta_H_
