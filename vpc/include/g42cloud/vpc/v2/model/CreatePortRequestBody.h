
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/CreatePortOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreatePortRequestBody
    : public ModelBase
{
public:
    CreatePortRequestBody();
    virtual ~CreatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePortRequestBody members


    CreatePortOption getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const CreatePortOption& value);


protected:
    CreatePortOption port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_
