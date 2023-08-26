
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/TagKeyValue.h>
#include <string>
#include <g42cloud/ims/v2/model/Tags.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListImageByTagsRequestBody
    : public ModelBase
{
public:
    ListImageByTagsRequestBody();
    virtual ~ListImageByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImageByTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::vector<Tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tags>& value);


    std::vector<Tags>& getTagsAny();
    bool tagsAnyIsSet() const;
    void unsettagsAny();
    void setTagsAny(const std::vector<Tags>& value);


    std::vector<Tags>& getNotTags();
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::vector<Tags>& value);


    std::vector<Tags>& getNotTagsAny();
    bool notTagsAnyIsSet() const;
    void unsetnotTagsAny();
    void setNotTagsAny(const std::vector<Tags>& value);


    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);


    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);


    std::vector<TagKeyValue>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<TagKeyValue>& value);


    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<Tags> tags_;
    bool tagsIsSet_;
    std::vector<Tags> tagsAny_;
    bool tagsAnyIsSet_;
    std::vector<Tags> notTags_;
    bool notTagsIsSet_;
    std::vector<Tags> notTagsAny_;
    bool notTagsAnyIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::vector<TagKeyValue> matches_;
    bool matchesIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequestBody_H_
