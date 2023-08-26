
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaCreateKeypairRequestBody.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateKeypairRequest
    : public ModelBase
{
public:
    NovaCreateKeypairRequest();
    virtual ~NovaCreateKeypairRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateKeypairRequest members


    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


    NovaCreateKeypairRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NovaCreateKeypairRequestBody& value);


protected:
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;
    NovaCreateKeypairRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaCreateKeypairRequest& dereference_from_shared_ptr(std::shared_ptr<NovaCreateKeypairRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequest_H_
