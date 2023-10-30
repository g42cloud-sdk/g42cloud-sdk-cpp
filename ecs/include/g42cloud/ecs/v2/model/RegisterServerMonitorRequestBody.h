
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_


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
class G42CLOUD_ECS_V2_EXPORT  RegisterServerMonitorRequestBody
    : public ModelBase
{
public:
    RegisterServerMonitorRequestBody();
    virtual ~RegisterServerMonitorRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterServerMonitorRequestBody members


    std::string getMonitorMetrics() const;
    bool monitorMetricsIsSet() const;
    void unsetmonitorMetrics();
    void setMonitorMetrics(const std::string& value);


protected:
    std::string monitorMetrics_;
    bool monitorMetricsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_RegisterServerMonitorRequestBody_H_
