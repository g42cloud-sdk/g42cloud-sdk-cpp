
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  DeleteTranscodingTaskByConsoleRequest
    : public ModelBase
{
public:
    DeleteTranscodingTaskByConsoleRequest();
    virtual ~DeleteTranscodingTaskByConsoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTranscodingTaskByConsoleRequest members


    int32_t getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(int32_t value);


protected:
    int32_t taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTranscodingTaskByConsoleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTranscodingTaskByConsoleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_
