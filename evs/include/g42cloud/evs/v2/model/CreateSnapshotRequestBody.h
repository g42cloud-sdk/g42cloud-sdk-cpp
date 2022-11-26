
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CreateSnapshotOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CreateSnapshotRequestBody
    : public ModelBase
{
public:
    CreateSnapshotRequestBody();
    virtual ~CreateSnapshotRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSnapshotRequestBody members


    CreateSnapshotOption getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const CreateSnapshotOption& value);


protected:
    CreateSnapshotOption snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_
