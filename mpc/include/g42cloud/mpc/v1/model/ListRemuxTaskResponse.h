
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListRemuxTaskResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListRemuxTaskResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CommonQueryTaskRsp.h>
#include <g42cloud/mpc/v1/model/RemuxTask.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListRemuxTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRemuxTaskResponse();
    virtual ~ListRemuxTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListRemuxTaskResponse members


    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


    std::vector<RemuxTask>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<RemuxTask>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RemuxTask> tasks_;
    bool tasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListRemuxTaskResponse_H_
