
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/SourceInfo.h>
#include <g42cloud/mpc/v1/model/MultiTaskInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  TranscodeDetail
    : public ModelBase
{
public:
    TranscodeDetail();
    virtual ~TranscodeDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeDetail members


    std::vector<MultiTaskInfo>& getMultitaskInfo();
    bool multitaskInfoIsSet() const;
    void unsetmultitaskInfo();
    void setMultitaskInfo(const std::vector<MultiTaskInfo>& value);


    SourceInfo getInputFile() const;
    bool inputFileIsSet() const;
    void unsetinputFile();
    void setInputFile(const SourceInfo& value);


protected:
    std::vector<MultiTaskInfo> multitaskInfo_;
    bool multitaskInfoIsSet_;
    SourceInfo inputFile_;
    bool inputFileIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_
