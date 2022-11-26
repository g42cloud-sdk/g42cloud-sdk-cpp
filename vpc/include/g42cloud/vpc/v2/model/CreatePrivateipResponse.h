
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/Privateip.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreatePrivateipResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePrivateipResponse();
    virtual ~CreatePrivateipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrivateipResponse members


    std::vector<Privateip>& getPrivateips();
    bool privateipsIsSet() const;
    void unsetprivateips();
    void setPrivateips(const std::vector<Privateip>& value);


protected:
    std::vector<Privateip> privateips_;
    bool privateipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreatePrivateipResponse_H_
