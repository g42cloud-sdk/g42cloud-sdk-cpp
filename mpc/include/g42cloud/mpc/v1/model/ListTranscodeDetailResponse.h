
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/TaskDetailInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListTranscodeDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTranscodeDetailResponse();
    virtual ~ListTranscodeDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTranscodeDetailResponse members


    std::vector<TaskDetailInfo>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<TaskDetailInfo>& value);


protected:
    std::vector<TaskDetailInfo> taskArray_;
    bool taskArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_
