
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OutputWatermarkPara
    : public ModelBase
{
public:
    OutputWatermarkPara();
    virtual ~OutputWatermarkPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputWatermarkPara members


    int32_t getTimeDuration() const;
    bool timeDurationIsSet() const;
    void unsettimeDuration();
    void setTimeDuration(int32_t value);


protected:
    int32_t timeDuration_;
    bool timeDurationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OutputWatermarkPara_H_
