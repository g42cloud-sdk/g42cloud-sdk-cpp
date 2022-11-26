
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  FlavorExtraSpec
    : public ModelBase
{
public:
    FlavorExtraSpec();
    virtual ~FlavorExtraSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlavorExtraSpec members


    std::string getEcsperformancetype() const;
    bool ecsperformancetypeIsSet() const;
    void unsetecsperformancetype();
    void setEcsperformancetype(const std::string& value);


    std::string getHwnumaNodes() const;
    bool hwnumaNodesIsSet() const;
    void unsethwnumaNodes();
    void setHwnumaNodes(const std::string& value);


    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


    std::string getHpetSupport() const;
    bool hpetSupportIsSet() const;
    void unsethpetSupport();
    void setHpetSupport(const std::string& value);


    std::string getInstanceVnictype() const;
    bool instanceVnictypeIsSet() const;
    void unsetinstanceVnictype();
    void setInstanceVnictype(const std::string& value);


    std::string getInstanceVnicinstanceBandwidth() const;
    bool instanceVnicinstanceBandwidthIsSet() const;
    void unsetinstanceVnicinstanceBandwidth();
    void setInstanceVnicinstanceBandwidth(const std::string& value);


    std::string getInstanceVnicmaxCount() const;
    bool instanceVnicmaxCountIsSet() const;
    void unsetinstanceVnicmaxCount();
    void setInstanceVnicmaxCount(const std::string& value);


    std::string getQuotalocalDisk() const;
    bool quotalocalDiskIsSet() const;
    void unsetquotalocalDisk();
    void setQuotalocalDisk(const std::string& value);


    std::string getQuotanvmeSsd() const;
    bool quotanvmeSsdIsSet() const;
    void unsetquotanvmeSsd();
    void setQuotanvmeSsd(const std::string& value);


    std::string getExtraSpeciopersistentGrant() const;
    bool extraSpeciopersistentGrantIsSet() const;
    void unsetextraSpeciopersistentGrant();
    void setExtraSpeciopersistentGrant(const std::string& value);


    std::string getEcsgeneration() const;
    bool ecsgenerationIsSet() const;
    void unsetecsgeneration();
    void setEcsgeneration(const std::string& value);


    std::string getEcsvirtualizationEnvTypes() const;
    bool ecsvirtualizationEnvTypesIsSet() const;
    void unsetecsvirtualizationEnvTypes();
    void setEcsvirtualizationEnvTypes(const std::string& value);


    std::string getPciPassthroughenableGpu() const;
    bool pciPassthroughenableGpuIsSet() const;
    void unsetpciPassthroughenableGpu();
    void setPciPassthroughenableGpu(const std::string& value);


    std::string getPciPassthroughgpuSpecs() const;
    bool pciPassthroughgpuSpecsIsSet() const;
    void unsetpciPassthroughgpuSpecs();
    void setPciPassthroughgpuSpecs(const std::string& value);


    std::string getPciPassthroughalias() const;
    bool pciPassthroughaliasIsSet() const;
    void unsetpciPassthroughalias();
    void setPciPassthroughalias(const std::string& value);


    std::string getCondoperationstatus() const;
    bool condoperationstatusIsSet() const;
    void unsetcondoperationstatus();
    void setCondoperationstatus(const std::string& value);


    std::string getCondoperationaz() const;
    bool condoperationazIsSet() const;
    void unsetcondoperationaz();
    void setCondoperationaz(const std::string& value);


    std::string getQuotamaxRate() const;
    bool quotamaxRateIsSet() const;
    void unsetquotamaxRate();
    void setQuotamaxRate(const std::string& value);


    std::string getQuotaminRate() const;
    bool quotaminRateIsSet() const;
    void unsetquotaminRate();
    void setQuotaminRate(const std::string& value);


    std::string getQuotamaxPps() const;
    bool quotamaxPpsIsSet() const;
    void unsetquotamaxPps();
    void setQuotamaxPps(const std::string& value);


    std::string getCondoperationcharge() const;
    bool condoperationchargeIsSet() const;
    void unsetcondoperationcharge();
    void setCondoperationcharge(const std::string& value);


    std::string getCondoperationchargestop() const;
    bool condoperationchargestopIsSet() const;
    void unsetcondoperationchargestop();
    void setCondoperationchargestop(const std::string& value);


    std::string getCondspotoperationaz() const;
    bool condspotoperationazIsSet() const;
    void unsetcondspotoperationaz();
    void setCondspotoperationaz(const std::string& value);


    std::string getCondoperationroles() const;
    bool condoperationrolesIsSet() const;
    void unsetcondoperationroles();
    void setCondoperationroles(const std::string& value);


    std::string getCondspotoperationstatus() const;
    bool condspotoperationstatusIsSet() const;
    void unsetcondspotoperationstatus();
    void setCondspotoperationstatus(const std::string& value);


    std::string getCondnetwork() const;
    bool condnetworkIsSet() const;
    void unsetcondnetwork();
    void setCondnetwork(const std::string& value);


    std::string getCondstorage() const;
    bool condstorageIsSet() const;
    void unsetcondstorage();
    void setCondstorage(const std::string& value);


    std::string getCondcomputeliveResizable() const;
    bool condcomputeliveResizableIsSet() const;
    void unsetcondcomputeliveResizable();
    void setCondcomputeliveResizable(const std::string& value);


    std::string getCondcompute() const;
    bool condcomputeIsSet() const;
    void unsetcondcompute();
    void setCondcompute(const std::string& value);


    std::string getInfogpuname() const;
    bool infogpunameIsSet() const;
    void unsetinfogpuname();
    void setInfogpuname(const std::string& value);


    std::string getInfocpuname() const;
    bool infocpunameIsSet() const;
    void unsetinfocpuname();
    void setInfocpuname(const std::string& value);


    std::string getQuotagpu() const;
    bool quotagpuIsSet() const;
    void unsetquotagpu();
    void setQuotagpu(const std::string& value);


    std::string getEcsinstanceArchitecture() const;
    bool ecsinstanceArchitectureIsSet() const;
    void unsetecsinstanceArchitecture();
    void setEcsinstanceArchitecture(const std::string& value);


protected:
    std::string ecsperformancetype_;
    bool ecsperformancetypeIsSet_;
    std::string hwnumaNodes_;
    bool hwnumaNodesIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string hpetSupport_;
    bool hpetSupportIsSet_;
    std::string instanceVnictype_;
    bool instanceVnictypeIsSet_;
    std::string instanceVnicinstanceBandwidth_;
    bool instanceVnicinstanceBandwidthIsSet_;
    std::string instanceVnicmaxCount_;
    bool instanceVnicmaxCountIsSet_;
    std::string quotalocalDisk_;
    bool quotalocalDiskIsSet_;
    std::string quotanvmeSsd_;
    bool quotanvmeSsdIsSet_;
    std::string extraSpeciopersistentGrant_;
    bool extraSpeciopersistentGrantIsSet_;
    std::string ecsgeneration_;
    bool ecsgenerationIsSet_;
    std::string ecsvirtualizationEnvTypes_;
    bool ecsvirtualizationEnvTypesIsSet_;
    std::string pciPassthroughenableGpu_;
    bool pciPassthroughenableGpuIsSet_;
    std::string pciPassthroughgpuSpecs_;
    bool pciPassthroughgpuSpecsIsSet_;
    std::string pciPassthroughalias_;
    bool pciPassthroughaliasIsSet_;
    std::string condoperationstatus_;
    bool condoperationstatusIsSet_;
    std::string condoperationaz_;
    bool condoperationazIsSet_;
    std::string quotamaxRate_;
    bool quotamaxRateIsSet_;
    std::string quotaminRate_;
    bool quotaminRateIsSet_;
    std::string quotamaxPps_;
    bool quotamaxPpsIsSet_;
    std::string condoperationcharge_;
    bool condoperationchargeIsSet_;
    std::string condoperationchargestop_;
    bool condoperationchargestopIsSet_;
    std::string condspotoperationaz_;
    bool condspotoperationazIsSet_;
    std::string condoperationroles_;
    bool condoperationrolesIsSet_;
    std::string condspotoperationstatus_;
    bool condspotoperationstatusIsSet_;
    std::string condnetwork_;
    bool condnetworkIsSet_;
    std::string condstorage_;
    bool condstorageIsSet_;
    std::string condcomputeliveResizable_;
    bool condcomputeliveResizableIsSet_;
    std::string condcompute_;
    bool condcomputeIsSet_;
    std::string infogpuname_;
    bool infogpunameIsSet_;
    std::string infocpuname_;
    bool infocpunameIsSet_;
    std::string quotagpu_;
    bool quotagpuIsSet_;
    std::string ecsinstanceArchitecture_;
    bool ecsinstanceArchitectureIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_FlavorExtraSpec_H_
