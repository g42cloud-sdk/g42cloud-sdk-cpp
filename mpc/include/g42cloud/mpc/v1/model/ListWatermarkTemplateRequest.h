
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListWatermarkTemplateRequest
    : public ModelBase
{
public:
    ListWatermarkTemplateRequest();
    virtual ~ListWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListWatermarkTemplateRequest members


    std::vector<int32_t>& getTemplateId();
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(std::vector<int32_t> value);


    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::vector<int32_t> templateId_;
    bool templateIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListWatermarkTemplateRequest_H_
