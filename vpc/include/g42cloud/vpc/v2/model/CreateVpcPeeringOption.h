
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/VpcInfo.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  CreateVpcPeeringOption
    : public ModelBase
{
public:
    CreateVpcPeeringOption();
    virtual ~CreateVpcPeeringOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVpcPeeringOption members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    VpcInfo getRequestVpcInfo() const;
    bool requestVpcInfoIsSet() const;
    void unsetrequestVpcInfo();
    void setRequestVpcInfo(const VpcInfo& value);


    VpcInfo getAcceptVpcInfo() const;
    bool acceptVpcInfoIsSet() const;
    void unsetacceptVpcInfo();
    void setAcceptVpcInfo(const VpcInfo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    VpcInfo requestVpcInfo_;
    bool requestVpcInfoIsSet_;
    VpcInfo acceptVpcInfo_;
    bool acceptVpcInfoIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_CreateVpcPeeringOption_H_
