
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceDeleteImageMemberRequest
    : public ModelBase
{
public:
    GlanceDeleteImageMemberRequest();
    virtual ~GlanceDeleteImageMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceDeleteImageMemberRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceDeleteImageMemberRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceDeleteImageMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageMemberRequest_H_
