
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/PicInfo.h>
#include <g42cloud/mpc/v1/model/AvParameters.h>
#include <string>
#include <g42cloud/mpc/v1/model/TranscodeDetail.h>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  QueryTranscodingsTaskResponse
    : public ModelBase
{
public:
    QueryTranscodingsTaskResponse();
    virtual ~QueryTranscodingsTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryTranscodingsTaskResponse members


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


    std::vector<int32_t>& getTransTemplateId();
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(std::vector<int32_t> value);


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::vector<std::string>& getOutputFileName();
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::vector<std::string>& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getTips() const;
    bool tipsIsSet() const;
    void unsettips();
    void setTips(const std::string& value);


    TranscodeDetail getTranscodeDetail() const;
    bool transcodeDetailIsSet() const;
    void unsettranscodeDetail();
    void setTranscodeDetail(const TranscodeDetail& value);


    ObsObjInfo getThumbnailOutput() const;
    bool thumbnailOutputIsSet() const;
    void unsetthumbnailOutput();
    void setThumbnailOutput(const ObsObjInfo& value);


    std::string getThumbnailOutputname() const;
    bool thumbnailOutputnameIsSet() const;
    void unsetthumbnailOutputname();
    void setThumbnailOutputname(const std::string& value);


    std::vector<PicInfo>& getPicInfo();
    bool picInfoIsSet() const;
    void unsetpicInfo();
    void setPicInfo(const std::vector<PicInfo>& value);


    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<int32_t> transTemplateId_;
    bool transTemplateIdIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<std::string> outputFileName_;
    bool outputFileNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string tips_;
    bool tipsIsSet_;
    TranscodeDetail transcodeDetail_;
    bool transcodeDetailIsSet_;
    ObsObjInfo thumbnailOutput_;
    bool thumbnailOutputIsSet_;
    std::string thumbnailOutputname_;
    bool thumbnailOutputnameIsSet_;
    std::vector<PicInfo> picInfo_;
    bool picInfoIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_
