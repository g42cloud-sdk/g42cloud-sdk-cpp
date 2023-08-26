
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_DeleteMergeChannelsTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_DeleteMergeChannelsTaskRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  DeleteMergeChannelsTaskRequest
    : public ModelBase
{
public:
    DeleteMergeChannelsTaskRequest();
    virtual ~DeleteMergeChannelsTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteMergeChannelsTaskRequest members


    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteMergeChannelsTaskRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteMergeChannelsTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_DeleteMergeChannelsTaskRequest_H_