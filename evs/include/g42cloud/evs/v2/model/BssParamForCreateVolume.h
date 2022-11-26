
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BssParamForCreateVolume
    : public ModelBase
{
public:
    BssParamForCreateVolume();
    virtual ~BssParamForCreateVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BssParamForCreateVolume members


    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);


    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);


    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);


    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);


protected:
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_
