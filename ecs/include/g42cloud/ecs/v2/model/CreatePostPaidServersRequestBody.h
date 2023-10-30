
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PostPaidServer.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CreatePostPaidServersRequestBody
    : public ModelBase
{
public:
    CreatePostPaidServersRequestBody();
    virtual ~CreatePostPaidServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePostPaidServersRequestBody members


    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


    PostPaidServer getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const PostPaidServer& value);


protected:
    bool dryRun_;
    bool dryRunIsSet_;
    PostPaidServer server_;
    bool serverIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequestBody_H_
