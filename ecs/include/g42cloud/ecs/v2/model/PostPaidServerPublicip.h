
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/PostPaidServerEip.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PostPaidServerPublicip
    : public ModelBase
{
public:
    PostPaidServerPublicip();
    virtual ~PostPaidServerPublicip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerPublicip members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    PostPaidServerEip getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const PostPaidServerEip& value);


    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    PostPaidServerEip eip_;
    bool eipIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerPublicip_H_
