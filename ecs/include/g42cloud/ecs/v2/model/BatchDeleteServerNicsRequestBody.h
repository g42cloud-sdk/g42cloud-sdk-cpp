
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/BatchDeleteServerNicOption.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchDeleteServerNicsRequestBody
    : public ModelBase
{
public:
    BatchDeleteServerNicsRequestBody();
    virtual ~BatchDeleteServerNicsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteServerNicsRequestBody members


    std::vector<BatchDeleteServerNicOption>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<BatchDeleteServerNicOption>& value);


protected:
    std::vector<BatchDeleteServerNicOption> nics_;
    bool nicsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_
