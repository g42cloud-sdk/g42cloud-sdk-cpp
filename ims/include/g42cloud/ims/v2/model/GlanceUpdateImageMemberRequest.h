
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/GlanceUpdateImageMemberRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceUpdateImageMemberRequest
    : public ModelBase
{
public:
    GlanceUpdateImageMemberRequest();
    virtual ~GlanceUpdateImageMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceUpdateImageMemberRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);


    GlanceUpdateImageMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GlanceUpdateImageMemberRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;
    GlanceUpdateImageMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceUpdateImageMemberRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceUpdateImageMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberRequest_H_
