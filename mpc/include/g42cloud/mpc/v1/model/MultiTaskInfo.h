
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/SourceInfo.h>
#include <g42cloud/mpc/v1/model/ErrorResponse.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MultiTaskInfo
    : public ModelBase
{
public:
    MultiTaskInfo();
    virtual ~MultiTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiTaskInfo members


    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


    ErrorResponse getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ErrorResponse& value);


    SourceInfo getOutputFile() const;
    bool outputFileIsSet() const;
    void unsetoutputFile();
    void setOutputFile(const SourceInfo& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    ErrorResponse error_;
    bool errorIsSet_;
    SourceInfo outputFile_;
    bool outputFileIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_
