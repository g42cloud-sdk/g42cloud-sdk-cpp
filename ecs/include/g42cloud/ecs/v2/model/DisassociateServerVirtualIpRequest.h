
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/DisassociateServerVirtualIpRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DisassociateServerVirtualIpRequest
    : public ModelBase
{
public:
    DisassociateServerVirtualIpRequest();
    virtual ~DisassociateServerVirtualIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociateServerVirtualIpRequest members


    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);


    DisassociateServerVirtualIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DisassociateServerVirtualIpRequestBody& value);


protected:
    std::string nicId_;
    bool nicIdIsSet_;
    DisassociateServerVirtualIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateServerVirtualIpRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateServerVirtualIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_
