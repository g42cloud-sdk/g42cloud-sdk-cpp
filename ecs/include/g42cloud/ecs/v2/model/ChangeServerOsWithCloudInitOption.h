
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/ChangeSeversOsMetadata.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ChangeServerOsWithCloudInitOption
    : public ModelBase
{
public:
    ChangeServerOsWithCloudInitOption();
    virtual ~ChangeServerOsWithCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithCloudInitOption members


    std::string getAdminpass() const;
    bool adminpassIsSet() const;
    void unsetadminpass();
    void setAdminpass(const std::string& value);


    std::string getKeyname() const;
    bool keynameIsSet() const;
    void unsetkeyname();
    void setKeyname(const std::string& value);


    std::string getUserid() const;
    bool useridIsSet() const;
    void unsetuserid();
    void setUserid(const std::string& value);


    std::string getImageid() const;
    bool imageidIsSet() const;
    void unsetimageid();
    void setImageid(const std::string& value);


    ChangeSeversOsMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ChangeSeversOsMetadata& value);


    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string adminpass_;
    bool adminpassIsSet_;
    std::string keyname_;
    bool keynameIsSet_;
    std::string userid_;
    bool useridIsSet_;
    std::string imageid_;
    bool imageidIsSet_;
    ChangeSeversOsMetadata metadata_;
    bool metadataIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_
