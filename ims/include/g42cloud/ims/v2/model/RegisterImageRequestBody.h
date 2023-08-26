
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  RegisterImageRequestBody
    : public ModelBase
{
public:
    RegisterImageRequestBody();
    virtual ~RegisterImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RegisterImageRequestBody members


    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


protected:
    std::string imageUrl_;
    bool imageUrlIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_RegisterImageRequestBody_H_
