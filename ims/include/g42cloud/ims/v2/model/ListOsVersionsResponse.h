
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/ListOsVersionsResponseBody.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListOsVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOsVersionsResponse();
    virtual ~ListOsVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOsVersionsResponse members


    std::vector<ListOsVersionsResponseBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ListOsVersionsResponseBody>& value);


protected:
    std::vector<ListOsVersionsResponseBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_
