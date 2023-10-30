
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_XCodeError_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_XCodeError_H_


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
class G42CLOUD_MPC_V1_EXPORT  XCodeError
    : public ModelBase
{
public:
    XCodeError();
    virtual ~XCodeError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// XCodeError members


    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);


    std::string getMsg() const;
    bool msgIsSet() const;
    void unsetmsg();
    void setMsg(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string msg_;
    bool msgIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_XCodeError_H_
