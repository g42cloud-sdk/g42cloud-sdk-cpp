
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaKeypairDetail.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaShowKeypairResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaShowKeypairResponse();
    virtual ~NovaShowKeypairResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaShowKeypairResponse members


    NovaKeypairDetail getKeypair() const;
    bool keypairIsSet() const;
    void unsetkeypair();
    void setKeypair(const NovaKeypairDetail& value);


protected:
    NovaKeypairDetail keypair_;
    bool keypairIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairResponse_H_
