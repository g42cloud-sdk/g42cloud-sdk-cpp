
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_QuotaList_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_QuotaList_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/QuotaDetailSnapshotsSATA.h>
#include <g42cloud/evs/v2/model/QuotaDetailBackupGigabytes.h>
#include <g42cloud/evs/v2/model/QuotaDetailVolumesSAS.h>
#include <string>
#include <g42cloud/evs/v2/model/QuotaDetailGigabytes.h>
#include <g42cloud/evs/v2/model/QuotaDetailVolumesGPSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailSnapshotsSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailGigabytesSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailSnapshotsGPSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailVolumesSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailGigabytesSAS.h>
#include <g42cloud/evs/v2/model/QuotaDetailSnapshotsSAS.h>
#include <g42cloud/evs/v2/model/QuotaDetailVolumesSATA.h>
#include <g42cloud/evs/v2/model/QuotaDetailVolumes.h>
#include <g42cloud/evs/v2/model/QuotaDetailSnapshots.h>
#include <g42cloud/evs/v2/model/QuotaDetailGigabytesGPSSD.h>
#include <g42cloud/evs/v2/model/QuotaDetailPerVolumeGigabytes.h>
#include <g42cloud/evs/v2/model/QuotaDetailBackups.h>
#include <g42cloud/evs/v2/model/QuotaDetailGigabytesSATA.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  QuotaList
    : public ModelBase
{
public:
    QuotaList();
    virtual ~QuotaList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaList members


    QuotaDetailBackupGigabytes getBackupGigabytes() const;
    bool backupGigabytesIsSet() const;
    void unsetbackupGigabytes();
    void setBackupGigabytes(const QuotaDetailBackupGigabytes& value);


    QuotaDetailBackups getBackups() const;
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const QuotaDetailBackups& value);


    QuotaDetailGigabytes getGigabytes() const;
    bool gigabytesIsSet() const;
    void unsetgigabytes();
    void setGigabytes(const QuotaDetailGigabytes& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    QuotaDetailSnapshots getSnapshots() const;
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const QuotaDetailSnapshots& value);


    QuotaDetailVolumes getVolumes() const;
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const QuotaDetailVolumes& value);


    QuotaDetailGigabytesSATA getGigabytesSATA() const;
    bool gigabytesSATAIsSet() const;
    void unsetgigabytesSATA();
    void setGigabytesSATA(const QuotaDetailGigabytesSATA& value);


    QuotaDetailSnapshotsSATA getSnapshotsSATA() const;
    bool snapshotsSATAIsSet() const;
    void unsetsnapshotsSATA();
    void setSnapshotsSATA(const QuotaDetailSnapshotsSATA& value);


    QuotaDetailVolumesSATA getVolumesSATA() const;
    bool volumesSATAIsSet() const;
    void unsetvolumesSATA();
    void setVolumesSATA(const QuotaDetailVolumesSATA& value);


    QuotaDetailGigabytesSAS getGigabytesSAS() const;
    bool gigabytesSASIsSet() const;
    void unsetgigabytesSAS();
    void setGigabytesSAS(const QuotaDetailGigabytesSAS& value);


    QuotaDetailSnapshotsSAS getSnapshotsSAS() const;
    bool snapshotsSASIsSet() const;
    void unsetsnapshotsSAS();
    void setSnapshotsSAS(const QuotaDetailSnapshotsSAS& value);


    QuotaDetailVolumesSAS getVolumesSAS() const;
    bool volumesSASIsSet() const;
    void unsetvolumesSAS();
    void setVolumesSAS(const QuotaDetailVolumesSAS& value);


    QuotaDetailGigabytesSSD getGigabytesSSD() const;
    bool gigabytesSSDIsSet() const;
    void unsetgigabytesSSD();
    void setGigabytesSSD(const QuotaDetailGigabytesSSD& value);


    QuotaDetailSnapshotsSSD getSnapshotsSSD() const;
    bool snapshotsSSDIsSet() const;
    void unsetsnapshotsSSD();
    void setSnapshotsSSD(const QuotaDetailSnapshotsSSD& value);


    QuotaDetailVolumesSSD getVolumesSSD() const;
    bool volumesSSDIsSet() const;
    void unsetvolumesSSD();
    void setVolumesSSD(const QuotaDetailVolumesSSD& value);


    QuotaDetailGigabytesGPSSD getGigabytesGPSSD() const;
    bool gigabytesGPSSDIsSet() const;
    void unsetgigabytesGPSSD();
    void setGigabytesGPSSD(const QuotaDetailGigabytesGPSSD& value);


    QuotaDetailSnapshotsGPSSD getSnapshotsGPSSD() const;
    bool snapshotsGPSSDIsSet() const;
    void unsetsnapshotsGPSSD();
    void setSnapshotsGPSSD(const QuotaDetailSnapshotsGPSSD& value);


    QuotaDetailVolumesGPSSD getVolumesGPSSD() const;
    bool volumesGPSSDIsSet() const;
    void unsetvolumesGPSSD();
    void setVolumesGPSSD(const QuotaDetailVolumesGPSSD& value);


    QuotaDetailPerVolumeGigabytes getPerVolumeGigabytes() const;
    bool perVolumeGigabytesIsSet() const;
    void unsetperVolumeGigabytes();
    void setPerVolumeGigabytes(const QuotaDetailPerVolumeGigabytes& value);


protected:
    QuotaDetailBackupGigabytes backupGigabytes_;
    bool backupGigabytesIsSet_;
    QuotaDetailBackups backups_;
    bool backupsIsSet_;
    QuotaDetailGigabytes gigabytes_;
    bool gigabytesIsSet_;
    std::string id_;
    bool idIsSet_;
    QuotaDetailSnapshots snapshots_;
    bool snapshotsIsSet_;
    QuotaDetailVolumes volumes_;
    bool volumesIsSet_;
    QuotaDetailGigabytesSATA gigabytesSATA_;
    bool gigabytesSATAIsSet_;
    QuotaDetailSnapshotsSATA snapshotsSATA_;
    bool snapshotsSATAIsSet_;
    QuotaDetailVolumesSATA volumesSATA_;
    bool volumesSATAIsSet_;
    QuotaDetailGigabytesSAS gigabytesSAS_;
    bool gigabytesSASIsSet_;
    QuotaDetailSnapshotsSAS snapshotsSAS_;
    bool snapshotsSASIsSet_;
    QuotaDetailVolumesSAS volumesSAS_;
    bool volumesSASIsSet_;
    QuotaDetailGigabytesSSD gigabytesSSD_;
    bool gigabytesSSDIsSet_;
    QuotaDetailSnapshotsSSD snapshotsSSD_;
    bool snapshotsSSDIsSet_;
    QuotaDetailVolumesSSD volumesSSD_;
    bool volumesSSDIsSet_;
    QuotaDetailGigabytesGPSSD gigabytesGPSSD_;
    bool gigabytesGPSSDIsSet_;
    QuotaDetailSnapshotsGPSSD snapshotsGPSSD_;
    bool snapshotsGPSSDIsSet_;
    QuotaDetailVolumesGPSSD volumesGPSSD_;
    bool volumesGPSSDIsSet_;
    QuotaDetailPerVolumeGigabytes perVolumeGigabytes_;
    bool perVolumeGigabytesIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_QuotaList_H_
