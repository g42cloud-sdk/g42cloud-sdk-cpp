
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolumeMetadata_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolumeMetadata_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PostPaidServerDataVolumeMetadata
    : public ModelBase
{
public:
    PostPaidServerDataVolumeMetadata();
    virtual ~PostPaidServerDataVolumeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServerDataVolumeMetadata members


    std::string getSystemEncrypted() const;
    bool systemEncryptedIsSet() const;
    void unsetsystemEncrypted();
    void setSystemEncrypted(const std::string& value);


    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);


protected:
    std::string systemEncrypted_;
    bool systemEncryptedIsSet_;
    std::string systemCmkid_;
    bool systemCmkidIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolumeMetadata_H_
