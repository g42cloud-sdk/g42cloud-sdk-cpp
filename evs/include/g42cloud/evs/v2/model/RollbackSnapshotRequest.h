
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/RollbackSnapshotRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  RollbackSnapshotRequest
    : public ModelBase
{
public:
    RollbackSnapshotRequest();
    virtual ~RollbackSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollbackSnapshotRequest members


    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


    RollbackSnapshotRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RollbackSnapshotRequestBody& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    RollbackSnapshotRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RollbackSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<RollbackSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequest_H_
