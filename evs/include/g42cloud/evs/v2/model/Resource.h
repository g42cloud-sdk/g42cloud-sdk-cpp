
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_Resource_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_Resource_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <g42cloud/evs/v2/model/VolumeDetailForTag.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  Resource
    : public ModelBase
{
public:
    Resource();
    virtual ~Resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Resource members


    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);


    VolumeDetailForTag getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const VolumeDetailForTag& value);


    std::vector<std::map<std::string, std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::map<std::string, std::string>>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    VolumeDetailForTag resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<std::map<std::string, std::string>> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_Resource_H_
