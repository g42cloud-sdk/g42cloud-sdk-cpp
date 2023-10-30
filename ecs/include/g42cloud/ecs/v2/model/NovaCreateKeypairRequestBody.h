
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaCreateKeypairOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateKeypairRequestBody
    : public ModelBase
{
public:
    NovaCreateKeypairRequestBody();
    virtual ~NovaCreateKeypairRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaCreateKeypairRequestBody members


    NovaCreateKeypairOption getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaCreateKeypairOption& value);


protected:
    NovaCreateKeypairOption keypair_;
    bool keypairIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateKeypairRequestBody_H_
