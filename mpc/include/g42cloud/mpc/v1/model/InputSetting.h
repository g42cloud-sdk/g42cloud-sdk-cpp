
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_InputSetting_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_InputSetting_H_


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
class G42CLOUD_MPC_V1_EXPORT  InputSetting
    : public ModelBase
{
public:
    InputSetting();
    virtual ~InputSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputSetting members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    std::string getPaneId() const;
    bool paneIdIsSet() const;
    void unsetpaneId();
    void setPaneId(const std::string& value);


    std::string getAudioPolicy() const;
    bool audioPolicyIsSet() const;
    void unsetaudioPolicy();
    void setAudioPolicy(const std::string& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string paneId_;
    bool paneIdIsSet_;
    std::string audioPolicy_;
    bool audioPolicyIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_InputSetting_H_
