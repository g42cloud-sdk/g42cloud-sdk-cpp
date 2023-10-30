
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerLimits.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ShowServerLimitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerLimitsResponse();
    virtual ~ShowServerLimitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerLimitsResponse members


    ServerLimits getAbsolute() const;
    bool absoluteIsSet() const;
    void unsetabsolute();
    void setAbsolute(const ServerLimits& value);


protected:
    ServerLimits absolute_;
    bool absoluteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_
