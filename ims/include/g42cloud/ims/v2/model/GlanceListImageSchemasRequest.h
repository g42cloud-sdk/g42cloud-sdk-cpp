
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasRequest_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceListImageSchemasRequest
    : public ModelBase
{
public:
    GlanceListImageSchemasRequest();
    virtual ~GlanceListImageSchemasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImageSchemasRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceListImageSchemasRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceListImageSchemasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasRequest_H_
