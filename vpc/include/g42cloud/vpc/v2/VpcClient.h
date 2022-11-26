#ifndef G42CLOUD_SDK_VPC_V2_VpcClient_H_
#define G42CLOUD_SDK_VPC_V2_VpcClient_H_

#include <g42cloud/vpc/v2/VpcExport.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/core/ClientBuilder.h>


#include <g42cloud/vpc/v2/model/AcceptVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/AcceptVpcPeeringResponse.h>
#include <g42cloud/vpc/v2/model/AssociateRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/AssociateRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/BatchCreateSubnetTagsRequest.h>
#include <g42cloud/vpc/v2/model/BatchCreateSubnetTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/BatchCreateSubnetTagsResponse.h>
#include <g42cloud/vpc/v2/model/BatchDeleteSubnetTagsRequest.h>
#include <g42cloud/vpc/v2/model/BatchDeleteSubnetTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/BatchDeleteSubnetTagsResponse.h>
#include <g42cloud/vpc/v2/model/CreatePortRequest.h>
#include <g42cloud/vpc/v2/model/CreatePortRequestBody.h>
#include <g42cloud/vpc/v2/model/CreatePortResponse.h>
#include <g42cloud/vpc/v2/model/CreateRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/CreateRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/CreateRoutetableReqBody.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/CreateSubnetRequest.h>
#include <g42cloud/vpc/v2/model/CreateSubnetRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateSubnetResponse.h>
#include <g42cloud/vpc/v2/model/CreateSubnetTagRequest.h>
#include <g42cloud/vpc/v2/model/CreateSubnetTagRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateSubnetTagResponse.h>
#include <g42cloud/vpc/v2/model/CreateVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/CreateVpcPeeringRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateVpcPeeringResponse.h>
#include <g42cloud/vpc/v2/model/DeletePortRequest.h>
#include <g42cloud/vpc/v2/model/DeletePortResponse.h>
#include <g42cloud/vpc/v2/model/DeleteRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/DeleteRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/DeleteSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/DeleteSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/DeleteSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/DeleteSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/DeleteSubnetRequest.h>
#include <g42cloud/vpc/v2/model/DeleteSubnetResponse.h>
#include <g42cloud/vpc/v2/model/DeleteSubnetTagRequest.h>
#include <g42cloud/vpc/v2/model/DeleteSubnetTagResponse.h>
#include <g42cloud/vpc/v2/model/DeleteVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/DeleteVpcPeeringResponse.h>
#include <g42cloud/vpc/v2/model/DisassociateRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/DisassociateRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/ListPortsRequest.h>
#include <g42cloud/vpc/v2/model/ListPortsResponse.h>
#include <g42cloud/vpc/v2/model/ListRouteTablesRequest.h>
#include <g42cloud/vpc/v2/model/ListRouteTablesResponse.h>
#include <g42cloud/vpc/v2/model/ListSecurityGroupRulesRequest.h>
#include <g42cloud/vpc/v2/model/ListSecurityGroupRulesResponse.h>
#include <g42cloud/vpc/v2/model/ListSecurityGroupsRequest.h>
#include <g42cloud/vpc/v2/model/ListSecurityGroupsResponse.h>
#include <g42cloud/vpc/v2/model/ListSubnetTagsRequest.h>
#include <g42cloud/vpc/v2/model/ListSubnetTagsResponse.h>
#include <g42cloud/vpc/v2/model/ListSubnetsByTagsRequest.h>
#include <g42cloud/vpc/v2/model/ListSubnetsByTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/ListSubnetsByTagsResponse.h>
#include <g42cloud/vpc/v2/model/ListSubnetsRequest.h>
#include <g42cloud/vpc/v2/model/ListSubnetsResponse.h>
#include <g42cloud/vpc/v2/model/ListVpcPeeringsRequest.h>
#include <g42cloud/vpc/v2/model/ListVpcPeeringsResponse.h>
#include <g42cloud/vpc/v2/model/RejectVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/RejectVpcPeeringResponse.h>
#include <g42cloud/vpc/v2/model/RoutetableAssociateReqbody.h>
#include <g42cloud/vpc/v2/model/ShowPortRequest.h>
#include <g42cloud/vpc/v2/model/ShowPortResponse.h>
#include <g42cloud/vpc/v2/model/ShowQuotaRequest.h>
#include <g42cloud/vpc/v2/model/ShowQuotaResponse.h>
#include <g42cloud/vpc/v2/model/ShowRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/ShowRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/ShowSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/ShowSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/ShowSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/ShowSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/ShowSubnetRequest.h>
#include <g42cloud/vpc/v2/model/ShowSubnetResponse.h>
#include <g42cloud/vpc/v2/model/ShowSubnetTagsRequest.h>
#include <g42cloud/vpc/v2/model/ShowSubnetTagsResponse.h>
#include <g42cloud/vpc/v2/model/ShowVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/ShowVpcPeeringResponse.h>
#include <g42cloud/vpc/v2/model/UpdatePortRequest.h>
#include <g42cloud/vpc/v2/model/UpdatePortRequestBody.h>
#include <g42cloud/vpc/v2/model/UpdatePortResponse.h>
#include <g42cloud/vpc/v2/model/UpdateRouteTableRequest.h>
#include <g42cloud/vpc/v2/model/UpdateRouteTableResponse.h>
#include <g42cloud/vpc/v2/model/UpdateRoutetableReqBody.h>
#include <g42cloud/vpc/v2/model/UpdateSubnetRequest.h>
#include <g42cloud/vpc/v2/model/UpdateSubnetRequestBody.h>
#include <g42cloud/vpc/v2/model/UpdateSubnetResponse.h>
#include <g42cloud/vpc/v2/model/UpdateVpcPeeringRequest.h>
#include <g42cloud/vpc/v2/model/UpdateVpcPeeringRequestBody.h>
#include <g42cloud/vpc/v2/model/UpdateVpcPeeringResponse.h>
#include <string>

#include <g42cloud/vpc/v2/model/CreatePrivateipRequest.h>
#include <g42cloud/vpc/v2/model/CreatePrivateipRequestBody.h>
#include <g42cloud/vpc/v2/model/CreatePrivateipResponse.h>
#include <g42cloud/vpc/v2/model/DeletePrivateipRequest.h>
#include <g42cloud/vpc/v2/model/DeletePrivateipResponse.h>
#include <g42cloud/vpc/v2/model/ListPrivateipsRequest.h>
#include <g42cloud/vpc/v2/model/ListPrivateipsResponse.h>
#include <g42cloud/vpc/v2/model/ShowNetworkIpAvailabilitiesRequest.h>
#include <g42cloud/vpc/v2/model/ShowNetworkIpAvailabilitiesResponse.h>
#include <g42cloud/vpc/v2/model/ShowPrivateipRequest.h>
#include <g42cloud/vpc/v2/model/ShowPrivateipResponse.h>
#include <string>

#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronCreateSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronListSecurityGroupRulesRequest.h>
#include <g42cloud/vpc/v2/model/NeutronListSecurityGroupRulesResponse.h>
#include <g42cloud/vpc/v2/model/NeutronListSecurityGroupsRequest.h>
#include <g42cloud/vpc/v2/model/NeutronListSecurityGroupsResponse.h>
#include <g42cloud/vpc/v2/model/NeutronShowSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronShowSecurityGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronShowSecurityGroupRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronShowSecurityGroupRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateSecurityGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateSecurityGroupRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateSecurityGroupResponse.h>
#include <string>

#include <g42cloud/vpc/v2/model/NeutronAddFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronAddFirewallRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallGroupRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallPolicyRequest.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallPolicyRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallPolicyResponse.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronCreateFirewallRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallPolicyRequest.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallPolicyResponse.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronDeleteFirewallRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronInsertFirewallRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallGroupsRequest.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallGroupsResponse.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallPoliciesRequest.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallPoliciesResponse.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallRulesRequest.h>
#include <g42cloud/vpc/v2/model/NeutronListFirewallRulesResponse.h>
#include <g42cloud/vpc/v2/model/NeutronRemoveFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronRemoveFirewallRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronRemoveFirewallRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallPolicyRequest.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallPolicyResponse.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronShowFirewallRuleResponse.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallGroupRequest.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallGroupRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallGroupResponse.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequest.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallPolicyResponse.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallRuleRequest.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallRuleRequestBody.h>
#include <g42cloud/vpc/v2/model/NeutronUpdateFirewallRuleResponse.h>
#include <string>

#include <g42cloud/vpc/v2/model/BatchCreateVpcTagsRequest.h>
#include <g42cloud/vpc/v2/model/BatchCreateVpcTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/BatchCreateVpcTagsResponse.h>
#include <g42cloud/vpc/v2/model/BatchDeleteVpcTagsRequest.h>
#include <g42cloud/vpc/v2/model/BatchDeleteVpcTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/BatchDeleteVpcTagsResponse.h>
#include <g42cloud/vpc/v2/model/CreateVpcRequest.h>
#include <g42cloud/vpc/v2/model/CreateVpcRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateVpcResourceTagRequest.h>
#include <g42cloud/vpc/v2/model/CreateVpcResourceTagRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateVpcResourceTagResponse.h>
#include <g42cloud/vpc/v2/model/CreateVpcResponse.h>
#include <g42cloud/vpc/v2/model/CreateVpcRouteRequest.h>
#include <g42cloud/vpc/v2/model/CreateVpcRouteRequestBody.h>
#include <g42cloud/vpc/v2/model/CreateVpcRouteResponse.h>
#include <g42cloud/vpc/v2/model/DeleteVpcRequest.h>
#include <g42cloud/vpc/v2/model/DeleteVpcResponse.h>
#include <g42cloud/vpc/v2/model/DeleteVpcRouteRequest.h>
#include <g42cloud/vpc/v2/model/DeleteVpcRouteResponse.h>
#include <g42cloud/vpc/v2/model/DeleteVpcTagRequest.h>
#include <g42cloud/vpc/v2/model/DeleteVpcTagResponse.h>
#include <g42cloud/vpc/v2/model/ListVpcRoutesRequest.h>
#include <g42cloud/vpc/v2/model/ListVpcRoutesResponse.h>
#include <g42cloud/vpc/v2/model/ListVpcTagsRequest.h>
#include <g42cloud/vpc/v2/model/ListVpcTagsResponse.h>
#include <g42cloud/vpc/v2/model/ListVpcsByTagsRequest.h>
#include <g42cloud/vpc/v2/model/ListVpcsByTagsRequestBody.h>
#include <g42cloud/vpc/v2/model/ListVpcsByTagsResponse.h>
#include <g42cloud/vpc/v2/model/ListVpcsRequest.h>
#include <g42cloud/vpc/v2/model/ListVpcsResponse.h>
#include <g42cloud/vpc/v2/model/ShowVpcRequest.h>
#include <g42cloud/vpc/v2/model/ShowVpcResponse.h>
#include <g42cloud/vpc/v2/model/ShowVpcRouteRequest.h>
#include <g42cloud/vpc/v2/model/ShowVpcRouteResponse.h>
#include <g42cloud/vpc/v2/model/ShowVpcTagsRequest.h>
#include <g42cloud/vpc/v2/model/ShowVpcTagsResponse.h>
#include <g42cloud/vpc/v2/model/UpdateVpcRequest.h>
#include <g42cloud/vpc/v2/model/UpdateVpcRequestBody.h>
#include <g42cloud/vpc/v2/model/UpdateVpcResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <g42cloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Vpc::V2::Model;

class G42CLOUD_VPC_V2_EXPORT  VpcClient : public Client
{
public:

    VpcClient();

    virtual ~VpcClient();

    static ClientBuilder<VpcClient> newBuilder();

    std::shared_ptr<AcceptVpcPeeringResponse> acceptVpcPeering(
        AcceptVpcPeeringRequest &request
    );
    std::shared_ptr<AssociateRouteTableResponse> associateRouteTable(
        AssociateRouteTableRequest &request
    );
    std::shared_ptr<BatchCreateSubnetTagsResponse> batchCreateSubnetTags(
        BatchCreateSubnetTagsRequest &request
    );
    std::shared_ptr<BatchDeleteSubnetTagsResponse> batchDeleteSubnetTags(
        BatchDeleteSubnetTagsRequest &request
    );
    std::shared_ptr<CreatePortResponse> createPort(
        CreatePortRequest &request
    );
    std::shared_ptr<CreateRouteTableResponse> createRouteTable(
        CreateRouteTableRequest &request
    );
    std::shared_ptr<CreateSecurityGroupResponse> createSecurityGroup(
        CreateSecurityGroupRequest &request
    );
    std::shared_ptr<CreateSecurityGroupRuleResponse> createSecurityGroupRule(
        CreateSecurityGroupRuleRequest &request
    );
    std::shared_ptr<CreateSubnetResponse> createSubnet(
        CreateSubnetRequest &request
    );
    std::shared_ptr<CreateSubnetTagResponse> createSubnetTag(
        CreateSubnetTagRequest &request
    );
    std::shared_ptr<CreateVpcPeeringResponse> createVpcPeering(
        CreateVpcPeeringRequest &request
    );
    std::shared_ptr<DeletePortResponse> deletePort(
        DeletePortRequest &request
    );
    std::shared_ptr<DeleteRouteTableResponse> deleteRouteTable(
        DeleteRouteTableRequest &request
    );
    std::shared_ptr<DeleteSecurityGroupResponse> deleteSecurityGroup(
        DeleteSecurityGroupRequest &request
    );
    std::shared_ptr<DeleteSecurityGroupRuleResponse> deleteSecurityGroupRule(
        DeleteSecurityGroupRuleRequest &request
    );
    std::shared_ptr<DeleteSubnetResponse> deleteSubnet(
        DeleteSubnetRequest &request
    );
    std::shared_ptr<DeleteSubnetTagResponse> deleteSubnetTag(
        DeleteSubnetTagRequest &request
    );
    std::shared_ptr<DeleteVpcPeeringResponse> deleteVpcPeering(
        DeleteVpcPeeringRequest &request
    );
    std::shared_ptr<DisassociateRouteTableResponse> disassociateRouteTable(
        DisassociateRouteTableRequest &request
    );
    std::shared_ptr<ListPortsResponse> listPorts(
        ListPortsRequest &request
    );
    std::shared_ptr<ListRouteTablesResponse> listRouteTables(
        ListRouteTablesRequest &request
    );
    std::shared_ptr<ListSecurityGroupRulesResponse> listSecurityGroupRules(
        ListSecurityGroupRulesRequest &request
    );
    std::shared_ptr<ListSecurityGroupsResponse> listSecurityGroups(
        ListSecurityGroupsRequest &request
    );
    std::shared_ptr<ListSubnetTagsResponse> listSubnetTags(
        ListSubnetTagsRequest &request
    );
    std::shared_ptr<ListSubnetsResponse> listSubnets(
        ListSubnetsRequest &request
    );
    std::shared_ptr<ListSubnetsByTagsResponse> listSubnetsByTags(
        ListSubnetsByTagsRequest &request
    );
    std::shared_ptr<ListVpcPeeringsResponse> listVpcPeerings(
        ListVpcPeeringsRequest &request
    );
    std::shared_ptr<RejectVpcPeeringResponse> rejectVpcPeering(
        RejectVpcPeeringRequest &request
    );
    std::shared_ptr<ShowPortResponse> showPort(
        ShowPortRequest &request
    );
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    std::shared_ptr<ShowRouteTableResponse> showRouteTable(
        ShowRouteTableRequest &request
    );
    std::shared_ptr<ShowSecurityGroupResponse> showSecurityGroup(
        ShowSecurityGroupRequest &request
    );
    std::shared_ptr<ShowSecurityGroupRuleResponse> showSecurityGroupRule(
        ShowSecurityGroupRuleRequest &request
    );
    std::shared_ptr<ShowSubnetResponse> showSubnet(
        ShowSubnetRequest &request
    );
    std::shared_ptr<ShowSubnetTagsResponse> showSubnetTags(
        ShowSubnetTagsRequest &request
    );
    std::shared_ptr<ShowVpcPeeringResponse> showVpcPeering(
        ShowVpcPeeringRequest &request
    );
    std::shared_ptr<UpdatePortResponse> updatePort(
        UpdatePortRequest &request
    );
    std::shared_ptr<UpdateRouteTableResponse> updateRouteTable(
        UpdateRouteTableRequest &request
    );
    std::shared_ptr<UpdateSubnetResponse> updateSubnet(
        UpdateSubnetRequest &request
    );
    std::shared_ptr<UpdateVpcPeeringResponse> updateVpcPeering(
        UpdateVpcPeeringRequest &request
    );

    std::shared_ptr<CreatePrivateipResponse> createPrivateip(
        CreatePrivateipRequest &request
    );
    std::shared_ptr<DeletePrivateipResponse> deletePrivateip(
        DeletePrivateipRequest &request
    );
    std::shared_ptr<ListPrivateipsResponse> listPrivateips(
        ListPrivateipsRequest &request
    );
    std::shared_ptr<ShowNetworkIpAvailabilitiesResponse> showNetworkIpAvailabilities(
        ShowNetworkIpAvailabilitiesRequest &request
    );
    std::shared_ptr<ShowPrivateipResponse> showPrivateip(
        ShowPrivateipRequest &request
    );

    std::shared_ptr<NeutronCreateSecurityGroupResponse> neutronCreateSecurityGroup(
        NeutronCreateSecurityGroupRequest &request
    );
    std::shared_ptr<NeutronCreateSecurityGroupRuleResponse> neutronCreateSecurityGroupRule(
        NeutronCreateSecurityGroupRuleRequest &request
    );
    std::shared_ptr<NeutronDeleteSecurityGroupResponse> neutronDeleteSecurityGroup(
        NeutronDeleteSecurityGroupRequest &request
    );
    std::shared_ptr<NeutronDeleteSecurityGroupRuleResponse> neutronDeleteSecurityGroupRule(
        NeutronDeleteSecurityGroupRuleRequest &request
    );
    std::shared_ptr<NeutronListSecurityGroupRulesResponse> neutronListSecurityGroupRules(
        NeutronListSecurityGroupRulesRequest &request
    );
    std::shared_ptr<NeutronListSecurityGroupsResponse> neutronListSecurityGroups(
        NeutronListSecurityGroupsRequest &request
    );
    std::shared_ptr<NeutronShowSecurityGroupResponse> neutronShowSecurityGroup(
        NeutronShowSecurityGroupRequest &request
    );
    std::shared_ptr<NeutronShowSecurityGroupRuleResponse> neutronShowSecurityGroupRule(
        NeutronShowSecurityGroupRuleRequest &request
    );
    std::shared_ptr<NeutronUpdateSecurityGroupResponse> neutronUpdateSecurityGroup(
        NeutronUpdateSecurityGroupRequest &request
    );

    std::shared_ptr<NeutronAddFirewallRuleResponse> neutronAddFirewallRule(
        NeutronAddFirewallRuleRequest &request
    );
    std::shared_ptr<NeutronCreateFirewallGroupResponse> neutronCreateFirewallGroup(
        NeutronCreateFirewallGroupRequest &request
    );
    std::shared_ptr<NeutronCreateFirewallPolicyResponse> neutronCreateFirewallPolicy(
        NeutronCreateFirewallPolicyRequest &request
    );
    std::shared_ptr<NeutronCreateFirewallRuleResponse> neutronCreateFirewallRule(
        NeutronCreateFirewallRuleRequest &request
    );
    std::shared_ptr<NeutronDeleteFirewallGroupResponse> neutronDeleteFirewallGroup(
        NeutronDeleteFirewallGroupRequest &request
    );
    std::shared_ptr<NeutronDeleteFirewallPolicyResponse> neutronDeleteFirewallPolicy(
        NeutronDeleteFirewallPolicyRequest &request
    );
    std::shared_ptr<NeutronDeleteFirewallRuleResponse> neutronDeleteFirewallRule(
        NeutronDeleteFirewallRuleRequest &request
    );
    std::shared_ptr<NeutronListFirewallGroupsResponse> neutronListFirewallGroups(
        NeutronListFirewallGroupsRequest &request
    );
    std::shared_ptr<NeutronListFirewallPoliciesResponse> neutronListFirewallPolicies(
        NeutronListFirewallPoliciesRequest &request
    );
    std::shared_ptr<NeutronListFirewallRulesResponse> neutronListFirewallRules(
        NeutronListFirewallRulesRequest &request
    );
    std::shared_ptr<NeutronRemoveFirewallRuleResponse> neutronRemoveFirewallRule(
        NeutronRemoveFirewallRuleRequest &request
    );
    std::shared_ptr<NeutronShowFirewallGroupResponse> neutronShowFirewallGroup(
        NeutronShowFirewallGroupRequest &request
    );
    std::shared_ptr<NeutronShowFirewallPolicyResponse> neutronShowFirewallPolicy(
        NeutronShowFirewallPolicyRequest &request
    );
    std::shared_ptr<NeutronShowFirewallRuleResponse> neutronShowFirewallRule(
        NeutronShowFirewallRuleRequest &request
    );
    std::shared_ptr<NeutronUpdateFirewallGroupResponse> neutronUpdateFirewallGroup(
        NeutronUpdateFirewallGroupRequest &request
    );
    std::shared_ptr<NeutronUpdateFirewallPolicyResponse> neutronUpdateFirewallPolicy(
        NeutronUpdateFirewallPolicyRequest &request
    );
    std::shared_ptr<NeutronUpdateFirewallRuleResponse> neutronUpdateFirewallRule(
        NeutronUpdateFirewallRuleRequest &request
    );

    std::shared_ptr<BatchCreateVpcTagsResponse> batchCreateVpcTags(
        BatchCreateVpcTagsRequest &request
    );
    std::shared_ptr<BatchDeleteVpcTagsResponse> batchDeleteVpcTags(
        BatchDeleteVpcTagsRequest &request
    );
    std::shared_ptr<CreateVpcResponse> createVpc(
        CreateVpcRequest &request
    );
    std::shared_ptr<CreateVpcResourceTagResponse> createVpcResourceTag(
        CreateVpcResourceTagRequest &request
    );
    std::shared_ptr<CreateVpcRouteResponse> createVpcRoute(
        CreateVpcRouteRequest &request
    );
    std::shared_ptr<DeleteVpcResponse> deleteVpc(
        DeleteVpcRequest &request
    );
    std::shared_ptr<DeleteVpcRouteResponse> deleteVpcRoute(
        DeleteVpcRouteRequest &request
    );
    std::shared_ptr<DeleteVpcTagResponse> deleteVpcTag(
        DeleteVpcTagRequest &request
    );
    std::shared_ptr<ListVpcRoutesResponse> listVpcRoutes(
        ListVpcRoutesRequest &request
    );
    std::shared_ptr<ListVpcTagsResponse> listVpcTags(
        ListVpcTagsRequest &request
    );
    std::shared_ptr<ListVpcsResponse> listVpcs(
        ListVpcsRequest &request
    );
    std::shared_ptr<ListVpcsByTagsResponse> listVpcsByTags(
        ListVpcsByTagsRequest &request
    );
    std::shared_ptr<ShowVpcResponse> showVpc(
        ShowVpcRequest &request
    );
    std::shared_ptr<ShowVpcRouteResponse> showVpcRoute(
        ShowVpcRouteRequest &request
    );
    std::shared_ptr<ShowVpcTagsResponse> showVpcTags(
        ShowVpcTagsRequest &request
    );
    std::shared_ptr<UpdateVpcResponse> updateVpc(
        UpdateVpcRequest &request
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

template class G42CLOUD_VPC_V2_EXPORT ::G42Cloud::Sdk::Core::ClientBuilder<::G42Cloud::Sdk::Vpc::V2::VpcClient>;

#endif // G42CLOUD_SDK_VPC_V2_VpcClient_H_

