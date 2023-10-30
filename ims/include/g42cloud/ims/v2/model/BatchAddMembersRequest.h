
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequest_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequest_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/BatchAddMembersRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  BatchAddMembersRequest
    : public ModelBase
{
public:
    BatchAddMembersRequest();
    virtual ~BatchAddMembersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddMembersRequest members


    BatchAddMembersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddMembersRequestBody& value);


protected:
    BatchAddMembersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddMembersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddMembersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequest_H_
