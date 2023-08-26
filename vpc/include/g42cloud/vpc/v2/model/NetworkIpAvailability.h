
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/SubnetIpAvailability.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NetworkIpAvailability
    : public ModelBase
{
public:
    NetworkIpAvailability();
    virtual ~NetworkIpAvailability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NetworkIpAvailability members


    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


    std::string getNetworkName() const;
    bool networkNameIsSet() const;
    void unsetnetworkName();
    void setNetworkName(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    int32_t getTotalIps() const;
    bool totalIpsIsSet() const;
    void unsettotalIps();
    void setTotalIps(int32_t value);


    int32_t getUsedIps() const;
    bool usedIpsIsSet() const;
    void unsetusedIps();
    void setUsedIps(int32_t value);


    std::vector<SubnetIpAvailability>& getSubnetIpAvailability();
    bool subnetIpAvailabilityIsSet() const;
    void unsetsubnetIpAvailability();
    void setSubnetIpAvailability(const std::vector<SubnetIpAvailability>& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;
    std::string networkName_;
    bool networkNameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    int32_t totalIps_;
    bool totalIpsIsSet_;
    int32_t usedIps_;
    bool usedIpsIsSet_;
    std::vector<SubnetIpAvailability> subnetIpAvailability_;
    bool subnetIpAvailabilityIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NetworkIpAvailability_H_
