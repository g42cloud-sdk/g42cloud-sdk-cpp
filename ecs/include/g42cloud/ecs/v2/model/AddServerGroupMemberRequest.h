
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/AddServerGroupMemberRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  AddServerGroupMemberRequest
    : public ModelBase
{
public:
    AddServerGroupMemberRequest();
    virtual ~AddServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddServerGroupMemberRequest members


    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);


    AddServerGroupMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddServerGroupMemberRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    AddServerGroupMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<AddServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_
