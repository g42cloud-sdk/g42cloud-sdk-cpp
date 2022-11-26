
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServer_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServer_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PrePaidServerSchedulerHints.h>
#include <g42cloud/ecs/v2/model/PrePaidServerExtendParam.h>
#include <g42cloud/ecs/v2/model/PrePaidServerSecurityGroup.h>
#include <string>
#include <g42cloud/ecs/v2/model/PrePaidServerRootVolume.h>
#include <g42cloud/ecs/v2/model/PrePaidServerTag.h>
#include <map>
#include <g42cloud/ecs/v2/model/PrePaidServerDataVolume.h>
#include <g42cloud/ecs/v2/model/PrePaidServerPublicip.h>
#include <vector>
#include <g42cloud/ecs/v2/model/PrePaidServerNic.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServer
    : public ModelBase
{
public:
    PrePaidServer();
    virtual ~PrePaidServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServer members


    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);


    std::string getImageRef() const;
    bool imageRefIsSet() const;
    void unsetimageRef();
    void setImageRef(const std::string& value);


    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);


    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);


    std::string getVpcid() const;
    bool vpcidIsSet() const;
    void unsetvpcid();
    void setVpcid(const std::string& value);


    std::vector<PrePaidServerNic>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<PrePaidServerNic>& value);


    PrePaidServerPublicip getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PrePaidServerPublicip& value);


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    bool isIsAutoRename() const;
    bool isAutoRenameIsSet() const;
    void unsetisAutoRename();
    void setIsAutoRename(bool value);


    PrePaidServerRootVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const PrePaidServerRootVolume& value);


    std::vector<PrePaidServerDataVolume>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<PrePaidServerDataVolume>& value);


    std::vector<PrePaidServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<PrePaidServerSecurityGroup>& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    bool isBatchCreateInMultiAz() const;
    bool batchCreateInMultiAzIsSet() const;
    void unsetbatchCreateInMultiAz();
    void setBatchCreateInMultiAz(bool value);


    PrePaidServerExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PrePaidServerExtendParam& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    PrePaidServerSchedulerHints getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const PrePaidServerSchedulerHints& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    std::vector<PrePaidServerTag>& getServerTags();
    bool serverTagsIsSet() const;
    void unsetserverTags();
    void setServerTags(const std::vector<PrePaidServerTag>& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;
    std::string imageRef_;
    bool imageRefIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string vpcid_;
    bool vpcidIsSet_;
    std::vector<PrePaidServerNic> nics_;
    bool nicsIsSet_;
    PrePaidServerPublicip publicip_;
    bool publicipIsSet_;
    int32_t count_;
    bool countIsSet_;
    bool isAutoRename_;
    bool isAutoRenameIsSet_;
    PrePaidServerRootVolume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<PrePaidServerDataVolume> dataVolumes_;
    bool dataVolumesIsSet_;
    std::vector<PrePaidServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool batchCreateInMultiAz_;
    bool batchCreateInMultiAzIsSet_;
    PrePaidServerExtendParam extendparam_;
    bool extendparamIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    PrePaidServerSchedulerHints osschedulerHints_;
    bool osschedulerHintsIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::vector<PrePaidServerTag> serverTags_;
    bool serverTagsIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServer_H_
