
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PrePaidServerEip.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerPublicip
    : public ModelBase
{
public:
    PrePaidServerPublicip();
    virtual ~PrePaidServerPublicip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerPublicip members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    PrePaidServerEip getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const PrePaidServerEip& value);


    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    PrePaidServerEip eip_;
    bool eipIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerPublicip_H_
