
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_


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
class G42CLOUD_ECS_V2_EXPORT  UpdateServerAddress
    : public ModelBase
{
public:
    UpdateServerAddress();
    virtual ~UpdateServerAddress();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerAddress members


    int32_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int32_t value);


    std::string getAddr() const;
    bool addrIsSet() const;
    void unsetaddr();
    void setAddr(const std::string& value);


protected:
    int32_t version_;
    bool versionIsSet_;
    std::string addr_;
    bool addrIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_UpdateServerAddress_H_
