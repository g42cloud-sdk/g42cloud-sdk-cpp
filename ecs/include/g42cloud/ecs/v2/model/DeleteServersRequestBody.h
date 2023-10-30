
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ServerId.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  DeleteServersRequestBody
    : public ModelBase
{
public:
    DeleteServersRequestBody();
    virtual ~DeleteServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServersRequestBody members


    bool isDeletePublicip() const;
    bool deletePublicipIsSet() const;
    void unsetdeletePublicip();
    void setDeletePublicip(bool value);


    bool isDeleteVolume() const;
    bool deleteVolumeIsSet() const;
    void unsetdeleteVolume();
    void setDeleteVolume(bool value);


    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);


protected:
    bool deletePublicip_;
    bool deletePublicipIsSet_;
    bool deleteVolume_;
    bool deleteVolumeIsSet_;
    std::vector<ServerId> servers_;
    bool serversIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_
