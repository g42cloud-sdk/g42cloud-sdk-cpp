
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListVersionsRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListVersionsRequest_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListVersionsRequest
    : public ModelBase
{
public:
    ListVersionsRequest();
    virtual ~ListVersionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVersionsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVersionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListVersionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListVersionsRequest_H_
