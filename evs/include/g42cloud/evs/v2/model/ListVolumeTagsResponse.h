
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListVolumeTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumeTagsResponse();
    virtual ~ListVolumeTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumeTagsResponse members


    std::map<std::string, std::vector<std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::vector<std::string>>& value);


protected:
    std::map<std::string, std::vector<std::string>> tags_;
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

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_
