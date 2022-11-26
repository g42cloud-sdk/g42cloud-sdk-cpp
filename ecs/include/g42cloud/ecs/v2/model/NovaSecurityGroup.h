
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <g42cloud/ecs/v2/model/NovaSecurityGroupCommonRule.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaSecurityGroup
    : public ModelBase
{
public:
    NovaSecurityGroup();
    virtual ~NovaSecurityGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaSecurityGroup members


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::vector<NovaSecurityGroupCommonRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<NovaSecurityGroupCommonRule>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::vector<NovaSecurityGroupCommonRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaSecurityGroup_H_
