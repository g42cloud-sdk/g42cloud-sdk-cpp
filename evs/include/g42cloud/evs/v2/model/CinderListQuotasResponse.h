
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/QuotaList.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CinderListQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    CinderListQuotasResponse();
    virtual ~CinderListQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListQuotasResponse members


    QuotaList getQuotaSet() const;
    bool quotaSetIsSet() const;
    void unsetquotaSet();
    void setQuotaSet(const QuotaList& value);


protected:
    QuotaList quotaSet_;
    bool quotaSetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasResponse_H_
