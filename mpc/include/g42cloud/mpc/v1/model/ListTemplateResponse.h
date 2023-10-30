
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/TemplateInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplateResponse();
    virtual ~ListTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplateResponse members


    std::vector<TemplateInfo>& getTemplateArray();
    bool templateArrayIsSet() const;
    void unsettemplateArray();
    void setTemplateArray(const std::vector<TemplateInfo>& value);


    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TemplateInfo> templateArray_;
    bool templateArrayIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateResponse_H_
