
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupOption_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupOption_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  NeutronUpdateSecurityGroupOption
    : public ModelBase
{
public:
    NeutronUpdateSecurityGroupOption();
    virtual ~NeutronUpdateSecurityGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateSecurityGroupOption members


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupOption_H_
