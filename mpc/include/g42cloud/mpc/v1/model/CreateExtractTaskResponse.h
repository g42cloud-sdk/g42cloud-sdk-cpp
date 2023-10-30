
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateExtractTaskResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateExtractTaskResponse_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/CommonCreateTaskRsp.h>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/MetaData.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateExtractTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateExtractTaskResponse();
    virtual ~CreateExtractTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExtractTaskResponse members


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


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::string getOutputFileName() const;
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    MetaData getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const MetaData& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputFileName_;
    bool outputFileNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    MetaData metadata_;
    bool metadataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateExtractTaskResponse_H_
