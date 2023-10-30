
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  UpdateServerMetadataRequestBody
    : public ModelBase
{
public:
    UpdateServerMetadataRequestBody();
    virtual ~UpdateServerMetadataRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerMetadataRequestBody members


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_
