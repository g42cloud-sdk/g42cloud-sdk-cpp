
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateResponse_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/WatermarkTemplate.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListWatermarkTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWatermarkTemplateResponse();
    virtual ~ListWatermarkTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWatermarkTemplateResponse members


    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


    std::vector<WatermarkTemplate>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<WatermarkTemplate>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<WatermarkTemplate> templates_;
    bool templatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateResponse_H_
