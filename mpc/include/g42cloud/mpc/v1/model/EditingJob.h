
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_EditingJob_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_EditingJob_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/OutputFileInfo.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/CreateEditingJobReq.h>
#include <g42cloud/mpc/v1/model/CommonTaskMeta.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  EditingJob
    : public ModelBase
{
public:
    EditingJob();
    virtual ~EditingJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditingJob members


    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


    std::vector<std::string>& getEditType();
    bool editTypeIsSet() const;
    void unseteditType();
    void setEditType(const std::vector<std::string>& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    CreateEditingJobReq getEditTaskReq() const;
    bool editTaskReqIsSet() const;
    void unseteditTaskReq();
    void setEditTaskReq(const CreateEditingJobReq& value);


    std::vector<OutputFileInfo>& getOutputFileInfo();
    bool outputFileInfoIsSet() const;
    void unsetoutputFileInfo();
    void setOutputFileInfo(const std::vector<OutputFileInfo>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<std::string> editType_;
    bool editTypeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    CreateEditingJobReq editTaskReq_;
    bool editTaskReqIsSet_;
    std::vector<OutputFileInfo> outputFileInfo_;
    bool outputFileInfoIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_EditingJob_H_
