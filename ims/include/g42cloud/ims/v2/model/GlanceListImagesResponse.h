
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/GlanceShowImageResponseBody.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceListImagesResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceListImagesResponse();
    virtual ~GlanceListImagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImagesResponse members


    std::string getFirst() const;
    bool firstIsSet() const;
    void unsetfirst();
    void setFirst(const std::string& value);


    std::vector<GlanceShowImageResponseBody>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<GlanceShowImageResponseBody>& value);


    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


    std::string getNext() const;
    bool nextIsSet() const;
    void unsetnext();
    void setNext(const std::string& value);


protected:
    std::string first_;
    bool firstIsSet_;
    std::vector<GlanceShowImageResponseBody> images_;
    bool imagesIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string next_;
    bool nextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImagesResponse_H_
