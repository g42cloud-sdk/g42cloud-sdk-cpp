
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/TagKeyValue.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  CreateWholeImageRequestBody
    : public ModelBase
{
public:
    CreateWholeImageRequestBody();
    virtual ~CreateWholeImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWholeImageRequestBody members


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    std::vector<TagKeyValue>& getImageTags();
    bool imageTagsIsSet() const;
    void unsetimageTags();
    void setImageTags(const std::vector<TagKeyValue>& value);


    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);


    std::string getWholeImageType() const;
    bool wholeImageTypeIsSet() const;
    void unsetwholeImageType();
    void setWholeImageType(const std::string& value);


    int32_t getMaxRam() const;
    bool maxRamIsSet() const;
    void unsetmaxRam();
    void setMaxRam(int32_t value);


    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);


    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<TagKeyValue> imageTags_;
    bool imageTagsIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string wholeImageType_;
    bool wholeImageTypeIsSet_;
    int32_t maxRam_;
    bool maxRamIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_
