
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaKeypairDetail
    : public ModelBase
{
public:
    NovaKeypairDetail();
    virtual ~NovaKeypairDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaKeypairDetail members


    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetfingerprint();
    void setFingerprint(const std::string& value);


    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);


    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);


    utility::datetime getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const utility::datetime& value);


    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string fingerprint_;
    bool fingerprintIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    utility::datetime deletedAt_;
    bool deletedAtIsSet_;
    int32_t id_;
    bool idIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaKeypairDetail_H_
