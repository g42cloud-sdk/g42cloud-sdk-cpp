
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_

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
class G42CLOUD_IMS_V2_EXPORT  UpdateImageRequestBody
    : public ModelBase
{
public:
    UpdateImageRequestBody();
    virtual ~UpdateImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateImageRequestBody members


    std::string getOp() const;
    bool opIsSet() const;
    void unsetop();
    void setOp(const std::string& value);


    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string op_;
    bool opIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_UpdateImageRequestBody_H_
