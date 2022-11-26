
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ChangeServerOsWithCloudInitRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ChangeServerOsWithCloudInitRequest
    : public ModelBase
{
public:
    ChangeServerOsWithCloudInitRequest();
    virtual ~ChangeServerOsWithCloudInitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithCloudInitRequest members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    ChangeServerOsWithCloudInitRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeServerOsWithCloudInitRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    ChangeServerOsWithCloudInitRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeServerOsWithCloudInitRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeServerOsWithCloudInitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequest_H_
