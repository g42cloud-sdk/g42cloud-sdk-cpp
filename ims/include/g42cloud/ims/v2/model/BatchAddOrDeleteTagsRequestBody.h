
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/ResourceTag.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  BatchAddOrDeleteTagsRequestBody
    : public ModelBase
{
public:
    BatchAddOrDeleteTagsRequestBody();
    virtual ~BatchAddOrDeleteTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddOrDeleteTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequestBody_H_
