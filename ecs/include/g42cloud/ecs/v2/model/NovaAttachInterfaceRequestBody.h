
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaAttachInterfaceOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaAttachInterfaceRequestBody
    : public ModelBase
{
public:
    NovaAttachInterfaceRequestBody();
    virtual ~NovaAttachInterfaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAttachInterfaceRequestBody members


    NovaAttachInterfaceOption getInterfaceAttachment() const;
    bool interfaceAttachmentIsSet() const;
    void unsetinterfaceAttachment();
    void setInterfaceAttachment(const NovaAttachInterfaceOption& value);


protected:
    NovaAttachInterfaceOption interfaceAttachment_;
    bool interfaceAttachmentIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaAttachInterfaceRequestBody_H_
