
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaSimpleKeypair.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListKeypairsResult
    : public ModelBase
{
public:
    NovaListKeypairsResult();
    virtual ~NovaListKeypairsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListKeypairsResult members


    NovaSimpleKeypair getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaSimpleKeypair& value);


protected:
    NovaSimpleKeypair keypair_;
    bool keypairIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsResult_H_
