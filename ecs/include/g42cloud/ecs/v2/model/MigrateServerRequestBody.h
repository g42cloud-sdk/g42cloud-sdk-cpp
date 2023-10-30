
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/MigrateServerOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  MigrateServerRequestBody
    : public ModelBase
{
public:
    MigrateServerRequestBody();
    virtual ~MigrateServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateServerRequestBody members


    MigrateServerOption getMigrate() const;
    bool migrateIsSet() const;
    void unsetmigrate();
    void setMigrate(const MigrateServerOption& value);


protected:
    MigrateServerOption migrate_;
    bool migrateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_MigrateServerRequestBody_H_
