
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/ServerInterfaceFixedIp.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  InterfaceAttachment
    : public ModelBase
{
public:
    InterfaceAttachment();
    virtual ~InterfaceAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InterfaceAttachment members


    std::vector<ServerInterfaceFixedIp>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<ServerInterfaceFixedIp>& value);


    std::string getMacAddr() const;
    bool macAddrIsSet() const;
    void unsetmacAddr();
    void setMacAddr(const std::string& value);


    std::string getNetId() const;
    bool netIdIsSet() const;
    void unsetnetId();
    void setNetId(const std::string& value);


    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);


    std::string getPortState() const;
    bool portStateIsSet() const;
    void unsetportState();
    void setPortState(const std::string& value);


    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


    std::string getDriverMode() const;
    bool driverModeIsSet() const;
    void unsetdriverMode();
    void setDriverMode(const std::string& value);


    int32_t getMinRate() const;
    bool minRateIsSet() const;
    void unsetminRate();
    void setMinRate(int32_t value);


    int32_t getMultiqueueNum() const;
    bool multiqueueNumIsSet() const;
    void unsetmultiqueueNum();
    void setMultiqueueNum(int32_t value);


    std::string getPciAddress() const;
    bool pciAddressIsSet() const;
    void unsetpciAddress();
    void setPciAddress(const std::string& value);


protected:
    std::vector<ServerInterfaceFixedIp> fixedIps_;
    bool fixedIpsIsSet_;
    std::string macAddr_;
    bool macAddrIsSet_;
    std::string netId_;
    bool netIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portState_;
    bool portStateIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string driverMode_;
    bool driverModeIsSet_;
    int32_t minRate_;
    bool minRateIsSet_;
    int32_t multiqueueNum_;
    bool multiqueueNumIsSet_;
    std::string pciAddress_;
    bool pciAddressIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_InterfaceAttachment_H_
