
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ListTag.h>
#include <g42cloud/vpc/v2/model/Match.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListVpcsByTagsRequestBody
    : public ModelBase
{
public:
    ListVpcsByTagsRequestBody();
    virtual ~ListVpcsByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcsByTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


    std::vector<ListTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ListTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;
    std::vector<ListTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListVpcsByTagsRequestBody_H_
