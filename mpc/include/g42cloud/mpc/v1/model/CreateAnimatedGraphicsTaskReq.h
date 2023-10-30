
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AnimatedGraphicsOutputParam.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/CommonCreateTaskReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateAnimatedGraphicsTaskReq
    : public ModelBase
{
public:
    CreateAnimatedGraphicsTaskReq();
    virtual ~CreateAnimatedGraphicsTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAnimatedGraphicsTaskReq members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    AnimatedGraphicsOutputParam getOutputParam() const;
    bool outputParamIsSet() const;
    void unsetoutputParam();
    void setOutputParam(const AnimatedGraphicsOutputParam& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    AnimatedGraphicsOutputParam outputParam_;
    bool outputParamIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateAnimatedGraphicsTaskReq_H_
