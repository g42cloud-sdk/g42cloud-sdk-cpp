
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceUpdateImageMemberResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceUpdateImageMemberResponse();
    virtual ~GlanceUpdateImageMemberResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceUpdateImageMemberResponse members


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);


    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string memberId_;
    bool memberIdIsSet_;
    std::string schema_;
    bool schemaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceUpdateImageMemberResponse_H_
