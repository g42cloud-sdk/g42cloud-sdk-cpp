
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerDetail.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListServersDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServersDetailsResponse();
    virtual ~ListServersDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServersDetailsResponse members


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    std::vector<ServerDetail>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerDetail>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ServerDetail> servers_;
    bool serversIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsResponse_H_
