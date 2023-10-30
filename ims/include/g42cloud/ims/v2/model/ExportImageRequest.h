
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/ExportImageRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ExportImageRequest
    : public ModelBase
{
public:
    ExportImageRequest();
    virtual ~ExportImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportImageRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    ExportImageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExportImageRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    ExportImageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportImageRequest& dereference_from_shared_ptr(std::shared_ptr<ExportImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequest_H_
