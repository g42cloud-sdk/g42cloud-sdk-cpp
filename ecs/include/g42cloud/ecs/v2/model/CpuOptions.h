
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  CpuOptions
    : public ModelBase
{
public:
    CpuOptions();
    virtual ~CpuOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CpuOptions members


    int32_t getHwcpuThreads() const;
    bool hwcpuThreadsIsSet() const;
    void unsethwcpuThreads();
    void setHwcpuThreads(int32_t value);


protected:
    int32_t hwcpuThreads_;
    bool hwcpuThreadsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_CpuOptions_H_
