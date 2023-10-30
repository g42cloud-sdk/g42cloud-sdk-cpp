
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MbTaskParameter.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MbTasksReportReq
    : public ModelBase
{
public:
    MbTasksReportReq();
    virtual ~MbTasksReportReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MbTasksReportReq members


    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


    bool isRetry() const;
    bool retryIsSet() const;
    void unsetretry();
    void setRetry(bool value);


    MbTaskParameter getParameter() const;
    bool parameterIsSet() const;
    void unsetparameter();
    void setParameter(const MbTaskParameter& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    bool retry_;
    bool retryIsSet_;
    MbTaskParameter parameter_;
    bool parameterIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MbTasksReportReq_H_
