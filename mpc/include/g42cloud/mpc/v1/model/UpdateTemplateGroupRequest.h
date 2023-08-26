
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_UpdateTemplateGroupRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_UpdateTemplateGroupRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ModifyTransTemplateGroup.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  UpdateTemplateGroupRequest
    : public ModelBase
{
public:
    UpdateTemplateGroupRequest();
    virtual ~UpdateTemplateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateTemplateGroupRequest members


    ModifyTransTemplateGroup getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyTransTemplateGroup& value);


protected:
    ModifyTransTemplateGroup body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTemplateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTemplateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_UpdateTemplateGroupRequest_H_
