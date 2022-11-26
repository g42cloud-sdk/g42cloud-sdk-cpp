
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordResponse_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerId.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchResetServersPasswordResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchResetServersPasswordResponse();
    virtual ~BatchResetServersPasswordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchResetServersPasswordResponse members


    std::vector<ServerId>& getResponse();
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const std::vector<ServerId>& value);


protected:
    std::vector<ServerId> response_;
    bool responseIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordResponse_H_
