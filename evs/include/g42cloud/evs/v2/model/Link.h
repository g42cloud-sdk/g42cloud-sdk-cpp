
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_Link_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_Link_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  Link
    : public ModelBase
{
public:
    Link();
    virtual ~Link();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Link members


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

#endif // G42CLOUD_SDK_EVS_V2_MODEL_Link_H_
