
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaSimpleKeypair_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaSimpleKeypair_H_


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
class G42CLOUD_ECS_V2_EXPORT  NovaSimpleKeypair
    : public ModelBase
{
public:
    NovaSimpleKeypair();
    virtual ~NovaSimpleKeypair();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaSimpleKeypair members


    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string fingerprint_;
    bool fingerprintIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaSimpleKeypair_H_
