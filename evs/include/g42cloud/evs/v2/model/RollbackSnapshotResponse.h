
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/RollbackInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  RollbackSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    RollbackSnapshotResponse();
    virtual ~RollbackSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollbackSnapshotResponse members


    RollbackInfo getRollback() const;
    bool rollbackIsSet() const;
    void unsetrollback();
    void setRollback(const RollbackInfo& value);


protected:
    RollbackInfo rollback_;
    bool rollbackIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_
