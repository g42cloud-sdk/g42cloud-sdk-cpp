
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_AddImageTagRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_AddImageTagRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/AddImageTagRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  AddImageTagRequest
    : public ModelBase
{
public:
    AddImageTagRequest();
    virtual ~AddImageTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddImageTagRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    AddImageTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddImageTagRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    AddImageTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddImageTagRequest& dereference_from_shared_ptr(std::shared_ptr<AddImageTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_AddImageTagRequest_H_
