
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_

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
class G42CLOUD_ECS_V2_EXPORT  AddServerGroupMemberRequestBody
    : public ModelBase
{
public:
    AddServerGroupMemberRequestBody();
    virtual ~AddServerGroupMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddServerGroupMemberRequestBody members


    ServerGroupMember getAddMember() const;
    bool addMemberIsSet() const;
    void unsetaddMember();
    void setAddMember(const ServerGroupMember& value);


protected:
    ServerGroupMember addMember_;
    bool addMemberIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_
