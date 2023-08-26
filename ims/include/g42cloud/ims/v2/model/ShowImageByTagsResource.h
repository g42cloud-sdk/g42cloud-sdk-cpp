
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/TagKeyValue.h>
#include <string>
#include <g42cloud/ims/v2/model/QueryImageByTagsResourceDetail.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ShowImageByTagsResource
    : public ModelBase
{
public:
    ShowImageByTagsResource();
    virtual ~ShowImageByTagsResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowImageByTagsResource members


    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


    QueryImageByTagsResourceDetail getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const QueryImageByTagsResourceDetail& value);


    std::vector<TagKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagKeyValue>& value);


    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    QueryImageByTagsResourceDetail resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<TagKeyValue> tags_;
    bool tagsIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ShowImageByTagsResource_H_
