
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/TagKeyValue.h>
#include <string>
#include <g42cloud/ims/v2/model/CreateDataImage.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  CreateImageRequestBody
    : public ModelBase
{
public:
    CreateImageRequestBody();
    virtual ~CreateImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateImageRequestBody members


    std::vector<CreateDataImage>& getDataImages();
    bool dataImagesIsSet() const;
    void unsetdataImages();
    void setDataImages(const std::vector<CreateDataImage>& value);


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


    int32_t getMaxRam() const;
    bool maxRamIsSet() const;
    void unsetmaxRam();
    void setMaxRam(int32_t value);


    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);


    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);


    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);


    bool isIsConfig() const;
    bool isConfigIsSet() const;
    void unsetisConfig();
    void setIsConfig(bool value);


    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


    bool isIsQuickImport() const;
    bool isQuickImportIsSet() const;
    void unsetisQuickImport();
    void setIsQuickImport(bool value);


    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::vector<CreateDataImage> dataImages_;
    bool dataImagesIsSet_;
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
    int32_t maxRam_;
    bool maxRamIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    bool isConfig_;
    bool isConfigIsSet_;
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool isQuickImport_;
    bool isQuickImportIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_
