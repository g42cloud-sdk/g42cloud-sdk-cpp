
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_


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
class G42CLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupRulesRequest
    : public ModelBase
{
public:
    NeutronListSecurityGroupRulesRequest();
    virtual ~NeutronListSecurityGroupRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListSecurityGroupRulesRequest members


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(const std::string& value);


    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


    std::string getEthertype() const;
    bool ethertypeIsSet() const;
    void unsetethertype();
    void setEthertype(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getRemoteIpPrefix() const;
    bool remoteIpPrefixIsSet() const;
    void unsetremoteIpPrefix();
    void setRemoteIpPrefix(const std::string& value);


    std::string getRemoteGroupId() const;
    bool remoteGroupIdIsSet() const;
    void unsetremoteGroupId();
    void setRemoteGroupId(const std::string& value);


    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


    std::string getPortRangeMax() const;
    bool portRangeMaxIsSet() const;
    void unsetportRangeMax();
    void setPortRangeMax(const std::string& value);


    std::string getPortRangeMin() const;
    bool portRangeMinIsSet() const;
    void unsetportRangeMin();
    void setPortRangeMin(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string direction_;
    bool directionIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string ethertype_;
    bool ethertypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string remoteIpPrefix_;
    bool remoteIpPrefixIsSet_;
    std::string remoteGroupId_;
    bool remoteGroupIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string portRangeMax_;
    bool portRangeMaxIsSet_;
    std::string portRangeMin_;
    bool portRangeMinIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListSecurityGroupRulesRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListSecurityGroupRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesRequest_H_
