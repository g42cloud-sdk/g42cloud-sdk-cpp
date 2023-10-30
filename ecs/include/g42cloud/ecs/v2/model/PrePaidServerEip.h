
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PrePaidServerEipBandwidth.h>
#include <string>
#include <g42cloud/ecs/v2/model/PrePaidServerEipExtendParam.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerEip
    : public ModelBase
{
public:
    PrePaidServerEip();
    virtual ~PrePaidServerEip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidServerEip members


    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);


    PrePaidServerEipBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const PrePaidServerEipBandwidth& value);


    PrePaidServerEipExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PrePaidServerEipExtendParam& value);


protected:
    std::string iptype_;
    bool iptypeIsSet_;
    PrePaidServerEipBandwidth bandwidth_;
    bool bandwidthIsSet_;
    PrePaidServerEipExtendParam extendparam_;
    bool extendparamIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerEip_H_
