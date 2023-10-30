
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesRequest_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesRequest_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ShowNetworkIpAvailabilitiesRequest
    : public ModelBase
{
public:
    ShowNetworkIpAvailabilitiesRequest();
    virtual ~ShowNetworkIpAvailabilitiesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNetworkIpAvailabilitiesRequest members


    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowNetworkIpAvailabilitiesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNetworkIpAvailabilitiesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ShowNetworkIpAvailabilitiesRequest_H_
