
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  AdditionalProperties
    : public ModelBase
{
public:
    AdditionalProperties();
    virtual ~AdditionalProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AdditionalProperties members


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_AdditionalProperties_H_
