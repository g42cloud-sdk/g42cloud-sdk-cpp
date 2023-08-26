
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaShowKeypairRequest
    : public ModelBase
{
public:
    NovaShowKeypairRequest();
    virtual ~NovaShowKeypairRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaShowKeypairRequest members


    std::string getKeypairName() const;
    bool keypairNameIsSet() const;
    void unsetkeypairName();
    void setKeypairName(const std::string& value);


    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


protected:
    std::string keypairName_;
    bool keypairNameIsSet_;
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaShowKeypairRequest& dereference_from_shared_ptr(std::shared_ptr<NovaShowKeypairRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaShowKeypairRequest_H_
