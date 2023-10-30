
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/NovaLink.h>
#include <string>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaServerFlavor
    : public ModelBase
{
public:
    NovaServerFlavor();
    virtual ~NovaServerFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaServerFlavor members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);


    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);


    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);


    int32_t getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(int32_t value);


    int32_t getEphemeral() const;
    bool ephemeralIsSet() const;
    void unsetephemeral();
    void setEphemeral(int32_t value);


    int32_t getSwap() const;
    bool swapIsSet() const;
    void unsetswap();
    void setSwap(int32_t value);


    std::string getOriginalName() const;
    bool originalNameIsSet() const;
    void unsetoriginalName();
    void setOriginalName(const std::string& value);


    std::map<std::string, std::string>& getExtraSpecs();
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const std::map<std::string, std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    int32_t disk_;
    bool diskIsSet_;
    int32_t ephemeral_;
    bool ephemeralIsSet_;
    int32_t swap_;
    bool swapIsSet_;
    std::string originalName_;
    bool originalNameIsSet_;
    std::map<std::string, std::string> extraSpecs_;
    bool extraSpecsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_
