
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ResetServerPasswordOption
    : public ModelBase
{
public:
    ResetServerPasswordOption();
    virtual ~ResetServerPasswordOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetServerPasswordOption members


    std::string getNewPassword() const;
    bool newPasswordIsSet() const;
    void unsetnewPassword();
    void setNewPassword(const std::string& value);


    bool isIsCheckPassword() const;
    bool isCheckPasswordIsSet() const;
    void unsetisCheckPassword();
    void setIsCheckPassword(bool value);


protected:
    std::string newPassword_;
    bool newPasswordIsSet_;
    bool isCheckPassword_;
    bool isCheckPasswordIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ResetServerPasswordOption_H_
