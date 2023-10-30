
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerSchedulerHints
    : public ModelBase
{
public:
    ServerSchedulerHints();
    virtual ~ServerSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerSchedulerHints members


    std::vector<std::string>& getGroup();
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::vector<std::string>& value);


    std::vector<std::string>& getTenancy();
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::vector<std::string>& value);


    std::vector<std::string>& getDedicatedHostId();
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> group_;
    bool groupIsSet_;
    std::vector<std::string> tenancy_;
    bool tenancyIsSet_;
    std::vector<std::string> dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_
