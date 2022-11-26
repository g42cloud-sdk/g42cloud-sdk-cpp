
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerExtendParam_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerExtendParam_H_

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
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerExtendParam
    : public ModelBase
{
public:
    PrePaidServerExtendParam();
    virtual ~PrePaidServerExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerExtendParam members


    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);


    std::string getRegionID() const;
    bool regionIDIsSet() const;
    void unsetregionID();
    void setRegionID(const std::string& value);


    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);


    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);


    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);


    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    bool isSupportAutoRecovery() const;
    bool supportAutoRecoveryIsSet() const;
    void unsetsupportAutoRecovery();
    void setSupportAutoRecovery(bool value);


    std::string getMarketType() const;
    bool marketTypeIsSet() const;
    void unsetmarketType();
    void setMarketType(const std::string& value);


    std::string getSpotPrice() const;
    bool spotPriceIsSet() const;
    void unsetspotPrice();
    void setSpotPrice(const std::string& value);


    std::string getDiskPrior() const;
    bool diskPriorIsSet() const;
    void unsetdiskPrior();
    void setDiskPrior(const std::string& value);


    int32_t getSpotDurationHours() const;
    bool spotDurationHoursIsSet() const;
    void unsetspotDurationHours();
    void setSpotDurationHours(int32_t value);


    std::string getInterruptionPolicy() const;
    bool interruptionPolicyIsSet() const;
    void unsetinterruptionPolicy();
    void setInterruptionPolicy(const std::string& value);


    int32_t getSpotDurationCount() const;
    bool spotDurationCountIsSet() const;
    void unsetspotDurationCount();
    void setSpotDurationCount(int32_t value);


protected:
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string regionID_;
    bool regionIDIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool supportAutoRecovery_;
    bool supportAutoRecoveryIsSet_;
    std::string marketType_;
    bool marketTypeIsSet_;
    std::string spotPrice_;
    bool spotPriceIsSet_;
    std::string diskPrior_;
    bool diskPriorIsSet_;
    int32_t spotDurationHours_;
    bool spotDurationHoursIsSet_;
    std::string interruptionPolicy_;
    bool interruptionPolicyIsSet_;
    int32_t spotDurationCount_;
    bool spotDurationCountIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerExtendParam_H_
