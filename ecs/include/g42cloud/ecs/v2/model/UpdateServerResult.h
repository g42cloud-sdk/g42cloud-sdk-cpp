
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/SimpleFlavor.h>
#include <g42cloud/ecs/v2/model/Link.h>
#include <string>
#include <g42cloud/ecs/v2/model/UpdateServerAddress.h>
#include <map>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  UpdateServerResult
    : public ModelBase
{
public:
    UpdateServerResult();
    virtual ~UpdateServerResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerResult members


    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);


    std::string getAccessIPv4() const;
    bool accessIPv4IsSet() const;
    void unsetaccessIPv4();
    void setAccessIPv4(const std::string& value);


    std::string getAccessIPv6() const;
    bool accessIPv6IsSet() const;
    void unsetaccessIPv6();
    void setAccessIPv6(const std::string& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::map<std::string, std::vector<UpdateServerAddress>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<UpdateServerAddress>>& value);


    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);


    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);


    SimpleFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const SimpleFlavor& value);


    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);


    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);


    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getOSEXTSRVATTRhostname() const;
    bool oSEXTSRVATTRhostnameIsSet() const;
    void unsetoSEXTSRVATTRhostname();
    void setOSEXTSRVATTRhostname(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::map<std::string, std::vector<UpdateServerAddress>> addresses_;
    bool addressesIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    SimpleFlavor flavor_;
    bool flavorIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string oSEXTSRVATTRhostname_;
    bool oSEXTSRVATTRhostnameIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_
