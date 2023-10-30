
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_QuotaDetailVolumesSATA_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_QuotaDetailVolumesSATA_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/QuotaDetail.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  QuotaDetailVolumesSATA
    : public ModelBase
{
public:
    QuotaDetailVolumesSATA();
    virtual ~QuotaDetailVolumesSATA();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaDetailVolumesSATA members


    int32_t getInUse() const;
    bool inUseIsSet() const;
    void unsetinUse();
    void setInUse(int32_t value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    int32_t getReserved() const;
    bool reservedIsSet() const;
    void unsetreserved();
    void setReserved(int32_t value);


protected:
    int32_t inUse_;
    bool inUseIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t reserved_;
    bool reservedIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_QuotaDetailVolumesSATA_H_
