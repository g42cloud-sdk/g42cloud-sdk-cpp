
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/core/utils/Object.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  SnapshotDetails
    : public ModelBase
{
public:
    SnapshotDetails();
    virtual ~SnapshotDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SnapshotDetails members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


    Object getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Object& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getOsExtendedSnapshotAttributesprojectId() const;
    bool osExtendedSnapshotAttributesprojectIdIsSet() const;
    void unsetosExtendedSnapshotAttributesprojectId();
    void setOsExtendedSnapshotAttributesprojectId(const std::string& value);


    std::string getOsExtendedSnapshotAttributesprogress() const;
    bool osExtendedSnapshotAttributesprogressIsSet() const;
    void unsetosExtendedSnapshotAttributesprogress();
    void setOsExtendedSnapshotAttributesprogress(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    Object metadata_;
    bool metadataIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string osExtendedSnapshotAttributesprojectId_;
    bool osExtendedSnapshotAttributesprojectIdIsSet_;
    std::string osExtendedSnapshotAttributesprogress_;
    bool osExtendedSnapshotAttributesprogressIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_
