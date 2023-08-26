
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServerGroupsPageInfoResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServerGroupsPageInfoResult_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListServerGroupsPageInfoResult
    : public ModelBase
{
public:
    ListServerGroupsPageInfoResult();
    virtual ~ListServerGroupsPageInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerGroupsPageInfoResult members


    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServerGroupsPageInfoResult_H_
