
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/UpdatePortOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  UpdatePortRequestBody
    : public ModelBase
{
public:
    UpdatePortRequestBody();
    virtual ~UpdatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePortRequestBody members


    UpdatePortOption getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const UpdatePortOption& value);


protected:
    UpdatePortOption port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_
