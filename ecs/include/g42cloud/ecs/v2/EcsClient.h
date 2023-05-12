#ifndef G42CLOUD_SDK_ECS_V2_EcsClient_H_
#define G42CLOUD_SDK_ECS_V2_EcsClient_H_

#include <g42cloud/ecs/v2/EcsExport.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/core/ClientBuilder.h>


#include <g42cloud/ecs/v2/model/AddServerGroupMemberRequest.h>
#include <g42cloud/ecs/v2/model/AddServerGroupMemberRequestBody.h>
#include <g42cloud/ecs/v2/model/AddServerGroupMemberResponse.h>
#include <g42cloud/ecs/v2/model/AssociateServerVirtualIpRequest.h>
#include <g42cloud/ecs/v2/model/AssociateServerVirtualIpRequestBody.h>
#include <g42cloud/ecs/v2/model/AssociateServerVirtualIpResponse.h>
#include <g42cloud/ecs/v2/model/AttachServerVolumeRequest.h>
#include <g42cloud/ecs/v2/model/AttachServerVolumeRequestBody.h>
#include <g42cloud/ecs/v2/model/AttachServerVolumeResponse.h>
#include <g42cloud/ecs/v2/model/BatchAddServerNicsRequest.h>
#include <g42cloud/ecs/v2/model/BatchAddServerNicsRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchAddServerNicsResponse.h>
#include <g42cloud/ecs/v2/model/BatchAttachSharableVolumesRequest.h>
#include <g42cloud/ecs/v2/model/BatchAttachSharableVolumesRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchAttachSharableVolumesResponse.h>
#include <g42cloud/ecs/v2/model/BatchCreateServerTagsRequest.h>
#include <g42cloud/ecs/v2/model/BatchCreateServerTagsRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchCreateServerTagsResponse.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerNicsRequest.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerNicsRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerNicsResponse.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerTagsRequest.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerTagsRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchDeleteServerTagsResponse.h>
#include <g42cloud/ecs/v2/model/BatchRebootServersRequest.h>
#include <g42cloud/ecs/v2/model/BatchRebootServersRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchRebootServersResponse.h>
#include <g42cloud/ecs/v2/model/BatchResetServersPasswordRequest.h>
#include <g42cloud/ecs/v2/model/BatchResetServersPasswordRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchResetServersPasswordResponse.h>
#include <g42cloud/ecs/v2/model/BatchStartServersRequest.h>
#include <g42cloud/ecs/v2/model/BatchStartServersRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchStartServersResponse.h>
#include <g42cloud/ecs/v2/model/BatchStopServersRequest.h>
#include <g42cloud/ecs/v2/model/BatchStopServersRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchStopServersResponse.h>
#include <g42cloud/ecs/v2/model/BatchUpdateServersNameRequest.h>
#include <g42cloud/ecs/v2/model/BatchUpdateServersNameRequestBody.h>
#include <g42cloud/ecs/v2/model/BatchUpdateServersNameResponse.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithCloudInitRequest.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithCloudInitRequestBody.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithCloudInitResponse.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequest.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequestBody.h>
#include <g42cloud/ecs/v2/model/ChangeServerOsWithoutCloudInitResponse.h>
#include <g42cloud/ecs/v2/model/CreatePostPaidServersRequest.h>
#include <g42cloud/ecs/v2/model/CreatePostPaidServersRequestBody.h>
#include <g42cloud/ecs/v2/model/CreatePostPaidServersResponse.h>
#include <g42cloud/ecs/v2/model/CreateServerGroupRequest.h>
#include <g42cloud/ecs/v2/model/CreateServerGroupRequestBody.h>
#include <g42cloud/ecs/v2/model/CreateServerGroupResponse.h>
#include <g42cloud/ecs/v2/model/CreateServersRequest.h>
#include <g42cloud/ecs/v2/model/CreateServersRequestBody.h>
#include <g42cloud/ecs/v2/model/CreateServersResponse.h>
#include <g42cloud/ecs/v2/model/DeleteServerGroupMemberRequest.h>
#include <g42cloud/ecs/v2/model/DeleteServerGroupMemberRequestBody.h>
#include <g42cloud/ecs/v2/model/DeleteServerGroupMemberResponse.h>
#include <g42cloud/ecs/v2/model/DeleteServerGroupRequest.h>
#include <g42cloud/ecs/v2/model/DeleteServerGroupResponse.h>
#include <g42cloud/ecs/v2/model/DeleteServerMetadataRequest.h>
#include <g42cloud/ecs/v2/model/DeleteServerMetadataResponse.h>
#include <g42cloud/ecs/v2/model/DeleteServerPasswordRequest.h>
#include <g42cloud/ecs/v2/model/DeleteServerPasswordResponse.h>
#include <g42cloud/ecs/v2/model/DeleteServersRequest.h>
#include <g42cloud/ecs/v2/model/DeleteServersRequestBody.h>
#include <g42cloud/ecs/v2/model/DeleteServersResponse.h>
#include <g42cloud/ecs/v2/model/DetachServerVolumeRequest.h>
#include <g42cloud/ecs/v2/model/DetachServerVolumeResponse.h>
#include <g42cloud/ecs/v2/model/DisassociateServerVirtualIpRequest.h>
#include <g42cloud/ecs/v2/model/DisassociateServerVirtualIpRequestBody.h>
#include <g42cloud/ecs/v2/model/DisassociateServerVirtualIpResponse.h>
#include <g42cloud/ecs/v2/model/ListFlavorsRequest.h>
#include <g42cloud/ecs/v2/model/ListFlavorsResponse.h>
#include <g42cloud/ecs/v2/model/ListResizeFlavorsRequest.h>
#include <g42cloud/ecs/v2/model/ListResizeFlavorsResponse.h>
#include <g42cloud/ecs/v2/model/ListServerBlockDevicesRequest.h>
#include <g42cloud/ecs/v2/model/ListServerBlockDevicesResponse.h>
#include <g42cloud/ecs/v2/model/ListServerGroupsRequest.h>
#include <g42cloud/ecs/v2/model/ListServerGroupsResponse.h>
#include <g42cloud/ecs/v2/model/ListServerInterfacesRequest.h>
#include <g42cloud/ecs/v2/model/ListServerInterfacesResponse.h>
#include <g42cloud/ecs/v2/model/ListServerTagsRequest.h>
#include <g42cloud/ecs/v2/model/ListServerTagsResponse.h>
#include <g42cloud/ecs/v2/model/ListServersDetailsRequest.h>
#include <g42cloud/ecs/v2/model/ListServersDetailsResponse.h>
#include <g42cloud/ecs/v2/model/MigrateServerRequest.h>
#include <g42cloud/ecs/v2/model/MigrateServerRequestBody.h>
#include <g42cloud/ecs/v2/model/MigrateServerResponse.h>
#include <g42cloud/ecs/v2/model/NovaAssociateSecurityGroupRequest.h>
#include <g42cloud/ecs/v2/model/NovaAssociateSecurityGroupRequestBody.h>
#include <g42cloud/ecs/v2/model/NovaAssociateSecurityGroupResponse.h>
#include <g42cloud/ecs/v2/model/NovaAttachInterfaceRequest.h>
#include <g42cloud/ecs/v2/model/NovaAttachInterfaceRequestBody.h>
#include <g42cloud/ecs/v2/model/NovaAttachInterfaceResponse.h>
#include <g42cloud/ecs/v2/model/NovaCreateKeypairRequest.h>
#include <g42cloud/ecs/v2/model/NovaCreateKeypairRequestBody.h>
#include <g42cloud/ecs/v2/model/NovaCreateKeypairResponse.h>
#include <g42cloud/ecs/v2/model/NovaCreateServersRequest.h>
#include <g42cloud/ecs/v2/model/NovaCreateServersRequestBody.h>
#include <g42cloud/ecs/v2/model/NovaCreateServersResponse.h>
#include <g42cloud/ecs/v2/model/NovaDeleteKeypairRequest.h>
#include <g42cloud/ecs/v2/model/NovaDeleteKeypairResponse.h>
#include <g42cloud/ecs/v2/model/NovaDeleteServerRequest.h>
#include <g42cloud/ecs/v2/model/NovaDeleteServerResponse.h>
#include <g42cloud/ecs/v2/model/NovaDisassociateSecurityGroupRequest.h>
#include <g42cloud/ecs/v2/model/NovaDisassociateSecurityGroupRequestBody.h>
#include <g42cloud/ecs/v2/model/NovaDisassociateSecurityGroupResponse.h>
#include <g42cloud/ecs/v2/model/NovaListAvailabilityZonesRequest.h>
#include <g42cloud/ecs/v2/model/NovaListAvailabilityZonesResponse.h>
#include <g42cloud/ecs/v2/model/NovaListKeypairsRequest.h>
#include <g42cloud/ecs/v2/model/NovaListKeypairsResponse.h>
#include <g42cloud/ecs/v2/model/NovaListServerSecurityGroupsRequest.h>
#include <g42cloud/ecs/v2/model/NovaListServerSecurityGroupsResponse.h>
#include <g42cloud/ecs/v2/model/NovaListServersDetailsRequest.h>
#include <g42cloud/ecs/v2/model/NovaListServersDetailsResponse.h>
#include <g42cloud/ecs/v2/model/NovaShowKeypairRequest.h>
#include <g42cloud/ecs/v2/model/NovaShowKeypairResponse.h>
#include <g42cloud/ecs/v2/model/NovaShowServerRequest.h>
#include <g42cloud/ecs/v2/model/NovaShowServerResponse.h>
#include <g42cloud/ecs/v2/model/RegisterServerAutoRecoveryRequest.h>
#include <g42cloud/ecs/v2/model/RegisterServerAutoRecoveryRequestBody.h>
#include <g42cloud/ecs/v2/model/RegisterServerAutoRecoveryResponse.h>
#include <g42cloud/ecs/v2/model/RegisterServerMonitorRequest.h>
#include <g42cloud/ecs/v2/model/RegisterServerMonitorRequestBody.h>
#include <g42cloud/ecs/v2/model/RegisterServerMonitorResponse.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithCloudInitRequest.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithCloudInitRequestBody.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithCloudInitResponse.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequest.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequestBody.h>
#include <g42cloud/ecs/v2/model/ReinstallServerWithoutCloudInitResponse.h>
#include <g42cloud/ecs/v2/model/ResetServerPasswordRequest.h>
#include <g42cloud/ecs/v2/model/ResetServerPasswordRequestBody.h>
#include <g42cloud/ecs/v2/model/ResetServerPasswordResponse.h>
#include <g42cloud/ecs/v2/model/ResizePostPaidServerRequest.h>
#include <g42cloud/ecs/v2/model/ResizePostPaidServerRequestBody.h>
#include <g42cloud/ecs/v2/model/ResizePostPaidServerResponse.h>
#include <g42cloud/ecs/v2/model/ResizeServerRequest.h>
#include <g42cloud/ecs/v2/model/ResizeServerRequestBody.h>
#include <g42cloud/ecs/v2/model/ResizeServerResponse.h>
#include <g42cloud/ecs/v2/model/ShowResetPasswordFlagRequest.h>
#include <g42cloud/ecs/v2/model/ShowResetPasswordFlagResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerAutoRecoveryRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerAutoRecoveryResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerBlockDeviceRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerBlockDeviceResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerGroupRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerGroupResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerLimitsRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerLimitsResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerPasswordRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerPasswordResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerRemoteConsoleRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h>
#include <g42cloud/ecs/v2/model/ShowServerRemoteConsoleResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerResponse.h>
#include <g42cloud/ecs/v2/model/ShowServerTagsRequest.h>
#include <g42cloud/ecs/v2/model/ShowServerTagsResponse.h>
#include <g42cloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequest.h>
#include <g42cloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequestBody.h>
#include <g42cloud/ecs/v2/model/UpdateServerAutoTerminateTimeResponse.h>
#include <g42cloud/ecs/v2/model/UpdateServerMetadataRequest.h>
#include <g42cloud/ecs/v2/model/UpdateServerMetadataRequestBody.h>
#include <g42cloud/ecs/v2/model/UpdateServerMetadataResponse.h>
#include <g42cloud/ecs/v2/model/UpdateServerRequest.h>
#include <g42cloud/ecs/v2/model/UpdateServerRequestBody.h>
#include <g42cloud/ecs/v2/model/UpdateServerResponse.h>
#include <string>

#include <g42cloud/ecs/v2/model/ShowJobRequest.h>
#include <g42cloud/ecs/v2/model/ShowJobResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <g42cloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {

using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Ecs::V2::Model;

class G42CLOUD_ECS_V2_EXPORT  EcsClient : public Client
{
public:

    EcsClient();

    virtual ~EcsClient();

    static ClientBuilder<EcsClient> newBuilder();

    std::shared_ptr<AddServerGroupMemberResponse> addServerGroupMember(
        AddServerGroupMemberRequest &request
    );
    std::shared_ptr<AssociateServerVirtualIpResponse> associateServerVirtualIp(
        AssociateServerVirtualIpRequest &request
    );
    std::shared_ptr<AttachServerVolumeResponse> attachServerVolume(
        AttachServerVolumeRequest &request
    );
    std::shared_ptr<BatchAddServerNicsResponse> batchAddServerNics(
        BatchAddServerNicsRequest &request
    );
    std::shared_ptr<BatchAttachSharableVolumesResponse> batchAttachSharableVolumes(
        BatchAttachSharableVolumesRequest &request
    );
    std::shared_ptr<BatchCreateServerTagsResponse> batchCreateServerTags(
        BatchCreateServerTagsRequest &request
    );
    std::shared_ptr<BatchDeleteServerNicsResponse> batchDeleteServerNics(
        BatchDeleteServerNicsRequest &request
    );
    std::shared_ptr<BatchDeleteServerTagsResponse> batchDeleteServerTags(
        BatchDeleteServerTagsRequest &request
    );
    std::shared_ptr<BatchRebootServersResponse> batchRebootServers(
        BatchRebootServersRequest &request
    );
    std::shared_ptr<BatchResetServersPasswordResponse> batchResetServersPassword(
        BatchResetServersPasswordRequest &request
    );
    std::shared_ptr<BatchStartServersResponse> batchStartServers(
        BatchStartServersRequest &request
    );
    std::shared_ptr<BatchStopServersResponse> batchStopServers(
        BatchStopServersRequest &request
    );
    std::shared_ptr<BatchUpdateServersNameResponse> batchUpdateServersName(
        BatchUpdateServersNameRequest &request
    );
    std::shared_ptr<ChangeServerOsWithCloudInitResponse> changeServerOsWithCloudInit(
        ChangeServerOsWithCloudInitRequest &request
    );
    std::shared_ptr<ChangeServerOsWithoutCloudInitResponse> changeServerOsWithoutCloudInit(
        ChangeServerOsWithoutCloudInitRequest &request
    );
    std::shared_ptr<CreatePostPaidServersResponse> createPostPaidServers(
        CreatePostPaidServersRequest &request
    );
    std::shared_ptr<CreateServerGroupResponse> createServerGroup(
        CreateServerGroupRequest &request
    );
    std::shared_ptr<CreateServersResponse> createServers(
        CreateServersRequest &request
    );
    std::shared_ptr<DeleteServerGroupResponse> deleteServerGroup(
        DeleteServerGroupRequest &request
    );
    std::shared_ptr<DeleteServerGroupMemberResponse> deleteServerGroupMember(
        DeleteServerGroupMemberRequest &request
    );
    std::shared_ptr<DeleteServerMetadataResponse> deleteServerMetadata(
        DeleteServerMetadataRequest &request
    );
    std::shared_ptr<DeleteServerPasswordResponse> deleteServerPassword(
        DeleteServerPasswordRequest &request
    );
    std::shared_ptr<DeleteServersResponse> deleteServers(
        DeleteServersRequest &request
    );
    std::shared_ptr<DetachServerVolumeResponse> detachServerVolume(
        DetachServerVolumeRequest &request
    );
    std::shared_ptr<DisassociateServerVirtualIpResponse> disassociateServerVirtualIp(
        DisassociateServerVirtualIpRequest &request
    );
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    std::shared_ptr<ListResizeFlavorsResponse> listResizeFlavors(
        ListResizeFlavorsRequest &request
    );
    std::shared_ptr<ListServerBlockDevicesResponse> listServerBlockDevices(
        ListServerBlockDevicesRequest &request
    );
    std::shared_ptr<ListServerGroupsResponse> listServerGroups(
        ListServerGroupsRequest &request
    );
    std::shared_ptr<ListServerInterfacesResponse> listServerInterfaces(
        ListServerInterfacesRequest &request
    );
    std::shared_ptr<ListServerTagsResponse> listServerTags(
        ListServerTagsRequest &request
    );
    std::shared_ptr<ListServersDetailsResponse> listServersDetails(
        ListServersDetailsRequest &request
    );
    std::shared_ptr<MigrateServerResponse> migrateServer(
        MigrateServerRequest &request
    );
    std::shared_ptr<NovaAssociateSecurityGroupResponse> novaAssociateSecurityGroup(
        NovaAssociateSecurityGroupRequest &request
    );
    std::shared_ptr<NovaAttachInterfaceResponse> novaAttachInterface(
        NovaAttachInterfaceRequest &request
    );
    std::shared_ptr<NovaCreateKeypairResponse> novaCreateKeypair(
        NovaCreateKeypairRequest &request
    );
    std::shared_ptr<NovaCreateServersResponse> novaCreateServers(
        NovaCreateServersRequest &request
    );
    std::shared_ptr<NovaDeleteKeypairResponse> novaDeleteKeypair(
        NovaDeleteKeypairRequest &request
    );
    std::shared_ptr<NovaDeleteServerResponse> novaDeleteServer(
        NovaDeleteServerRequest &request
    );
    std::shared_ptr<NovaDisassociateSecurityGroupResponse> novaDisassociateSecurityGroup(
        NovaDisassociateSecurityGroupRequest &request
    );
    std::shared_ptr<NovaListAvailabilityZonesResponse> novaListAvailabilityZones(
        NovaListAvailabilityZonesRequest &request
    );
    std::shared_ptr<NovaListKeypairsResponse> novaListKeypairs(
        NovaListKeypairsRequest &request
    );
    std::shared_ptr<NovaListServerSecurityGroupsResponse> novaListServerSecurityGroups(
        NovaListServerSecurityGroupsRequest &request
    );
    std::shared_ptr<NovaListServersDetailsResponse> novaListServersDetails(
        NovaListServersDetailsRequest &request
    );
    std::shared_ptr<NovaShowKeypairResponse> novaShowKeypair(
        NovaShowKeypairRequest &request
    );
    std::shared_ptr<NovaShowServerResponse> novaShowServer(
        NovaShowServerRequest &request
    );
    std::shared_ptr<RegisterServerAutoRecoveryResponse> registerServerAutoRecovery(
        RegisterServerAutoRecoveryRequest &request
    );
    std::shared_ptr<RegisterServerMonitorResponse> registerServerMonitor(
        RegisterServerMonitorRequest &request
    );
    std::shared_ptr<ReinstallServerWithCloudInitResponse> reinstallServerWithCloudInit(
        ReinstallServerWithCloudInitRequest &request
    );
    std::shared_ptr<ReinstallServerWithoutCloudInitResponse> reinstallServerWithoutCloudInit(
        ReinstallServerWithoutCloudInitRequest &request
    );
    std::shared_ptr<ResetServerPasswordResponse> resetServerPassword(
        ResetServerPasswordRequest &request
    );
    std::shared_ptr<ResizePostPaidServerResponse> resizePostPaidServer(
        ResizePostPaidServerRequest &request
    );
    std::shared_ptr<ResizeServerResponse> resizeServer(
        ResizeServerRequest &request
    );
    std::shared_ptr<ShowResetPasswordFlagResponse> showResetPasswordFlag(
        ShowResetPasswordFlagRequest &request
    );
    std::shared_ptr<ShowServerResponse> showServer(
        ShowServerRequest &request
    );
    std::shared_ptr<ShowServerAutoRecoveryResponse> showServerAutoRecovery(
        ShowServerAutoRecoveryRequest &request
    );
    std::shared_ptr<ShowServerBlockDeviceResponse> showServerBlockDevice(
        ShowServerBlockDeviceRequest &request
    );
    std::shared_ptr<ShowServerGroupResponse> showServerGroup(
        ShowServerGroupRequest &request
    );
    std::shared_ptr<ShowServerLimitsResponse> showServerLimits(
        ShowServerLimitsRequest &request
    );
    std::shared_ptr<ShowServerPasswordResponse> showServerPassword(
        ShowServerPasswordRequest &request
    );
    std::shared_ptr<ShowServerRemoteConsoleResponse> showServerRemoteConsole(
        ShowServerRemoteConsoleRequest &request
    );
    std::shared_ptr<ShowServerTagsResponse> showServerTags(
        ShowServerTagsRequest &request
    );
    std::shared_ptr<UpdateServerResponse> updateServer(
        UpdateServerRequest &request
    );
    std::shared_ptr<UpdateServerAutoTerminateTimeResponse> updateServerAutoTerminateTime(
        UpdateServerAutoTerminateTimeRequest &request
    );
    std::shared_ptr<UpdateServerMetadataResponse> updateServerMetadata(
        UpdateServerMetadataRequest &request
    );

    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const utility::datetime &value);
    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class G42CLOUD_ECS_V2_EXPORT ::G42Cloud::Sdk::Core::ClientBuilder<::G42Cloud::Sdk::Ecs::V2::EcsClient>;

#endif // G42CLOUD_SDK_ECS_V2_EcsClient_H_

