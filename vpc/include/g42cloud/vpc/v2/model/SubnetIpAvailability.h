
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  SubnetIpAvailability
    : public ModelBase
{
public:
    SubnetIpAvailability();
    virtual ~SubnetIpAvailability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubnetIpAvailability members


    int32_t getUsedIps() const;
    bool usedIpsIsSet() const;
    void unsetusedIps();
    void setUsedIps(int32_t value);


    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);


    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);


    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


    int32_t getTotalIps() const;
    bool totalIpsIsSet() const;
    void unsettotalIps();
    void setTotalIps(int32_t value);


protected:
    int32_t usedIps_;
    bool usedIpsIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    int32_t totalIps_;
    bool totalIpsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_SubnetIpAvailability_H_
