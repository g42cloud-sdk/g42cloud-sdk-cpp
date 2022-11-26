
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/BatchCreateVolumeTagsRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  BatchCreateVolumeTagsRequest
    : public ModelBase
{
public:
    BatchCreateVolumeTagsRequest();
    virtual ~BatchCreateVolumeTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateVolumeTagsRequest members


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    BatchCreateVolumeTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateVolumeTagsRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    BatchCreateVolumeTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateVolumeTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateVolumeTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequest_H_
