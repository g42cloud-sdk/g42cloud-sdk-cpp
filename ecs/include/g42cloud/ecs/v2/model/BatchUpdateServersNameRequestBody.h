
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/ServerId.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  BatchUpdateServersNameRequestBody
    : public ModelBase
{
public:
    BatchUpdateServersNameRequestBody();
    virtual ~BatchUpdateServersNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateServersNameRequestBody members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;
    std::vector<ServerId> servers_;
    bool serversIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_BatchUpdateServersNameRequestBody_H_
