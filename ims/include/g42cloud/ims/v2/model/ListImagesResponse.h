
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/ImageInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListImagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImagesResponse();
    virtual ~ListImagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImagesResponse members


    std::vector<ImageInfo>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<ImageInfo>& value);


protected:
    std::vector<ImageInfo> images_;
    bool imagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListImagesResponse_H_
