
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/GlanceAddImageMemberRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceAddImageMemberRequest
    : public ModelBase
{
public:
    GlanceAddImageMemberRequest();
    virtual ~GlanceAddImageMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceAddImageMemberRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    GlanceAddImageMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GlanceAddImageMemberRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    GlanceAddImageMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceAddImageMemberRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceAddImageMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceAddImageMemberRequest_H_
