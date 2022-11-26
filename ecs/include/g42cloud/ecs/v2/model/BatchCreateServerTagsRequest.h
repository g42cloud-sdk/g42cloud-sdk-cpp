
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/BatchCreateServerTagsRequestBody.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchCreateServerTagsRequest
    : public ModelBase
{
public:
    BatchCreateServerTagsRequest();
    virtual ~BatchCreateServerTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateServerTagsRequest members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    BatchCreateServerTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateServerTagsRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    BatchCreateServerTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateServerTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateServerTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchCreateServerTagsRequest_H_
