
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ChangeServerOsWithoutCloudInitOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ChangeServerOsWithoutCloudInitRequestBody
    : public ModelBase
{
public:
    ChangeServerOsWithoutCloudInitRequestBody();
    virtual ~ChangeServerOsWithoutCloudInitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithoutCloudInitRequestBody members


    ChangeServerOsWithoutCloudInitOption getOsChange() const;
    bool osChangeIsSet() const;
    void unsetosChange();
    void setOsChange(const ChangeServerOsWithoutCloudInitOption& value);


protected:
    ChangeServerOsWithoutCloudInitOption osChange_;
    bool osChangeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequestBody_H_
