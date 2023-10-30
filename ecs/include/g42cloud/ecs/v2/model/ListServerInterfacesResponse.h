
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/InterfaceAttachableQuantity.h>
#include <g42cloud/ecs/v2/model/InterfaceAttachment.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListServerInterfacesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerInterfacesResponse();
    virtual ~ListServerInterfacesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerInterfacesResponse members


    InterfaceAttachableQuantity getAttachableQuantity() const;
    bool attachableQuantityIsSet() const;
    void unsetattachableQuantity();
    void setAttachableQuantity(const InterfaceAttachableQuantity& value);


    std::vector<InterfaceAttachment>& getInterfaceAttachments();
    bool interfaceAttachmentsIsSet() const;
    void unsetinterfaceAttachments();
    void setInterfaceAttachments(const std::vector<InterfaceAttachment>& value);


protected:
    InterfaceAttachableQuantity attachableQuantity_;
    bool attachableQuantityIsSet_;
    std::vector<InterfaceAttachment> interfaceAttachments_;
    bool interfaceAttachmentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServerInterfacesResponse_H_
