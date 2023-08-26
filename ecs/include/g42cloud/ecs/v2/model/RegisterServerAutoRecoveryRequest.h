
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/RegisterServerAutoRecoveryRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  RegisterServerAutoRecoveryRequest
    : public ModelBase
{
public:
    RegisterServerAutoRecoveryRequest();
    virtual ~RegisterServerAutoRecoveryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RegisterServerAutoRecoveryRequest members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    RegisterServerAutoRecoveryRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RegisterServerAutoRecoveryRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    RegisterServerAutoRecoveryRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RegisterServerAutoRecoveryRequest& dereference_from_shared_ptr(std::shared_ptr<RegisterServerAutoRecoveryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequest_H_
