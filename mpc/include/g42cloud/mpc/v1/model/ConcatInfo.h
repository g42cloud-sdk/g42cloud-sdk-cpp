
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ConcatInfo
    : public ModelBase
{
public:
    ConcatInfo();
    virtual ~ConcatInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConcatInfo members


    std::vector<ObsObjInfo>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<ObsObjInfo>& value);


protected:
    std::vector<ObsObjInfo> inputs_;
    bool inputsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ConcatInfo_H_
