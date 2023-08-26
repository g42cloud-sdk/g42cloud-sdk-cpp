
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResult_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/FlavorExtraSpec.h>
#include <g42cloud/ecs/v2/model/FlavorLink.h>
#include <string>
#include <g42cloud/core/utils/Object.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListResizeFlavorsResult
    : public ModelBase
{
public:
    ListResizeFlavorsResult();
    virtual ~ListResizeFlavorsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResizeFlavorsResult members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);


    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);


    std::string getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(const std::string& value);


    std::string getSwap() const;
    bool swapIsSet() const;
    void unsetswap();
    void setSwap(const std::string& value);


    int32_t getOSFLVEXTDATAephemeral() const;
    bool oSFLVEXTDATAephemeralIsSet() const;
    void unsetoSFLVEXTDATAephemeral();
    void setOSFLVEXTDATAephemeral(int32_t value);


    bool isOSFLVDISABLEDdisabled() const;
    bool oSFLVDISABLEDdisabledIsSet() const;
    void unsetoSFLVDISABLEDdisabled();
    void setOSFLVDISABLEDdisabled(bool value);


    float getRxtxFactor() const;
    bool rxtxFactorIsSet() const;
    void unsetrxtxFactor();
    void setRxtxFactor(float value);


    std::string getRxtxQuota() const;
    bool rxtxQuotaIsSet() const;
    void unsetrxtxQuota();
    void setRxtxQuota(const std::string& value);


    std::string getRxtxCap() const;
    bool rxtxCapIsSet() const;
    void unsetrxtxCap();
    void setRxtxCap(const std::string& value);


    bool isOsFlavorAccessisPublic() const;
    bool osFlavorAccessisPublicIsSet() const;
    void unsetosFlavorAccessisPublic();
    void setOsFlavorAccessisPublic(bool value);


    std::vector<FlavorLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<FlavorLink>& value);


    FlavorExtraSpec getExtraSpecs() const;
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const FlavorExtraSpec& value);


    Object getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(const Object& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    std::string disk_;
    bool diskIsSet_;
    std::string swap_;
    bool swapIsSet_;
    int32_t oSFLVEXTDATAephemeral_;
    bool oSFLVEXTDATAephemeralIsSet_;
    bool oSFLVDISABLEDdisabled_;
    bool oSFLVDISABLEDdisabledIsSet_;
    float rxtxFactor_;
    bool rxtxFactorIsSet_;
    std::string rxtxQuota_;
    bool rxtxQuotaIsSet_;
    std::string rxtxCap_;
    bool rxtxCapIsSet_;
    bool osFlavorAccessisPublic_;
    bool osFlavorAccessisPublicIsSet_;
    std::vector<FlavorLink> links_;
    bool linksIsSet_;
    FlavorExtraSpec extraSpecs_;
    bool extraSpecsIsSet_;
    Object instanceQuota_;
    bool instanceQuotaIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResult_H_
