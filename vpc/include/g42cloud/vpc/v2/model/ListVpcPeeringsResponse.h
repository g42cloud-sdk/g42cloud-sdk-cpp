
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/VpcPeering.h>
#include <g42cloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListVpcPeeringsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcPeeringsResponse();
    virtual ~ListVpcPeeringsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVpcPeeringsResponse members


    std::vector<VpcPeering>& getPeerings();
    bool peeringsIsSet() const;
    void unsetpeerings();
    void setPeerings(const std::vector<VpcPeering>& value);


    std::vector<NeutronPageLink>& getPeeringsLinks();
    bool peeringsLinksIsSet() const;
    void unsetpeeringsLinks();
    void setPeeringsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<VpcPeering> peerings_;
    bool peeringsIsSet_;
    std::vector<NeutronPageLink> peeringsLinks_;
    bool peeringsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListVpcPeeringsResponse_H_
