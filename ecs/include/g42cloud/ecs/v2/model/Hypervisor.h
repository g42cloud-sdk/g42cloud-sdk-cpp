
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  Hypervisor
    : public ModelBase
{
public:
    Hypervisor();
    virtual ~Hypervisor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Hypervisor members


    std::string getHypervisorType() const;
    bool hypervisorTypeIsSet() const;
    void unsethypervisorType();
    void setHypervisorType(const std::string& value);


    std::string getCsdHypervisor() const;
    bool csdHypervisorIsSet() const;
    void unsetcsdHypervisor();
    void setCsdHypervisor(const std::string& value);


protected:
    std::string hypervisorType_;
    bool hypervisorTypeIsSet_;
    std::string csdHypervisor_;
    bool csdHypervisorIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_Hypervisor_H_
