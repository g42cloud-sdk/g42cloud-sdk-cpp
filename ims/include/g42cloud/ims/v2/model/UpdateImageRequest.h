
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/UpdateImageRequestBody.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  UpdateImageRequest
    : public ModelBase
{
public:
    UpdateImageRequest();
    virtual ~UpdateImageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateImageRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::vector<UpdateImageRequestBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UpdateImageRequestBody>& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::vector<UpdateImageRequestBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateImageRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateImageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequest_H_
