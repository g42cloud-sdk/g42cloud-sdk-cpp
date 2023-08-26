
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_Subtitle_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_Subtitle_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/MulInputFileInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  Subtitle
    : public ModelBase
{
public:
    Subtitle();
    virtual ~Subtitle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Subtitle members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    std::vector<MulInputFileInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<MulInputFileInfo>& value);


    int32_t getSubtitleType() const;
    bool subtitleTypeIsSet() const;
    void unsetsubtitleType();
    void setSubtitleType(int32_t value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::vector<MulInputFileInfo> inputs_;
    bool inputsIsSet_;
    int32_t subtitleType_;
    bool subtitleTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_Subtitle_H_
