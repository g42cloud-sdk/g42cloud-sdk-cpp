
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaServer_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaServerFault.h>
#include <g42cloud/ecs/v2/model/NovaServerFlavor.h>
#include <g42cloud/ecs/v2/model/NovaLink.h>
#include <g42cloud/ecs/v2/model/NovaServerVolume.h>
#include <g42cloud/ecs/v2/model/NovaServerSchedulerHints.h>
#include <string>
#include <g42cloud/ecs/v2/model/NovaServerImage.h>
#include <g42cloud/ecs/v2/model/NovaServerSecurityGroup.h>
#include <map>
#include <vector>
#include <g42cloud/ecs/v2/model/NovaNetwork.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaServer
    : public ModelBase
{
public:
    NovaServer();
    virtual ~NovaServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaServer members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);


    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


    NovaServerFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const NovaServerFlavor& value);


    NovaServerImage getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const NovaServerImage& value);


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);


    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);


    std::map<std::string, std::vector<NovaNetwork>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<NovaNetwork>>& value);


    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);


    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);


    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);


    std::string getOSEXTAZavailabilityZone() const;
    bool oSEXTAZavailabilityZoneIsSet() const;
    void unsetoSEXTAZavailabilityZone();
    void setOSEXTAZavailabilityZone(const std::string& value);


    std::string getOSEXTSRVATTRhost() const;
    bool oSEXTSRVATTRhostIsSet() const;
    void unsetoSEXTSRVATTRhost();
    void setOSEXTSRVATTRhost(const std::string& value);


    std::string getOSEXTSRVATTRhypervisorHostname() const;
    bool oSEXTSRVATTRhypervisorHostnameIsSet() const;
    void unsetoSEXTSRVATTRhypervisorHostname();
    void setOSEXTSRVATTRhypervisorHostname(const std::string& value);


    std::string getOSEXTSRVATTRinstanceName() const;
    bool oSEXTSRVATTRinstanceNameIsSet() const;
    void unsetoSEXTSRVATTRinstanceName();
    void setOSEXTSRVATTRinstanceName(const std::string& value);


    int32_t getOSEXTSTSpowerState() const;
    bool oSEXTSTSpowerStateIsSet() const;
    void unsetoSEXTSTSpowerState();
    void setOSEXTSTSpowerState(int32_t value);


    std::string getOSEXTSTStaskState() const;
    bool oSEXTSTStaskStateIsSet() const;
    void unsetoSEXTSTStaskState();
    void setOSEXTSTStaskState(const std::string& value);


    std::string getOSEXTSTSvmState() const;
    bool oSEXTSTSvmStateIsSet() const;
    void unsetoSEXTSTSvmState();
    void setOSEXTSTSvmState(const std::string& value);


    std::string getOSSRVUSGlaunchedAt() const;
    bool oSSRVUSGlaunchedAtIsSet() const;
    void unsetoSSRVUSGlaunchedAt();
    void setOSSRVUSGlaunchedAt(const std::string& value);


    std::string getOSSRVUSGterminatedAt() const;
    bool oSSRVUSGterminatedAtIsSet() const;
    void unsetoSSRVUSGterminatedAt();
    void setOSSRVUSGterminatedAt(const std::string& value);


    std::vector<NovaServerVolume>& getOsExtendedVolumesvolumesAttached();
    bool osExtendedVolumesvolumesAttachedIsSet() const;
    void unsetosExtendedVolumesvolumesAttached();
    void setOsExtendedVolumesvolumesAttached(const std::vector<NovaServerVolume>& value);


    NovaServerFault getFault() const;
    bool faultIsSet() const;
    void unsetfault();
    void setFault(const NovaServerFault& value);


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


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);


    std::string getAccessIPv4() const;
    bool accessIPv4IsSet() const;
    void unsetaccessIPv4();
    void setAccessIPv4(const std::string& value);


    std::string getAccessIPv6() const;
    bool accessIPv6IsSet() const;
    void unsetaccessIPv6();
    void setAccessIPv6(const std::string& value);


    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);


    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);


    NovaServerSchedulerHints getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const NovaServerSchedulerHints& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    NovaServerFlavor flavor_;
    bool flavorIsSet_;
    NovaServerImage image_;
    bool imageIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    std::map<std::string, std::vector<NovaNetwork>> addresses_;
    bool addressesIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string oSEXTAZavailabilityZone_;
    bool oSEXTAZavailabilityZoneIsSet_;
    std::string oSEXTSRVATTRhost_;
    bool oSEXTSRVATTRhostIsSet_;
    std::string oSEXTSRVATTRhypervisorHostname_;
    bool oSEXTSRVATTRhypervisorHostnameIsSet_;
    std::string oSEXTSRVATTRinstanceName_;
    bool oSEXTSRVATTRinstanceNameIsSet_;
    int32_t oSEXTSTSpowerState_;
    bool oSEXTSTSpowerStateIsSet_;
    std::string oSEXTSTStaskState_;
    bool oSEXTSTStaskStateIsSet_;
    std::string oSEXTSTSvmState_;
    bool oSEXTSTSvmStateIsSet_;
    std::string oSSRVUSGlaunchedAt_;
    bool oSSRVUSGlaunchedAtIsSet_;
    std::string oSSRVUSGterminatedAt_;
    bool oSSRVUSGterminatedAtIsSet_;
    std::vector<NovaServerVolume> osExtendedVolumesvolumesAttached_;
    bool osExtendedVolumesvolumesAttachedIsSet_;
    NovaServerFault fault_;
    bool faultIsSet_;
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
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    NovaServerSchedulerHints osschedulerHints_;
    bool osschedulerHintsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaServer_H_
