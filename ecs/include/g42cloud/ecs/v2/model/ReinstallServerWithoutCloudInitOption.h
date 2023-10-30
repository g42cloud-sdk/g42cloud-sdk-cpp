
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitOption_H_


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
class G42CLOUD_ECS_V2_EXPORT  ReinstallServerWithoutCloudInitOption
    : public ModelBase
{
public:
    ReinstallServerWithoutCloudInitOption();
    virtual ~ReinstallServerWithoutCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallServerWithoutCloudInitOption members


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
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithoutCloudInitOption_H_
