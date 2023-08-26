
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_

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
class G42CLOUD_ECS_V2_EXPORT  ServerExtendVolumeAttachment
    : public ModelBase
{
public:
    ServerExtendVolumeAttachment();
    virtual ~ServerExtendVolumeAttachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerExtendVolumeAttachment members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(const std::string& value);


    std::string getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(const std::string& value);


    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string bootIndex_;
    bool bootIndexIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerExtendVolumeAttachment_H_
