
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaServerNetwork.h>
#include <string>
#include <g42cloud/ecs/v2/model/NovaServerBlockDeviceMapping.h>
#include <g42cloud/ecs/v2/model/NovaServerSecurityGroup.h>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateServersOption
    : public ModelBase
{
public:
    NovaCreateServersOption();
    virtual ~NovaCreateServersOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaCreateServersOption members


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


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);


    std::vector<NovaServerBlockDeviceMapping>& getBlockDeviceMappingV2();
    bool blockDeviceMappingV2IsSet() const;
    void unsetblockDeviceMappingV2();
    void setBlockDeviceMappingV2(const std::vector<NovaServerBlockDeviceMapping>& value);


    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);


    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);


    std::vector<NovaServerNetwork>& getNetworks();
    bool networksIsSet() const;
    void unsetnetworks();
    void setNetworks(const std::vector<NovaServerNetwork>& value);


    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


    bool isReturnReservationId() const;
    bool returnReservationIdIsSet() const;
    void unsetreturnReservationId();
    void setReturnReservationId(bool value);


    int32_t getMinCount() const;
    bool minCountIsSet() const;
    void unsetminCount();
    void setMinCount(int32_t value);


    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);


    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);


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
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;
    std::vector<NovaServerBlockDeviceMapping> blockDeviceMappingV2_;
    bool blockDeviceMappingV2IsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NovaServerNetwork> networks_;
    bool networksIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool returnReservationId_;
    bool returnReservationIdIsSet_;
    int32_t minCount_;
    bool minCountIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_
