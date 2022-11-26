
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_

#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  BindingVifDetails
    : public ModelBase
{
public:
    BindingVifDetails();
    virtual ~BindingVifDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BindingVifDetails members


    bool isPrimaryInterface() const;
    bool primaryInterfaceIsSet() const;
    void unsetprimaryInterface();
    void setPrimaryInterface(bool value);


    bool isPortFilter() const;
    bool portFilterIsSet() const;
    void unsetportFilter();
    void setPortFilter(bool value);


    bool isOvsHybridPlug() const;
    bool ovsHybridPlugIsSet() const;
    void unsetovsHybridPlug();
    void setOvsHybridPlug(bool value);


protected:
    bool primaryInterface_;
    bool primaryInterfaceIsSet_;
    bool portFilter_;
    bool portFilterIsSet_;
    bool ovsHybridPlug_;
    bool ovsHybridPlugIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
