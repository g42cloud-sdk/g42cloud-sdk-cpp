
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/QuickImportImageByFileRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ImportImageQuickRequest
    : public ModelBase
{
public:
    ImportImageQuickRequest();
    virtual ~ImportImageQuickRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportImageQuickRequest members


    QuickImportImageByFileRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QuickImportImageByFileRequestBody& value);


protected:
    QuickImportImageByFileRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ImportImageQuickRequest& dereference_from_shared_ptr(std::shared_ptr<ImportImageQuickRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ImportImageQuickRequest_H_
