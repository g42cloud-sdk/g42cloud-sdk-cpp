
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaSecurityGroupCommonIpRange.h>
#include <g42cloud/ecs/v2/model/NovaSecurityGroupCommonGroup.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaSecurityGroupCommonRule
    : public ModelBase
{
public:
    NovaSecurityGroupCommonRule();
    virtual ~NovaSecurityGroupCommonRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaSecurityGroupCommonRule members


    int32_t getFromPort() const;
    bool fromPortIsSet() const;
    void unsetfromPort();
    void setFromPort(int32_t value);


    NovaSecurityGroupCommonGroup getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const NovaSecurityGroupCommonGroup& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getIpProtocol() const;
    bool ipProtocolIsSet() const;
    void unsetipProtocol();
    void setIpProtocol(const std::string& value);


    NovaSecurityGroupCommonIpRange getIpRange() const;
    bool ipRangeIsSet() const;
    void unsetipRange();
    void setIpRange(const NovaSecurityGroupCommonIpRange& value);


    std::string getParentGroupId() const;
    bool parentGroupIdIsSet() const;
    void unsetparentGroupId();
    void setParentGroupId(const std::string& value);


    int32_t getToPort() const;
    bool toPortIsSet() const;
    void unsettoPort();
    void setToPort(int32_t value);


protected:
    int32_t fromPort_;
    bool fromPortIsSet_;
    NovaSecurityGroupCommonGroup group_;
    bool groupIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string ipProtocol_;
    bool ipProtocolIsSet_;
    NovaSecurityGroupCommonIpRange ipRange_;
    bool ipRangeIsSet_;
    std::string parentGroupId_;
    bool parentGroupIdIsSet_;
    int32_t toPort_;
    bool toPortIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroupCommonRule_H_
