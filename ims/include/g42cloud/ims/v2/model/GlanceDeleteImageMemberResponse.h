
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceDeleteImageMemberResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceDeleteImageMemberResponse();
    virtual ~GlanceDeleteImageMemberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceDeleteImageMemberResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberResponse_H_
