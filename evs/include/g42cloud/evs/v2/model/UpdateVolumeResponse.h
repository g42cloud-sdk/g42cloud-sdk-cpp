
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeMetadata.h>
#include <g42cloud/evs/v2/model/Attachment.h>
#include <string>
#include <g42cloud/evs/v2/model/Link.h>
#include <g42cloud/core/utils/Object.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  UpdateVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVolumeResponse();
    virtual ~UpdateVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVolumeResponse members


    std::vector<Attachment>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<Attachment>& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    std::string getBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);


    VolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const VolumeMetadata& value);


    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getOsVolHostAttrhost() const;
    bool osVolHostAttrhostIsSet() const;
    void unsetosVolHostAttrhost();
    void setOsVolHostAttrhost(const std::string& value);


    std::string getOsVolTenantAttrtenantId() const;
    bool osVolTenantAttrtenantIdIsSet() const;
    void unsetosVolTenantAttrtenantId();
    void setOsVolTenantAttrtenantId(const std::string& value);


    std::string getShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


    std::string getSourceVolid() const;
    bool sourceVolidIsSet() const;
    void unsetsourceVolid();
    void setSourceVolid(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    Object getVolumeImageMetadata() const;
    bool volumeImageMetadataIsSet() const;
    void unsetvolumeImageMetadata();
    void setVolumeImageMetadata(const Object& value);


    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getOsVolumeReplicationextendedStatus() const;
    bool osVolumeReplicationextendedStatusIsSet() const;
    void unsetosVolumeReplicationextendedStatus();
    void setOsVolumeReplicationextendedStatus(const std::string& value);


protected:
    std::vector<Attachment> attachments_;
    bool attachmentsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string bootable_;
    bool bootableIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    VolumeMetadata metadata_;
    bool metadataIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string osVolHostAttrhost_;
    bool osVolHostAttrhostIsSet_;
    std::string osVolTenantAttrtenantId_;
    bool osVolTenantAttrtenantIdIsSet_;
    std::string shareable_;
    bool shareableIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string sourceVolid_;
    bool sourceVolidIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object volumeImageMetadata_;
    bool volumeImageMetadataIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string osVolumeReplicationextendedStatus_;
    bool osVolumeReplicationextendedStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_
