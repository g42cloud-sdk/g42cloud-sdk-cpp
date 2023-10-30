
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequestBody_H_


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
class G42CLOUD_ECS_V2_EXPORT  RegisterServerAutoRecoveryRequestBody
    : public ModelBase
{
public:
    RegisterServerAutoRecoveryRequestBody();
    virtual ~RegisterServerAutoRecoveryRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterServerAutoRecoveryRequestBody members


    std::string getSupportAutoRecovery() const;
    bool supportAutoRecoveryIsSet() const;
    void unsetsupportAutoRecovery();
    void setSupportAutoRecovery(const std::string& value);


protected:
    std::string supportAutoRecovery_;
    bool supportAutoRecoveryIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerAutoRecoveryRequestBody_H_
