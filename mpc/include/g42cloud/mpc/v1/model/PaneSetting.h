
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  PaneSetting
    : public ModelBase
{
public:
    PaneSetting();
    virtual ~PaneSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PaneSetting members


    std::string getPaneId() const;
    bool paneIdIsSet() const;
    void unsetpaneId();
    void setPaneId(const std::string& value);


    std::string getX() const;
    bool XIsSet() const;
    void unsetx();
    void setX(const std::string& value);


    std::string getY() const;
    bool YIsSet() const;
    void unsety();
    void setY(const std::string& value);


    std::string getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(const std::string& value);


    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);


protected:
    std::string paneId_;
    bool paneIdIsSet_;
    std::string x_;
    bool xIsSet_;
    std::string y_;
    bool yIsSet_;
    std::string width_;
    bool widthIsSet_;
    std::string height_;
    bool heightIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_PaneSetting_H_
