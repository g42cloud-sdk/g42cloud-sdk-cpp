
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PageLink.h>
#include <vector>
#include <g42cloud/ecs/v2/model/NovaServer.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListServersDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListServersDetailsResponse();
    virtual ~NovaListServersDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListServersDetailsResponse members


    std::vector<NovaServer>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<NovaServer>& value);


    std::vector<PageLink>& getServersLinks();
    bool serversLinksIsSet() const;
    void unsetserversLinks();
    void setServersLinks(const std::vector<PageLink>& value);


protected:
    std::vector<NovaServer> servers_;
    bool serversIsSet_;
    std::vector<PageLink> serversLinks_;
    bool serversLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsResponse_H_
