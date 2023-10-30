
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ChangeServerOsWithCloudInitOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ChangeServerOsWithCloudInitRequestBody
    : public ModelBase
{
public:
    ChangeServerOsWithCloudInitRequestBody();
    virtual ~ChangeServerOsWithCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerOsWithCloudInitRequestBody members


    ChangeServerOsWithCloudInitOption getOsChange() const;
    bool osChangeIsSet() const;
    void unsetosChange();
    void setOsChange(const ChangeServerOsWithCloudInitOption& value);


protected:
    ChangeServerOsWithCloudInitOption osChange_;
    bool osChangeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitRequestBody_H_
