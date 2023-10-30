#ifndef G42CLOUD_SDK_ECS_V2_EcsMeta_H_
#define G42CLOUD_SDK_ECS_V2_EcsMeta_H_

#include <g42cloud/core/http/HttpRequestDef.h>
#include <g42cloud/ecs/v2/EcsExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Http;

class G42CLOUD_ECS_V2_EXPORT  EcsMeta {
public:
    static HttpRequestDef genRequestDefForAddServerGroupMember();
    static HttpRequestDef genRequestDefForAssociateServerVirtualIp();
    static HttpRequestDef genRequestDefForAttachServerVolume();
    static HttpRequestDef genRequestDefForBatchAddServerNics();
    static HttpRequestDef genRequestDefForBatchAttachSharableVolumes();
    static HttpRequestDef genRequestDefForBatchCreateServerTags();
    static HttpRequestDef genRequestDefForBatchDeleteServerNics();
    static HttpRequestDef genRequestDefForBatchDeleteServerTags();
    static HttpRequestDef genRequestDefForBatchRebootServers();
    static HttpRequestDef genRequestDefForBatchResetServersPassword();
    static HttpRequestDef genRequestDefForBatchStartServers();
    static HttpRequestDef genRequestDefForBatchStopServers();
    static HttpRequestDef genRequestDefForBatchUpdateServersName();
    static HttpRequestDef genRequestDefForChangeServerOsWithCloudInit();
    static HttpRequestDef genRequestDefForChangeServerOsWithoutCloudInit();
    static HttpRequestDef genRequestDefForCreatePostPaidServers();
    static HttpRequestDef genRequestDefForCreateServerGroup();
    static HttpRequestDef genRequestDefForCreateServers();
    static HttpRequestDef genRequestDefForDeleteServerGroup();
    static HttpRequestDef genRequestDefForDeleteServerGroupMember();
    static HttpRequestDef genRequestDefForDeleteServerMetadata();
    static HttpRequestDef genRequestDefForDeleteServerPassword();
    static HttpRequestDef genRequestDefForDeleteServers();
    static HttpRequestDef genRequestDefForDetachServerVolume();
    static HttpRequestDef genRequestDefForDisassociateServerVirtualIp();
    static HttpRequestDef genRequestDefForListFlavors();
    static HttpRequestDef genRequestDefForListResizeFlavors();
    static HttpRequestDef genRequestDefForListServerBlockDevices();
    static HttpRequestDef genRequestDefForListServerGroups();
    static HttpRequestDef genRequestDefForListServerInterfaces();
    static HttpRequestDef genRequestDefForListServerTags();
    static HttpRequestDef genRequestDefForListServersDetails();
    static HttpRequestDef genRequestDefForMigrateServer();
    static HttpRequestDef genRequestDefForNovaAssociateSecurityGroup();
    static HttpRequestDef genRequestDefForNovaAttachInterface();
    static HttpRequestDef genRequestDefForNovaCreateKeypair();
    static HttpRequestDef genRequestDefForNovaCreateServers();
    static HttpRequestDef genRequestDefForNovaDeleteKeypair();
    static HttpRequestDef genRequestDefForNovaDeleteServer();
    static HttpRequestDef genRequestDefForNovaDisassociateSecurityGroup();
    static HttpRequestDef genRequestDefForNovaListAvailabilityZones();
    static HttpRequestDef genRequestDefForNovaListKeypairs();
    static HttpRequestDef genRequestDefForNovaListServerSecurityGroups();
    static HttpRequestDef genRequestDefForNovaListServersDetails();
    static HttpRequestDef genRequestDefForNovaShowKeypair();
    static HttpRequestDef genRequestDefForNovaShowServer();
    static HttpRequestDef genRequestDefForRegisterServerAutoRecovery();
    static HttpRequestDef genRequestDefForRegisterServerMonitor();
    static HttpRequestDef genRequestDefForReinstallServerWithCloudInit();
    static HttpRequestDef genRequestDefForReinstallServerWithoutCloudInit();
    static HttpRequestDef genRequestDefForResetServerPassword();
    static HttpRequestDef genRequestDefForResizePostPaidServer();
    static HttpRequestDef genRequestDefForResizeServer();
    static HttpRequestDef genRequestDefForShowResetPasswordFlag();
    static HttpRequestDef genRequestDefForShowServer();
    static HttpRequestDef genRequestDefForShowServerAutoRecovery();
    static HttpRequestDef genRequestDefForShowServerBlockDevice();
    static HttpRequestDef genRequestDefForShowServerGroup();
    static HttpRequestDef genRequestDefForShowServerLimits();
    static HttpRequestDef genRequestDefForShowServerPassword();
    static HttpRequestDef genRequestDefForShowServerRemoteConsole();
    static HttpRequestDef genRequestDefForShowServerTags();
    static HttpRequestDef genRequestDefForUpdateServer();
    static HttpRequestDef genRequestDefForUpdateServerAutoTerminateTime();
    static HttpRequestDef genRequestDefForUpdateServerMetadata();
    static HttpRequestDef genRequestDefForShowJob();
};

}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_EcsMeta_H_