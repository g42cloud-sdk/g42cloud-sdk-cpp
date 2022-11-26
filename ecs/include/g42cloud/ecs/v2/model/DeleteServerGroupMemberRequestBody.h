
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerGroupMember.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DeleteServerGroupMemberRequestBody
    : public ModelBase
{
public:
    DeleteServerGroupMemberRequestBody();
    virtual ~DeleteServerGroupMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteServerGroupMemberRequestBody members


    ServerGroupMember getRemoveMember() const;
    bool removeMemberIsSet() const;
    void unsetremoveMember();
    void setRemoveMember(const ServerGroupMember& value);


protected:
    ServerGroupMember removeMember_;
    bool removeMemberIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_
