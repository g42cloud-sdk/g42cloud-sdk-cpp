
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_RemuxTask_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_RemuxTask_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/CommonTask.h>
#include <g42cloud/mpc/v1/model/RemuxOutputParam.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/MetaData.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  RemuxTask
    : public ModelBase
{
public:
    RemuxTask();
    virtual ~RemuxTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemuxTask members


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


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    RemuxOutputParam getOutputParam() const;
    bool outputParamIsSet() const;
    void unsetoutputParam();
    void setOutputParam(const RemuxOutputParam& value);


    int32_t getCompleteRatio() const;
    bool completeRatioIsSet() const;
    void unsetcompleteRatio();
    void setCompleteRatio(int32_t value);


    MetaData getOutputMetadata() const;
    bool outputMetadataIsSet() const;
    void unsetoutputMetadata();
    void setOutputMetadata(const MetaData& value);


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
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    RemuxOutputParam outputParam_;
    bool outputParamIsSet_;
    int32_t completeRatio_;
    bool completeRatioIsSet_;
    MetaData outputMetadata_;
    bool outputMetadataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_RemuxTask_H_
