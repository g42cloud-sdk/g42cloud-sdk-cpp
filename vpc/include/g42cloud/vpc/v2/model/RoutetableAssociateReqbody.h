
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_RoutetableAssociateReqbody_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_RoutetableAssociateReqbody_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/AsscoiateReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  RoutetableAssociateReqbody
    : public ModelBase
{
public:
    RoutetableAssociateReqbody();
    virtual ~RoutetableAssociateReqbody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RoutetableAssociateReqbody members


    AsscoiateReq getRoutetable() const;
    bool routetableIsSet() const;
    void unsetroutetable();
    void setRoutetable(const AsscoiateReq& value);


protected:
    AsscoiateReq routetable_;
    bool routetableIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_RoutetableAssociateReqbody_H_
