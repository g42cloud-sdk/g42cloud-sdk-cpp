
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsResponse_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BatchDeleteVolumeTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteVolumeTagsResponse();
    virtual ~BatchDeleteVolumeTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteVolumeTagsResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsResponse_H_
