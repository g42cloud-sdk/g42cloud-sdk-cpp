
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BssParamForResizeVolume
    : public ModelBase
{
public:
    BssParamForResizeVolume();
    virtual ~BssParamForResizeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BssParamForResizeVolume members


    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BssParamForResizeVolume_H_
