
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PostPaidServerExtendParam
    : public ModelBase
{
public:
    PostPaidServerExtendParam();
    virtual ~PostPaidServerExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServerExtendParam members


    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);


    std::string getRegionID() const;
    bool regionIDIsSet() const;
    void unsetregionID();
    void setRegionID(const std::string& value);


    bool isSupportAutoRecovery() const;
    bool supportAutoRecoveryIsSet() const;
    void unsetsupportAutoRecovery();
    void setSupportAutoRecovery(bool value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


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


    std::string getCbCsbsBackup() const;
    bool cbCsbsBackupIsSet() const;
    void unsetcbCsbsBackup();
    void setCbCsbsBackup(const std::string& value);


protected:
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    std::string regionID_;
    bool regionIDIsSet_;
    bool supportAutoRecovery_;
    bool supportAutoRecoveryIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
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
    std::string cbCsbsBackup_;
    bool cbCsbsBackupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_
