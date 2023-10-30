
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/evs/v2/model/DeleteTagsOption.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BatchDeleteVolumeTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteVolumeTagsRequestBody();
    virtual ~BatchDeleteVolumeTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteVolumeTagsRequestBody members


    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


    std::vector<DeleteTagsOption>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteTagsOption>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<DeleteTagsOption> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_
