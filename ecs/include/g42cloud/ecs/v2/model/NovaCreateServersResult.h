
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaLink.h>
#include <string>
#include <g42cloud/ecs/v2/model/NovaServerSecurityGroup.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateServersResult
    : public ModelBase
{
public:
    NovaCreateServersResult();
    virtual ~NovaCreateServersResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaCreateServersResult members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);


    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);


    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);


    std::string getReservationId() const;
    bool reservationIdIsSet() const;
    void unsetreservationId();
    void setReservationId(const std::string& value);


    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersResult_H_
