
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/Tag.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BatchCreateVolumeTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateVolumeTagsRequestBody();
    virtual ~BatchCreateVolumeTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateVolumeTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_
