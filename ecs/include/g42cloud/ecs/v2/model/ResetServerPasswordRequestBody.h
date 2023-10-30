
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ResetServerPasswordOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ResetServerPasswordRequestBody
    : public ModelBase
{
public:
    ResetServerPasswordRequestBody();
    virtual ~ResetServerPasswordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetServerPasswordRequestBody members


    ResetServerPasswordOption getResetPassword() const;
    bool resetPasswordIsSet() const;
    void unsetresetPassword();
    void setResetPassword(const ResetServerPasswordOption& value);


protected:
    ResetServerPasswordOption resetPassword_;
    bool resetPasswordIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordRequestBody_H_
