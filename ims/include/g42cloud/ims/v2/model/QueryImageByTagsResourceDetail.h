
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_

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
class G42CLOUD_IMS_V2_EXPORT  QueryImageByTagsResourceDetail
    : public ModelBase
{
public:
    QueryImageByTagsResourceDetail();
    virtual ~QueryImageByTagsResourceDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryImageByTagsResourceDetail members


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_
