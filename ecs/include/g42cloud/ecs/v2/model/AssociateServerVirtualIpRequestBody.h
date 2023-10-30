
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/AssociateServerVirtualIpOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  AssociateServerVirtualIpRequestBody
    : public ModelBase
{
public:
    AssociateServerVirtualIpRequestBody();
    virtual ~AssociateServerVirtualIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateServerVirtualIpRequestBody members


    AssociateServerVirtualIpOption getNic() const;
    bool nicIsSet() const;
    void unsetnic();
    void setNic(const AssociateServerVirtualIpOption& value);


protected:
    AssociateServerVirtualIpOption nic_;
    bool nicIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequestBody_H_
