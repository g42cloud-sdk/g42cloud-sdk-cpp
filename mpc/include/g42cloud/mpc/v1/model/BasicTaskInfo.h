
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_BasicTaskInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_BasicTaskInfo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  BasicTaskInfo
    : public ModelBase
{
public:
    BasicTaskInfo();
    virtual ~BasicTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicTaskInfo members


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


    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_BasicTaskInfo_H_
