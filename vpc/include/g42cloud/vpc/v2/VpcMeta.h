#ifndef G42CLOUD_SDK_VPC_V2_VpcMeta_H_
#define G42CLOUD_SDK_VPC_V2_VpcMeta_H_

#include <g42cloud/core/http/HttpRequestDef.h>
#include <g42cloud/vpc/v2/VpcExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Http;

class G42CLOUD_VPC_V2_EXPORT  VpcMeta {
public:
    static HttpRequestDef genRequestDefForAcceptVpcPeering();
    static HttpRequestDef genRequestDefForAssociateRouteTable();
    static HttpRequestDef genRequestDefForBatchCreateSubnetTags();
    static HttpRequestDef genRequestDefForBatchDeleteSubnetTags();
    static HttpRequestDef genRequestDefForCreatePort();
    static HttpRequestDef genRequestDefForCreateRouteTable();
    static HttpRequestDef genRequestDefForCreateSecurityGroup();
    static HttpRequestDef genRequestDefForCreateSecurityGroupRule();
    static HttpRequestDef genRequestDefForCreateSubnet();
    static HttpRequestDef genRequestDefForCreateSubnetTag();
    static HttpRequestDef genRequestDefForCreateVpcPeering();
    static HttpRequestDef genRequestDefForDeletePort();
    static HttpRequestDef genRequestDefForDeleteRouteTable();
    static HttpRequestDef genRequestDefForDeleteSecurityGroup();
    static HttpRequestDef genRequestDefForDeleteSecurityGroupRule();
    static HttpRequestDef genRequestDefForDeleteSubnet();
    static HttpRequestDef genRequestDefForDeleteSubnetTag();
    static HttpRequestDef genRequestDefForDeleteVpcPeering();
    static HttpRequestDef genRequestDefForDisassociateRouteTable();
    static HttpRequestDef genRequestDefForListPorts();
    static HttpRequestDef genRequestDefForListRouteTables();
    static HttpRequestDef genRequestDefForListSecurityGroupRules();
    static HttpRequestDef genRequestDefForListSecurityGroups();
    static HttpRequestDef genRequestDefForListSubnetTags();
    static HttpRequestDef genRequestDefForListSubnets();
    static HttpRequestDef genRequestDefForListSubnetsByTags();
    static HttpRequestDef genRequestDefForListVpcPeerings();
    static HttpRequestDef genRequestDefForRejectVpcPeering();
    static HttpRequestDef genRequestDefForShowPort();
    static HttpRequestDef genRequestDefForShowQuota();
    static HttpRequestDef genRequestDefForShowRouteTable();
    static HttpRequestDef genRequestDefForShowSecurityGroup();
    static HttpRequestDef genRequestDefForShowSecurityGroupRule();
    static HttpRequestDef genRequestDefForShowSubnet();
    static HttpRequestDef genRequestDefForShowSubnetTags();
    static HttpRequestDef genRequestDefForShowVpcPeering();
    static HttpRequestDef genRequestDefForUpdatePort();
    static HttpRequestDef genRequestDefForUpdateRouteTable();
    static HttpRequestDef genRequestDefForUpdateSubnet();
    static HttpRequestDef genRequestDefForUpdateVpcPeering();
    static HttpRequestDef genRequestDefForCreatePrivateip();
    static HttpRequestDef genRequestDefForDeletePrivateip();
    static HttpRequestDef genRequestDefForListPrivateips();
    static HttpRequestDef genRequestDefForShowNetworkIpAvailabilities();
    static HttpRequestDef genRequestDefForShowPrivateip();
    static HttpRequestDef genRequestDefForNeutronCreateSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronCreateSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronDeleteSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronDeleteSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronListSecurityGroupRules();
    static HttpRequestDef genRequestDefForNeutronListSecurityGroups();
    static HttpRequestDef genRequestDefForNeutronShowSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronShowSecurityGroupRule();
    static HttpRequestDef genRequestDefForNeutronUpdateSecurityGroup();
    static HttpRequestDef genRequestDefForNeutronAddFirewallRule();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronCreateFirewallRule();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronDeleteFirewallRule();
    static HttpRequestDef genRequestDefForNeutronListFirewallGroups();
    static HttpRequestDef genRequestDefForNeutronListFirewallPolicies();
    static HttpRequestDef genRequestDefForNeutronListFirewallRules();
    static HttpRequestDef genRequestDefForNeutronRemoveFirewallRule();
    static HttpRequestDef genRequestDefForNeutronShowFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronShowFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronShowFirewallRule();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallGroup();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallPolicy();
    static HttpRequestDef genRequestDefForNeutronUpdateFirewallRule();
    static HttpRequestDef genRequestDefForBatchCreateVpcTags();
    static HttpRequestDef genRequestDefForBatchDeleteVpcTags();
    static HttpRequestDef genRequestDefForCreateVpc();
    static HttpRequestDef genRequestDefForCreateVpcResourceTag();
    static HttpRequestDef genRequestDefForCreateVpcRoute();
    static HttpRequestDef genRequestDefForDeleteVpc();
    static HttpRequestDef genRequestDefForDeleteVpcRoute();
    static HttpRequestDef genRequestDefForDeleteVpcTag();
    static HttpRequestDef genRequestDefForListVpcRoutes();
    static HttpRequestDef genRequestDefForListVpcTags();
    static HttpRequestDef genRequestDefForListVpcs();
    static HttpRequestDef genRequestDefForListVpcsByTags();
    static HttpRequestDef genRequestDefForShowVpc();
    static HttpRequestDef genRequestDefForShowVpcRoute();
    static HttpRequestDef genRequestDefForShowVpcTags();
    static HttpRequestDef genRequestDefForUpdateVpc();
};

}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_VpcMeta_H_
