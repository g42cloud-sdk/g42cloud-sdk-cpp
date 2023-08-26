
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreatePrivateipOption.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreatePrivateipRequestBody
    : public ModelBase
{
public:
    CreatePrivateipRequestBody();
    virtual ~CreatePrivateipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrivateipRequestBody members


    std::vector<CreatePrivateipOption>& getPrivateips();
    bool privateipsIsSet() const;
    void unsetprivateips();
    void setPrivateips(const std::vector<CreatePrivateipOption>& value);


protected:
    std::vector<CreatePrivateipOption> privateips_;
    bool privateipsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipRequestBody_H_
