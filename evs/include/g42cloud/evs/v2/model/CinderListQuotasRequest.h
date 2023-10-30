
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_


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
class G42CLOUD_EVS_V2_EXPORT  CinderListQuotasRequest
    : public ModelBase
{
public:
    CinderListQuotasRequest();
    virtual ~CinderListQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CinderListQuotasRequest members


    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);


    std::string getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(const std::string& value);


protected:
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;
    std::string usage_;
    bool usageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_
