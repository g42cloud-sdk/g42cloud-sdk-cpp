
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequest_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/UpdateVolumeRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  UpdateVolumeRequest
    : public ModelBase
{
public:
    UpdateVolumeRequest();
    virtual ~UpdateVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVolumeRequest members


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    UpdateVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateVolumeRequestBody& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    UpdateVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeRequest_H_
