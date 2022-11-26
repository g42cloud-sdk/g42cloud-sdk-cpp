
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerImage.h>
#include <g42cloud/ecs/v2/model/ServerSecurityGroup.h>
#include <g42cloud/ecs/v2/model/ServerExtendVolumeAttachment.h>
#include <string>
#include <g42cloud/ecs/v2/model/ServerSystemTag.h>
#include <g42cloud/ecs/v2/model/ServerFault.h>
#include <vector>
#include <g42cloud/ecs/v2/model/CpuOptions.h>
#include <g42cloud/ecs/v2/model/ServerFlavor.h>
#include <g42cloud/ecs/v2/model/ServerAddress.h>
#include <g42cloud/ecs/v2/model/Hypervisor.h>
#include <map>
#include <g42cloud/ecs/v2/model/ServerSchedulerHints.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerDetail
    : public ModelBase
{
public:
    ServerDetail();
    virtual ~ServerDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerDetail members


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);


    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);


    std::string getOSEXTSRVATTRhost() const;
    bool oSEXTSRVATTRhostIsSet() const;
    void unsetoSEXTSRVATTRhost();
    void setOSEXTSRVATTRhost(const std::string& value);


    std::map<std::string, std::vector<ServerAddress>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<ServerAddress>>& value);


    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);


    ServerImage getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const ServerImage& value);


    std::string getOSEXTSTStaskState() const;
    bool oSEXTSTStaskStateIsSet() const;
    void unsetoSEXTSTStaskState();
    void setOSEXTSTStaskState(const std::string& value);


    std::string getOSEXTSTSvmState() const;
    bool oSEXTSTSvmStateIsSet() const;
    void unsetoSEXTSTSvmState();
    void setOSEXTSTSvmState(const std::string& value);


    std::string getOSEXTSRVATTRinstanceName() const;
    bool oSEXTSRVATTRinstanceNameIsSet() const;
    void unsetoSEXTSRVATTRinstanceName();
    void setOSEXTSRVATTRinstanceName(const std::string& value);


    std::string getOSEXTSRVATTRhypervisorHostname() const;
    bool oSEXTSRVATTRhypervisorHostnameIsSet() const;
    void unsetoSEXTSRVATTRhypervisorHostname();
    void setOSEXTSRVATTRhypervisorHostname(const std::string& value);


    ServerFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const ServerFlavor& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<ServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<ServerSecurityGroup>& value);


    std::string getOSEXTAZavailabilityZone() const;
    bool oSEXTAZavailabilityZoneIsSet() const;
    void unsetoSEXTAZavailabilityZone();
    void setOSEXTAZavailabilityZone(const std::string& value);


    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);


    std::string getAccessIPv4() const;
    bool accessIPv4IsSet() const;
    void unsetaccessIPv4();
    void setAccessIPv4(const std::string& value);


    std::string getAccessIPv6() const;
    bool accessIPv6IsSet() const;
    void unsetaccessIPv6();
    void setAccessIPv6(const std::string& value);


    ServerFault getFault() const;
    bool faultIsSet() const;
    void unsetfault();
    void setFault(const ServerFault& value);


    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);


    int32_t getOSEXTSTSpowerState() const;
    bool oSEXTSTSpowerStateIsSet() const;
    void unsetoSEXTSTSpowerState();
    void setOSEXTSTSpowerState(int32_t value);


    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::string getOSSRVUSGlaunchedAt() const;
    bool oSSRVUSGlaunchedAtIsSet() const;
    void unsetoSSRVUSGlaunchedAt();
    void setOSSRVUSGlaunchedAt(const std::string& value);


    std::string getOSSRVUSGterminatedAt() const;
    bool oSSRVUSGterminatedAtIsSet() const;
    void unsetoSSRVUSGterminatedAt();
    void setOSSRVUSGterminatedAt(const std::string& value);


    std::vector<ServerExtendVolumeAttachment>& getOsExtendedVolumesvolumesAttached();
    bool osExtendedVolumesvolumesAttachedIsSet() const;
    void unsetosExtendedVolumesvolumesAttached();
    void setOsExtendedVolumesvolumesAttached(const std::vector<ServerExtendVolumeAttachment>& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getHostStatus() const;
    bool hostStatusIsSet() const;
    void unsethostStatus();
    void setHostStatus(const std::string& value);


    std::string getOSEXTSRVATTRhostname() const;
    bool oSEXTSRVATTRhostnameIsSet() const;
    void unsetoSEXTSRVATTRhostname();
    void setOSEXTSRVATTRhostname(const std::string& value);


    std::string getOSEXTSRVATTRreservationId() const;
    bool oSEXTSRVATTRreservationIdIsSet() const;
    void unsetoSEXTSRVATTRreservationId();
    void setOSEXTSRVATTRreservationId(const std::string& value);


    int32_t getOSEXTSRVATTRlaunchIndex() const;
    bool oSEXTSRVATTRlaunchIndexIsSet() const;
    void unsetoSEXTSRVATTRlaunchIndex();
    void setOSEXTSRVATTRlaunchIndex(int32_t value);


    std::string getOSEXTSRVATTRkernelId() const;
    bool oSEXTSRVATTRkernelIdIsSet() const;
    void unsetoSEXTSRVATTRkernelId();
    void setOSEXTSRVATTRkernelId(const std::string& value);


    std::string getOSEXTSRVATTRramdiskId() const;
    bool oSEXTSRVATTRramdiskIdIsSet() const;
    void unsetoSEXTSRVATTRramdiskId();
    void setOSEXTSRVATTRramdiskId(const std::string& value);


    std::string getOSEXTSRVATTRrootDeviceName() const;
    bool oSEXTSRVATTRrootDeviceNameIsSet() const;
    void unsetoSEXTSRVATTRrootDeviceName();
    void setOSEXTSRVATTRrootDeviceName(const std::string& value);


    std::string getOSEXTSRVATTRuserData() const;
    bool oSEXTSRVATTRuserDataIsSet() const;
    void unsetoSEXTSRVATTRuserData();
    void setOSEXTSRVATTRuserData(const std::string& value);


    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    ServerSchedulerHints getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const ServerSchedulerHints& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    std::vector<ServerSystemTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ServerSystemTag>& value);


    CpuOptions getCpuOptions() const;
    bool cpuOptionsIsSet() const;
    void unsetcpuOptions();
    void setCpuOptions(const CpuOptions& value);


    Hypervisor getHypervisor() const;
    bool hypervisorIsSet() const;
    void unsethypervisor();
    void setHypervisor(const Hypervisor& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    std::string oSEXTSRVATTRhost_;
    bool oSEXTSRVATTRhostIsSet_;
    std::map<std::string, std::vector<ServerAddress>> addresses_;
    bool addressesIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    ServerImage image_;
    bool imageIsSet_;
    std::string oSEXTSTStaskState_;
    bool oSEXTSTStaskStateIsSet_;
    std::string oSEXTSTSvmState_;
    bool oSEXTSTSvmStateIsSet_;
    std::string oSEXTSRVATTRinstanceName_;
    bool oSEXTSRVATTRinstanceNameIsSet_;
    std::string oSEXTSRVATTRhypervisorHostname_;
    bool oSEXTSRVATTRhypervisorHostnameIsSet_;
    ServerFlavor flavor_;
    bool flavorIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<ServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string oSEXTAZavailabilityZone_;
    bool oSEXTAZavailabilityZoneIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    ServerFault fault_;
    bool faultIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    int32_t oSEXTSTSpowerState_;
    bool oSEXTSTSpowerStateIsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string oSSRVUSGlaunchedAt_;
    bool oSSRVUSGlaunchedAtIsSet_;
    std::string oSSRVUSGterminatedAt_;
    bool oSSRVUSGterminatedAtIsSet_;
    std::vector<ServerExtendVolumeAttachment> osExtendedVolumesvolumesAttached_;
    bool osExtendedVolumesvolumesAttachedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string hostStatus_;
    bool hostStatusIsSet_;
    std::string oSEXTSRVATTRhostname_;
    bool oSEXTSRVATTRhostnameIsSet_;
    std::string oSEXTSRVATTRreservationId_;
    bool oSEXTSRVATTRreservationIdIsSet_;
    int32_t oSEXTSRVATTRlaunchIndex_;
    bool oSEXTSRVATTRlaunchIndexIsSet_;
    std::string oSEXTSRVATTRkernelId_;
    bool oSEXTSRVATTRkernelIdIsSet_;
    std::string oSEXTSRVATTRramdiskId_;
    bool oSEXTSRVATTRramdiskIdIsSet_;
    std::string oSEXTSRVATTRrootDeviceName_;
    bool oSEXTSRVATTRrootDeviceNameIsSet_;
    std::string oSEXTSRVATTRuserData_;
    bool oSEXTSRVATTRuserDataIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    ServerSchedulerHints osschedulerHints_;
    bool osschedulerHintsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<ServerSystemTag> sysTags_;
    bool sysTagsIsSet_;
    CpuOptions cpuOptions_;
    bool cpuOptionsIsSet_;
    Hypervisor hypervisor_;
    bool hypervisorIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerDetail_H_
