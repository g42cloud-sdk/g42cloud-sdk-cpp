
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ShowVpcPeeringResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ShowVpcPeeringResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/VpcPeering.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ShowVpcPeeringResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVpcPeeringResponse();
    virtual ~ShowVpcPeeringResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVpcPeeringResponse members


    VpcPeering getPeering() const;
    bool peeringIsSet() const;
    void unsetpeering();
    void setPeering(const VpcPeering& value);


protected:
    VpcPeering peering_;
    bool peeringIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ShowVpcPeeringResponse_H_
