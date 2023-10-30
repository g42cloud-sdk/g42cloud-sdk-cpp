
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MixInfo_layout.h>
#include <g42cloud/mpc/v1/model/InputSetting.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MixInfo
    : public ModelBase
{
public:
    MixInfo();
    virtual ~MixInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MixInfo members


    std::vector<InputSetting>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<InputSetting>& value);


    MixInfo_layout getLayout() const;
    bool layoutIsSet() const;
    void unsetlayout();
    void setLayout(const MixInfo_layout& value);


protected:
    std::vector<InputSetting> inputs_;
    bool inputsIsSet_;
    MixInfo_layout layout_;
    bool layoutIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_H_
