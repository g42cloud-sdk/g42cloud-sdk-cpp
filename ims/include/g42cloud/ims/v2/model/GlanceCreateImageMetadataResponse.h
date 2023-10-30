
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/core/utils/Object.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceCreateImageMetadataResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceCreateImageMetadataResponse();
    virtual ~GlanceCreateImageMetadataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceCreateImageMetadataResponse members


    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);


    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);


    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);


    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


    std::string getSelf() const;
    bool selfIsSet() const;
    void unsetself();
    void setSelf(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const std::string& value);


    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


    std::string getImageSourceType() const;
    bool imageSourceTypeIsSet() const;
    void unsetimageSourceType();
    void setImageSourceType(const std::string& value);


    std::string getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const std::string& value);


    std::string getIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(const std::string& value);


    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);


    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);


    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);


    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);


    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);


    std::string getVirtualEnvType() const;
    bool virtualEnvTypeIsSet() const;
    void unsetvirtualEnvType();
    void setVirtualEnvType(const std::string& value);


    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);


    int32_t getVirtualSize() const;
    bool virtualSizeIsSet() const;
    void unsetvirtualSize();
    void setVirtualSize(int32_t value);


    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);


    std::string getRootOrigin() const;
    bool rootOriginIsSet() const;
    void unsetrootOrigin();
    void setRootOrigin(const std::string& value);


    std::string getChecksum() const;
    bool checksumIsSet() const;
    void unsetchecksum();
    void setChecksum(const std::string& value);


    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


protected:
    std::string visibility_;
    bool visibilityIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string self_;
    bool selfIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string file_;
    bool fileIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string imageSourceType_;
    bool imageSourceTypeIsSet_;
    std::string imageSize_;
    bool imageSizeIsSet_;
    std::string isregistered_;
    bool isregisteredIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string imagetype_;
    bool imagetypeIsSet_;
    std::string virtualEnvType_;
    bool virtualEnvTypeIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    int32_t virtualSize_;
    bool virtualSizeIsSet_;
    Object properties_;
    bool propertiesIsSet_;
    std::string rootOrigin_;
    bool rootOriginIsSet_;
    std::string checksum_;
    bool checksumIsSet_;
    int64_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_
