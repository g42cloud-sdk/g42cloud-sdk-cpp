
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/AssociateServerVirtualIpRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  AssociateServerVirtualIpRequest
    : public ModelBase
{
public:
    AssociateServerVirtualIpRequest();
    virtual ~AssociateServerVirtualIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateServerVirtualIpRequest members


    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);


    AssociateServerVirtualIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateServerVirtualIpRequestBody& value);


protected:
    std::string nicId_;
    bool nicIdIsSet_;
    AssociateServerVirtualIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateServerVirtualIpRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateServerVirtualIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_
