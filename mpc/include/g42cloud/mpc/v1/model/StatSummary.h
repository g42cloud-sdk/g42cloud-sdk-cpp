
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_StatSummary_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_StatSummary_H_


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
class G42CLOUD_MPC_V1_EXPORT  StatSummary
    : public ModelBase
{
public:
    StatSummary();
    virtual ~StatSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatSummary members


    float getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(float value);


    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);


protected:
    float value_;
    bool valueIsSet_;
    std::string date_;
    bool dateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_StatSummary_H_
