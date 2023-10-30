
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/BatchAddOrDeleteTagsRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  BatchAddOrDeleteTagsRequest
    : public ModelBase
{
public:
    BatchAddOrDeleteTagsRequest();
    virtual ~BatchAddOrDeleteTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddOrDeleteTagsRequest members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    BatchAddOrDeleteTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddOrDeleteTagsRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    BatchAddOrDeleteTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddOrDeleteTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddOrDeleteTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_
