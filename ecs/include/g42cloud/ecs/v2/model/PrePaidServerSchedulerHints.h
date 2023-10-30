
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerSchedulerHints
    : public ModelBase
{
public:
    PrePaidServerSchedulerHints();
    virtual ~PrePaidServerSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidServerSchedulerHints members


    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);


    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);


    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string group_;
    bool groupIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_
