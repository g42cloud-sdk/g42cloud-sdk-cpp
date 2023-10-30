
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/Tags.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListImagesTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImagesTagsResponse();
    virtual ~ListImagesTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImagesTagsResponse members


    std::vector<Tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tags>& value);


protected:
    std::vector<Tags> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListImagesTagsResponse_H_
