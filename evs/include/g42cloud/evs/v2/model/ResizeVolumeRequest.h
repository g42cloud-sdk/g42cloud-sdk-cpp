
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/ResizeVolumeRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ResizeVolumeRequest
    : public ModelBase
{
public:
    ResizeVolumeRequest();
    virtual ~ResizeVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeVolumeRequest members


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    ResizeVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResizeVolumeRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    ResizeVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResizeVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<ResizeVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequest_H_
