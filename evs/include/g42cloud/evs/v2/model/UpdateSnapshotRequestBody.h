
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/UpdateSnapshotOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  UpdateSnapshotRequestBody
    : public ModelBase
{
public:
    UpdateSnapshotRequestBody();
    virtual ~UpdateSnapshotRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSnapshotRequestBody members


    UpdateSnapshotOption getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const UpdateSnapshotOption& value);


protected:
    UpdateSnapshotOption snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBody_H_
