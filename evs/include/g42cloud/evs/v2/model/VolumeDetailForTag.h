
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_VolumeDetailForTag_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_VolumeDetailForTag_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeMetadata.h>
#include <g42cloud/evs/v2/model/Attachment.h>
#include <string>
#include <g42cloud/evs/v2/model/Link.h>
#include <g42cloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  VolumeDetailForTag
    : public ModelBase
{
public:
    VolumeDetailForTag();
    virtual ~VolumeDetailForTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeDetailForTag members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::vector<Attachment>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<Attachment>& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    std::string getOsVolHostAttrhost() const;
    bool osVolHostAttrhostIsSet() const;
    void unsetosVolHostAttrhost();
    void setOsVolHostAttrhost(const std::string& value);


    std::string getSourceVolid() const;
    bool sourceVolidIsSet() const;
    void unsetsourceVolid();
    void setSourceVolid(const std::string& value);


    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getOsVolTenantAttrtenantId() const;
    bool osVolTenantAttrtenantIdIsSet() const;
    void unsetosVolTenantAttrtenantId();
    void setOsVolTenantAttrtenantId(const std::string& value);


    std::map<std::string, Object>& getVolumeImageMetadata();
    bool volumeImageMetadataIsSet() const;
    void unsetvolumeImageMetadata();
    void setVolumeImageMetadata(const std::map<std::string, Object>& value);


    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getConsistencygroupId() const;
    bool consistencygroupIdIsSet() const;
    void unsetconsistencygroupId();
    void setConsistencygroupId(const std::string& value);


    std::string getBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(const std::string& value);


    VolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const VolumeMetadata& value);


    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


    bool isEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(bool value);


    std::string getReplicationStatus() const;
    bool replicationStatusIsSet() const;
    void unsetreplicationStatus();
    void setReplicationStatus(const std::string& value);


    std::string getOsVolumeReplicationextendedStatus() const;
    bool osVolumeReplicationextendedStatusIsSet() const;
    void unsetosVolumeReplicationextendedStatus();
    void setOsVolumeReplicationextendedStatus(const std::string& value);


    std::string getOsVolMigStatusAttrmigstat() const;
    bool osVolMigStatusAttrmigstatIsSet() const;
    void unsetosVolMigStatusAttrmigstat();
    void setOsVolMigStatusAttrmigstat(const std::string& value);


    std::string getOsVolMigStatusAttrnameId() const;
    bool osVolMigStatusAttrnameIdIsSet() const;
    void unsetosVolMigStatusAttrnameId();
    void setOsVolMigStatusAttrnameId(const std::string& value);


    bool isShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(bool value);


    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);


    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);


    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);


    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);


    std::string getWwn() const;
    bool wwnIsSet() const;
    void unsetwwn();
    void setWwn(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<Attachment> attachments_;
    bool attachmentsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string osVolHostAttrhost_;
    bool osVolHostAttrhostIsSet_;
    std::string sourceVolid_;
    bool sourceVolidIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string osVolTenantAttrtenantId_;
    bool osVolTenantAttrtenantIdIsSet_;
    std::map<std::string, Object> volumeImageMetadata_;
    bool volumeImageMetadataIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string consistencygroupId_;
    bool consistencygroupIdIsSet_;
    std::string bootable_;
    bool bootableIsSet_;
    VolumeMetadata metadata_;
    bool metadataIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool encrypted_;
    bool encryptedIsSet_;
    std::string replicationStatus_;
    bool replicationStatusIsSet_;
    std::string osVolumeReplicationextendedStatus_;
    bool osVolumeReplicationextendedStatusIsSet_;
    std::string osVolMigStatusAttrmigstat_;
    bool osVolMigStatusAttrmigstatIsSet_;
    std::string osVolMigStatusAttrnameId_;
    bool osVolMigStatusAttrnameIdIsSet_;
    bool shareable_;
    bool shareableIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string wwn_;
    bool wwnIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_VolumeDetailForTag_H_
