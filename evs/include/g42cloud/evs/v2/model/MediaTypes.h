
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  MediaTypes
    : public ModelBase
{
public:
    MediaTypes();
    virtual ~MediaTypes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MediaTypes members


    std::string getBase() const;
    bool baseIsSet() const;
    void unsetbase();
    void setBase(const std::string& value);


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string base_;
    bool baseIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_MediaTypes_H_
