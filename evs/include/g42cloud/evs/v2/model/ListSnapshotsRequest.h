
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsRequest_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsRequest_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListSnapshotsRequest
    : public ModelBase
{
public:
    ListSnapshotsRequest();
    virtual ~ListSnapshotsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotsRequest members


    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);


    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);


    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSnapshotsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSnapshotsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsRequest_H_
