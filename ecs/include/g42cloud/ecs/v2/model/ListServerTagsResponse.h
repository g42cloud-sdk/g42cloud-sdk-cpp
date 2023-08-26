
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ProjectTag.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListServerTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerTagsResponse();
    virtual ~ListServerTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerTagsResponse members


    std::vector<ProjectTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ProjectTag>& value);


protected:
    std::vector<ProjectTag> tags_;
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

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_
