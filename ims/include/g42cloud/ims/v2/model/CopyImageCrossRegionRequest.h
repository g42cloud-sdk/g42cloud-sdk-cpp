
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/CopyImageCrossRegionRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  CopyImageCrossRegionRequest
    : public ModelBase
{
public:
    CopyImageCrossRegionRequest();
    virtual ~CopyImageCrossRegionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CopyImageCrossRegionRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    CopyImageCrossRegionRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CopyImageCrossRegionRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    CopyImageCrossRegionRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyImageCrossRegionRequest& dereference_from_shared_ptr(std::shared_ptr<CopyImageCrossRegionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_CopyImageCrossRegionRequest_H_
