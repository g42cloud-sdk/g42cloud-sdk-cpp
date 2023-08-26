
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/OsVersionResponse.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ShowVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVersionResponse();
    virtual ~ShowVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVersionResponse members


    std::vector<OsVersionResponse>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<OsVersionResponse>& value);


protected:
    std::vector<OsVersionResponse> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ShowVersionResponse_H_
