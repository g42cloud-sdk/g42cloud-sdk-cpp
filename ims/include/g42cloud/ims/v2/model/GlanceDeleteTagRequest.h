
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteTagRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteTagRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceDeleteTagRequest
    : public ModelBase
{
public:
    GlanceDeleteTagRequest();
    virtual ~GlanceDeleteTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceDeleteTagRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string tag_;
    bool tagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceDeleteTagRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceDeleteTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteTagRequest_H_
