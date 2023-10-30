
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <vector>
#include <g42cloud/ecs/v2/model/BatchAddServerNicOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchAddServerNicsRequestBody
    : public ModelBase
{
public:
    BatchAddServerNicsRequestBody();
    virtual ~BatchAddServerNicsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddServerNicsRequestBody members


    std::vector<BatchAddServerNicOption>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<BatchAddServerNicOption>& value);


protected:
    std::vector<BatchAddServerNicOption> nics_;
    bool nicsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_
