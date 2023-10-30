
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRuleOption
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRuleOption();
    virtual ~NeutronCreateSecurityGroupRuleOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRuleOption members


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);


    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);


    int32_t getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(int32_t value);


    int32_t getPortRangeMin() const;
    bool portRangeMinIsSet() const;
    void unsetportRangeMin();
    void setPortRangeMin(int32_t value);


    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);


    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);


    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    int32_t portRangeMax_;
    bool portRangeMaxIsSet_;
    int32_t portRangeMin_;
    bool portRangeMinIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string remoteGroupId_;
    bool remoteGroupIdIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRuleOption_H_
