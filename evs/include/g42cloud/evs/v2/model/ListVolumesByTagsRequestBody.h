
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/Match.h>
#include <string>
#include <g42cloud/evs/v2/model/TagsForListVolumes.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListVolumesByTagsRequestBody
    : public ModelBase
{
public:
    ListVolumesByTagsRequestBody();
    virtual ~ListVolumesByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVolumesByTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


    std::vector<TagsForListVolumes>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagsForListVolumes>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<TagsForListVolumes> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesByTagsRequestBody_H_
