
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipExtendParam_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipExtendParam_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerEipExtendParam
    : public ModelBase
{
public:
    PrePaidServerEipExtendParam();
    virtual ~PrePaidServerEipExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerEipExtendParam members


    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);


protected:
    std::string chargingMode_;
    bool chargingModeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipExtendParam_H_
