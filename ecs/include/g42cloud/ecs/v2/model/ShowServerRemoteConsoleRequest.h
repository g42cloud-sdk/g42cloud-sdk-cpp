
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ShowServerRemoteConsoleRequest
    : public ModelBase
{
public:
    ShowServerRemoteConsoleRequest();
    virtual ~ShowServerRemoteConsoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerRemoteConsoleRequest members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    ShowServerRemoteConsoleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowServerRemoteConsoleRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    ShowServerRemoteConsoleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerRemoteConsoleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerRemoteConsoleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_
