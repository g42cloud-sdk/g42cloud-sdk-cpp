
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_

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
class G42CLOUD_EVS_V2_EXPORT  ShowSnapshotRequest
    : public ModelBase
{
public:
    ShowSnapshotRequest();
    virtual ~ShowSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSnapshotRequest members


    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_
