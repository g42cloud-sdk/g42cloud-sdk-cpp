
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_Links_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_Links_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  Links
    : public ModelBase
{
public:
    Links();
    virtual ~Links();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Links members


    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);


    std::string getRel() const;
    bool relIsSet() const;
    void unsetrel();
    void setRel(const std::string& value);


protected:
    std::string href_;
    bool hrefIsSet_;
    std::string rel_;
    bool relIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_Links_H_
