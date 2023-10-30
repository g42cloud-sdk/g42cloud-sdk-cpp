
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_PicInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_PicInfo_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  PicInfo
    : public ModelBase
{
public:
    PicInfo();
    virtual ~PicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PicInfo members


    std::string getPicName() const;
    bool picNameIsSet() const;
    void unsetpicName();
    void setPicName(const std::string& value);


protected:
    std::string picName_;
    bool picNameIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_PicInfo_H_
