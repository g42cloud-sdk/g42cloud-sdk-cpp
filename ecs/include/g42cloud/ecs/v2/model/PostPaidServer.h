
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PostPaidServerExtendParam.h>
#include <g42cloud/ecs/v2/model/PostPaidServerPublicip.h>
#include <g42cloud/ecs/v2/model/PostPaidServerDataVolume.h>
#include <g42cloud/ecs/v2/model/PostPaidServerSchedulerHints.h>
#include <string>
#include <g42cloud/ecs/v2/model/PostPaidServerNic.h>
#include <g42cloud/ecs/v2/model/PostPaidServerRootVolume.h>
#include <map>
#include <vector>
#include <g42cloud/ecs/v2/model/PostPaidServerTag.h>
#include <g42cloud/ecs/v2/model/PostPaidServerSecurityGroup.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PostPaidServer
    : public ModelBase
{
public:
    PostPaidServer();
    virtual ~PostPaidServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServer members


    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);


    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    bool isBatchCreateInMultiAz() const;
    bool batchCreateInMultiAzIsSet() const;
    void unsetbatchCreateInMultiAz();
    void setBatchCreateInMultiAz(bool value);


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    std::vector<PostPaidServerDataVolume>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<PostPaidServerDataVolume>& value);


    PostPaidServerExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PostPaidServerExtendParam& value);


    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);


    std::string getImageRef() const;
    bool imageRefIsSet() const;
    void unsetimageRef();
    void setImageRef(const std::string& value);


    bool isIsAutoRename() const;
    bool isAutoRenameIsSet() const;
    void unsetisAutoRename();
    void setIsAutoRename(bool value);


    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::vector<PostPaidServerNic>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<PostPaidServerNic>& value);


    PostPaidServerSchedulerHints getOsschedulerHints() const;
    bool osschedulerHintsIsSet() const;
    void unsetosschedulerHints();
    void setOsschedulerHints(const PostPaidServerSchedulerHints& value);


    PostPaidServerPublicip getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PostPaidServerPublicip& value);


    PostPaidServerRootVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const PostPaidServerRootVolume& value);


    std::vector<PostPaidServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<PostPaidServerSecurityGroup>& value);


    std::vector<PostPaidServerTag>& getServerTags();
    bool serverTagsIsSet() const;
    void unsetserverTags();
    void setServerTags(const std::vector<PostPaidServerTag>& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::string getVpcid() const;
    bool vpcidIsSet() const;
    void unsetvpcid();
    void setVpcid(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool batchCreateInMultiAz_;
    bool batchCreateInMultiAzIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<PostPaidServerDataVolume> dataVolumes_;
    bool dataVolumesIsSet_;
    PostPaidServerExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string imageRef_;
    bool imageRefIsSet_;
    bool isAutoRename_;
    bool isAutoRenameIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<PostPaidServerNic> nics_;
    bool nicsIsSet_;
    PostPaidServerSchedulerHints osschedulerHints_;
    bool osschedulerHintsIsSet_;
    PostPaidServerPublicip publicip_;
    bool publicipIsSet_;
    PostPaidServerRootVolume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<PostPaidServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<PostPaidServerTag> serverTags_;
    bool serverTagsIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string vpcid_;
    bool vpcidIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_
