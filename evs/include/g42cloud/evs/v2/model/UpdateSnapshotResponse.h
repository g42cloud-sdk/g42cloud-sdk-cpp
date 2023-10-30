
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/SnapshotDetails.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  UpdateSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSnapshotResponse();
    virtual ~UpdateSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSnapshotResponse members


    SnapshotDetails getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const SnapshotDetails& value);


protected:
    SnapshotDetails snapshot_;
    bool snapshotIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotResponse_H_
