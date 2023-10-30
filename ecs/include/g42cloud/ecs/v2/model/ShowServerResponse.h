
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerDetail.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ShowServerResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerResponse();
    virtual ~ShowServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerResponse members


    ServerDetail getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const ServerDetail& value);


protected:
    ServerDetail server_;
    bool serverIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_
