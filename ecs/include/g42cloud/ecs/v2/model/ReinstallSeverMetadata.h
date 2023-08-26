
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ReinstallSeverMetadata_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ReinstallSeverMetadata_H_

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
class G42CLOUD_ECS_V2_EXPORT  ReinstallSeverMetadata
    : public ModelBase
{
public:
    ReinstallSeverMetadata();
    virtual ~ReinstallSeverMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReinstallSeverMetadata members


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


protected:
    std::string userData_;
    bool userDataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ReinstallSeverMetadata_H_
