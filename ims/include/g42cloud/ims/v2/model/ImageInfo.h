
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ImageInfo_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ImageInfo_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ImageInfo
    : public ModelBase
{
public:
    ImageInfo();
    virtual ~ImageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageInfo members


    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);


    std::string getDataOrigin() const;
    bool dataOriginIsSet() const;
    void unsetdataOrigin();
    void setDataOrigin(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const std::string& value);


    std::string getImageSourceType() const;
    bool imageSourceTypeIsSet() const;
    void unsetimageSourceType();
    void setImageSourceType(const std::string& value);


    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);


    std::string getIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(const std::string& value);


    std::string getOriginalimagename() const;
    bool originalimagenameIsSet() const;
    void unsetoriginalimagename();
    void setOriginalimagename(const std::string& value);


    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);


    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);


    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);


    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);


    std::string getProductcode() const;
    bool productcodeIsSet() const;
    void unsetproductcode();
    void setProductcode(const std::string& value);


    std::string getSupportDiskintensive() const;
    bool supportDiskintensiveIsSet() const;
    void unsetsupportDiskintensive();
    void setSupportDiskintensive(const std::string& value);


    std::string getSupportHighperformance() const;
    bool supportHighperformanceIsSet() const;
    void unsetsupportHighperformance();
    void setSupportHighperformance(const std::string& value);


    std::string getSupportKvm() const;
    bool supportKvmIsSet() const;
    void unsetsupportKvm();
    void setSupportKvm(const std::string& value);


    std::string getSupportKvmGpuType() const;
    bool supportKvmGpuTypeIsSet() const;
    void unsetsupportKvmGpuType();
    void setSupportKvmGpuType(const std::string& value);


    std::string getSupportKvmInfiniband() const;
    bool supportKvmInfinibandIsSet() const;
    void unsetsupportKvmInfiniband();
    void setSupportKvmInfiniband(const std::string& value);


    std::string getSupportLargememory() const;
    bool supportLargememoryIsSet() const;
    void unsetsupportLargememory();
    void setSupportLargememory(const std::string& value);


    std::string getSupportXen() const;
    bool supportXenIsSet() const;
    void unsetsupportXen();
    void setSupportXen(const std::string& value);


    std::string getSupportXenGpuType() const;
    bool supportXenGpuTypeIsSet() const;
    void unsetsupportXenGpuType();
    void setSupportXenGpuType(const std::string& value);


    std::string getSupportXenHana() const;
    bool supportXenHanaIsSet() const;
    void unsetsupportXenHana();
    void setSupportXenHana(const std::string& value);


    bool isSystemSupportMarket() const;
    bool systemSupportMarketIsSet() const;
    void unsetsystemSupportMarket();
    void setSystemSupportMarket(bool value);


    std::string getChecksum() const;
    bool checksumIsSet() const;
    void unsetchecksum();
    void setChecksum(const std::string& value);


    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    std::string getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);


    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);


    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);


    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


    std::string getSelf() const;
    bool selfIsSet() const;
    void unsetself();
    void setSelf(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


    std::string getVirtualEnvType() const;
    bool virtualEnvTypeIsSet() const;
    void unsetvirtualEnvType();
    void setVirtualEnvType(const std::string& value);


    int32_t getVirtualSize() const;
    bool virtualSizeIsSet() const;
    void unsetvirtualSize();
    void setVirtualSize(int32_t value);


    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);


    std::string getSupportFcInject() const;
    bool supportFcInjectIsSet() const;
    void unsetsupportFcInject();
    void setSupportFcInject(const std::string& value);


    std::string getHwFirmwareType() const;
    bool hwFirmwareTypeIsSet() const;
    void unsethwFirmwareType();
    void setHwFirmwareType(const std::string& value);


    std::string getSupportArm() const;
    bool supportArmIsSet() const;
    void unsetsupportArm();
    void setSupportArm(const std::string& value);


    std::string getMaxRam() const;
    bool maxRamIsSet() const;
    void unsetmaxRam();
    void setMaxRam(const std::string& value);


    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);


    std::string getOsFeatureList() const;
    bool osFeatureListIsSet() const;
    void unsetosFeatureList();
    void setOsFeatureList(const std::string& value);


    std::string getAccountCode() const;
    bool accountCodeIsSet() const;
    void unsetaccountCode();
    void setAccountCode(const std::string& value);


    std::string getHwVifMultiqueueEnabled() const;
    bool hwVifMultiqueueEnabledIsSet() const;
    void unsethwVifMultiqueueEnabled();
    void setHwVifMultiqueueEnabled(const std::string& value);


    std::string getIsOffshelved() const;
    bool isOffshelvedIsSet() const;
    void unsetisOffshelved();
    void setIsOffshelved(const std::string& value);


    std::string getLazyloading() const;
    bool lazyloadingIsSet() const;
    void unsetlazyloading();
    void setLazyloading(const std::string& value);


    std::string getRootOrigin() const;
    bool rootOriginIsSet() const;
    void unsetrootOrigin();
    void setRootOrigin(const std::string& value);


    std::string getSequenceNum() const;
    bool sequenceNumIsSet() const;
    void unsetsequenceNum();
    void setSequenceNum(const std::string& value);


    std::string getActiveAt() const;
    bool activeAtIsSet() const;
    void unsetactiveAt();
    void setActiveAt(const std::string& value);


    std::string getSupportAgentList() const;
    bool supportAgentListIsSet() const;
    void unsetsupportAgentList();
    void setSupportAgentList(const std::string& value);


    std::string getSupportAmd() const;
    bool supportAmdIsSet() const;
    void unsetsupportAmd();
    void setSupportAmd(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string dataOrigin_;
    bool dataOriginIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string imageSize_;
    bool imageSizeIsSet_;
    std::string imageSourceType_;
    bool imageSourceTypeIsSet_;
    std::string imagetype_;
    bool imagetypeIsSet_;
    std::string isregistered_;
    bool isregisteredIsSet_;
    std::string originalimagename_;
    bool originalimagenameIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string productcode_;
    bool productcodeIsSet_;
    std::string supportDiskintensive_;
    bool supportDiskintensiveIsSet_;
    std::string supportHighperformance_;
    bool supportHighperformanceIsSet_;
    std::string supportKvm_;
    bool supportKvmIsSet_;
    std::string supportKvmGpuType_;
    bool supportKvmGpuTypeIsSet_;
    std::string supportKvmInfiniband_;
    bool supportKvmInfinibandIsSet_;
    std::string supportLargememory_;
    bool supportLargememoryIsSet_;
    std::string supportXen_;
    bool supportXenIsSet_;
    std::string supportXenGpuType_;
    bool supportXenGpuTypeIsSet_;
    std::string supportXenHana_;
    bool supportXenHanaIsSet_;
    bool systemSupportMarket_;
    bool systemSupportMarketIsSet_;
    std::string checksum_;
    bool checksumIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string file_;
    bool fileIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string self_;
    bool selfIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string virtualEnvType_;
    bool virtualEnvTypeIsSet_;
    int32_t virtualSize_;
    bool virtualSizeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string supportFcInject_;
    bool supportFcInjectIsSet_;
    std::string hwFirmwareType_;
    bool hwFirmwareTypeIsSet_;
    std::string supportArm_;
    bool supportArmIsSet_;
    std::string maxRam_;
    bool maxRamIsSet_;
    std::string systemCmkid_;
    bool systemCmkidIsSet_;
    std::string osFeatureList_;
    bool osFeatureListIsSet_;
    std::string accountCode_;
    bool accountCodeIsSet_;
    std::string hwVifMultiqueueEnabled_;
    bool hwVifMultiqueueEnabledIsSet_;
    std::string isOffshelved_;
    bool isOffshelvedIsSet_;
    std::string lazyloading_;
    bool lazyloadingIsSet_;
    std::string rootOrigin_;
    bool rootOriginIsSet_;
    std::string sequenceNum_;
    bool sequenceNumIsSet_;
    std::string activeAt_;
    bool activeAtIsSet_;
    std::string supportAgentList_;
    bool supportAgentListIsSet_;
    std::string supportAmd_;
    bool supportAmdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ImageInfo_H_
