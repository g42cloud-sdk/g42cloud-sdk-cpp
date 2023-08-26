

#include "g42cloud/ecs/v2/model/NovaListServerSecurityGroupsRequest.h"

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServerSecurityGroupsRequest::NovaListServerSecurityGroupsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

NovaListServerSecurityGroupsRequest::~NovaListServerSecurityGroupsRequest() = default;

void NovaListServerSecurityGroupsRequest::validate()
{
}

web::json::value NovaListServerSecurityGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool NovaListServerSecurityGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}

std::string NovaListServerSecurityGroupsRequest::getServerId() const
{
    return serverId_;
}

void NovaListServerSecurityGroupsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaListServerSecurityGroupsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaListServerSecurityGroupsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


