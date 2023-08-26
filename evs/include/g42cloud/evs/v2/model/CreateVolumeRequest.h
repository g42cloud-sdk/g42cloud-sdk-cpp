
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CreateVolumeRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CreateVolumeRequest
    : public ModelBase
{
public:
    CreateVolumeRequest();
    virtual ~CreateVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVolumeRequest members


    CreateVolumeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateVolumeRequestBody& value);


protected:
    CreateVolumeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<CreateVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequest_H_
