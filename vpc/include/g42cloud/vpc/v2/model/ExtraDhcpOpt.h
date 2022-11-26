
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ExtraDhcpOpt
    : public ModelBase
{
public:
    ExtraDhcpOpt();
    virtual ~ExtraDhcpOpt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtraDhcpOpt members


    std::string getOptName() const;
    bool optNameIsSet() const;
    void unsetoptName();
    void setOptName(const std::string& value);


    std::string getOptValue() const;
    bool optValueIsSet() const;
    void unsetoptValue();
    void setOptValue(const std::string& value);


protected:
    std::string optName_;
    bool optNameIsSet_;
    std::string optValue_;
    bool optValueIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ExtraDhcpOpt_H_
