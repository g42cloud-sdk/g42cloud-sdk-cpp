
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/DeleteServerGroupMemberRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DeleteServerGroupMemberRequest
    : public ModelBase
{
public:
    DeleteServerGroupMemberRequest();
    virtual ~DeleteServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServerGroupMemberRequest members


    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);


    DeleteServerGroupMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteServerGroupMemberRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    DeleteServerGroupMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_
