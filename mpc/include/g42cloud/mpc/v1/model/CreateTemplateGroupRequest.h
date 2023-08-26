
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/TransTemplateGroup.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateTemplateGroupRequest
    : public ModelBase
{
public:
    CreateTemplateGroupRequest();
    virtual ~CreateTemplateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateTemplateGroupRequest members


    TransTemplateGroup getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TransTemplateGroup& value);


protected:
    TransTemplateGroup body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTemplateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTemplateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateTemplateGroupRequest_H_
