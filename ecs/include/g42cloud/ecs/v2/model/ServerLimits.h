
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ProjectFlavorLimit.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerLimits
    : public ModelBase
{
public:
    ServerLimits();
    virtual ~ServerLimits();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerLimits members


    int32_t getMaxImageMeta() const;
    bool maxImageMetaIsSet() const;
    void unsetmaxImageMeta();
    void setMaxImageMeta(int32_t value);


    int32_t getMaxPersonality() const;
    bool maxPersonalityIsSet() const;
    void unsetmaxPersonality();
    void setMaxPersonality(int32_t value);


    int32_t getMaxPersonalitySize() const;
    bool maxPersonalitySizeIsSet() const;
    void unsetmaxPersonalitySize();
    void setMaxPersonalitySize(int32_t value);


    int32_t getMaxSecurityGroupRules() const;
    bool maxSecurityGroupRulesIsSet() const;
    void unsetmaxSecurityGroupRules();
    void setMaxSecurityGroupRules(int32_t value);


    int32_t getMaxSecurityGroups() const;
    bool maxSecurityGroupsIsSet() const;
    void unsetmaxSecurityGroups();
    void setMaxSecurityGroups(int32_t value);


    int32_t getMaxServerGroupMembers() const;
    bool maxServerGroupMembersIsSet() const;
    void unsetmaxServerGroupMembers();
    void setMaxServerGroupMembers(int32_t value);


    int32_t getMaxServerGroups() const;
    bool maxServerGroupsIsSet() const;
    void unsetmaxServerGroups();
    void setMaxServerGroups(int32_t value);


    int32_t getMaxServerMeta() const;
    bool maxServerMetaIsSet() const;
    void unsetmaxServerMeta();
    void setMaxServerMeta(int32_t value);


    int32_t getMaxTotalCores() const;
    bool maxTotalCoresIsSet() const;
    void unsetmaxTotalCores();
    void setMaxTotalCores(int32_t value);


    int32_t getMaxTotalFloatingIps() const;
    bool maxTotalFloatingIpsIsSet() const;
    void unsetmaxTotalFloatingIps();
    void setMaxTotalFloatingIps(int32_t value);


    int32_t getMaxTotalInstances() const;
    bool maxTotalInstancesIsSet() const;
    void unsetmaxTotalInstances();
    void setMaxTotalInstances(int32_t value);


    int32_t getMaxTotalKeypairs() const;
    bool maxTotalKeypairsIsSet() const;
    void unsetmaxTotalKeypairs();
    void setMaxTotalKeypairs(int32_t value);


    int32_t getMaxTotalRAMSize() const;
    bool maxTotalRAMSizeIsSet() const;
    void unsetmaxTotalRAMSize();
    void setMaxTotalRAMSize(int32_t value);


    int32_t getTotalCoresUsed() const;
    bool totalCoresUsedIsSet() const;
    void unsettotalCoresUsed();
    void setTotalCoresUsed(int32_t value);


    int32_t getTotalFloatingIpsUsed() const;
    bool totalFloatingIpsUsedIsSet() const;
    void unsettotalFloatingIpsUsed();
    void setTotalFloatingIpsUsed(int32_t value);


    int32_t getTotalInstancesUsed() const;
    bool totalInstancesUsedIsSet() const;
    void unsettotalInstancesUsed();
    void setTotalInstancesUsed(int32_t value);


    int32_t getTotalRAMUsed() const;
    bool totalRAMUsedIsSet() const;
    void unsettotalRAMUsed();
    void setTotalRAMUsed(int32_t value);


    int32_t getTotalSecurityGroupsUsed() const;
    bool totalSecurityGroupsUsedIsSet() const;
    void unsettotalSecurityGroupsUsed();
    void setTotalSecurityGroupsUsed(int32_t value);


    int32_t getTotalServerGroupsUsed() const;
    bool totalServerGroupsUsedIsSet() const;
    void unsettotalServerGroupsUsed();
    void setTotalServerGroupsUsed(int32_t value);


    int32_t getMaxTotalSpotInstances() const;
    bool maxTotalSpotInstancesIsSet() const;
    void unsetmaxTotalSpotInstances();
    void setMaxTotalSpotInstances(int32_t value);


    int32_t getMaxTotalSpotCores() const;
    bool maxTotalSpotCoresIsSet() const;
    void unsetmaxTotalSpotCores();
    void setMaxTotalSpotCores(int32_t value);


    int32_t getMaxTotalSpotRAMSize() const;
    bool maxTotalSpotRAMSizeIsSet() const;
    void unsetmaxTotalSpotRAMSize();
    void setMaxTotalSpotRAMSize(int32_t value);


    int32_t getTotalSpotInstancesUsed() const;
    bool totalSpotInstancesUsedIsSet() const;
    void unsettotalSpotInstancesUsed();
    void setTotalSpotInstancesUsed(int32_t value);


    int32_t getTotalSpotCoresUsed() const;
    bool totalSpotCoresUsedIsSet() const;
    void unsettotalSpotCoresUsed();
    void setTotalSpotCoresUsed(int32_t value);


    int32_t getTotalSpotRAMUsed() const;
    bool totalSpotRAMUsedIsSet() const;
    void unsettotalSpotRAMUsed();
    void setTotalSpotRAMUsed(int32_t value);


    std::vector<ProjectFlavorLimit>& getLimitByFlavor();
    bool limitByFlavorIsSet() const;
    void unsetlimitByFlavor();
    void setLimitByFlavor(const std::vector<ProjectFlavorLimit>& value);


protected:
    int32_t maxImageMeta_;
    bool maxImageMetaIsSet_;
    int32_t maxPersonality_;
    bool maxPersonalityIsSet_;
    int32_t maxPersonalitySize_;
    bool maxPersonalitySizeIsSet_;
    int32_t maxSecurityGroupRules_;
    bool maxSecurityGroupRulesIsSet_;
    int32_t maxSecurityGroups_;
    bool maxSecurityGroupsIsSet_;
    int32_t maxServerGroupMembers_;
    bool maxServerGroupMembersIsSet_;
    int32_t maxServerGroups_;
    bool maxServerGroupsIsSet_;
    int32_t maxServerMeta_;
    bool maxServerMetaIsSet_;
    int32_t maxTotalCores_;
    bool maxTotalCoresIsSet_;
    int32_t maxTotalFloatingIps_;
    bool maxTotalFloatingIpsIsSet_;
    int32_t maxTotalInstances_;
    bool maxTotalInstancesIsSet_;
    int32_t maxTotalKeypairs_;
    bool maxTotalKeypairsIsSet_;
    int32_t maxTotalRAMSize_;
    bool maxTotalRAMSizeIsSet_;
    int32_t totalCoresUsed_;
    bool totalCoresUsedIsSet_;
    int32_t totalFloatingIpsUsed_;
    bool totalFloatingIpsUsedIsSet_;
    int32_t totalInstancesUsed_;
    bool totalInstancesUsedIsSet_;
    int32_t totalRAMUsed_;
    bool totalRAMUsedIsSet_;
    int32_t totalSecurityGroupsUsed_;
    bool totalSecurityGroupsUsedIsSet_;
    int32_t totalServerGroupsUsed_;
    bool totalServerGroupsUsedIsSet_;
    int32_t maxTotalSpotInstances_;
    bool maxTotalSpotInstancesIsSet_;
    int32_t maxTotalSpotCores_;
    bool maxTotalSpotCoresIsSet_;
    int32_t maxTotalSpotRAMSize_;
    bool maxTotalSpotRAMSizeIsSet_;
    int32_t totalSpotInstancesUsed_;
    bool totalSpotInstancesUsedIsSet_;
    int32_t totalSpotCoresUsed_;
    bool totalSpotCoresUsedIsSet_;
    int32_t totalSpotRAMUsed_;
    bool totalSpotRAMUsedIsSet_;
    std::vector<ProjectFlavorLimit> limitByFlavor_;
    bool limitByFlavorIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerLimits_H_
