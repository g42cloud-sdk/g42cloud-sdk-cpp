
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/UpdateServerOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  UpdateServerRequestBody
    : public ModelBase
{
public:
    UpdateServerRequestBody();
    virtual ~UpdateServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerRequestBody members


    UpdateServerOption getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const UpdateServerOption& value);


protected:
    UpdateServerOption server_;
    bool serverIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_
