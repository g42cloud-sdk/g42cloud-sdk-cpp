
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  SubJobEntities
    : public ModelBase
{
public:
    SubJobEntities();
    virtual ~SubJobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubJobEntities members


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);


    std::string getErrorcodeMessage() const;
    bool errorcodeMessageIsSet() const;
    void unseterrorcodeMessage();
    void setErrorcodeMessage(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string nicId_;
    bool nicIdIsSet_;
    std::string errorcodeMessage_;
    bool errorcodeMessageIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_SubJobEntities_H_
