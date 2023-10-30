
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerTag.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchCreateServerTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateServerTagsRequestBody();
    virtual ~BatchCreateServerTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateServerTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::vector<ServerTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ServerTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<ServerTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequestBody_H_
