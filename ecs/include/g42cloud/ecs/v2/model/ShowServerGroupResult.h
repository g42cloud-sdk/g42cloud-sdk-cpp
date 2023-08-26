
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ShowServerGroupResult_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ShowServerGroupResult_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

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
class G42CLOUD_ECS_V2_EXPORT  ShowServerGroupResult
    : public ModelBase
{
public:
    ShowServerGroupResult();
    virtual ~ShowServerGroupResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerGroupResult members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<std::string>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<std::string>& value);


    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::vector<std::string>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> members_;
    bool membersIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ShowServerGroupResult_H_
