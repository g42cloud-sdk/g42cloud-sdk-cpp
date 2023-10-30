
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/ResourceTag.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  AddOrUpdateTagsRequestBody
    : public ModelBase
{
public:
    AddOrUpdateTagsRequestBody();
    virtual ~AddOrUpdateTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddOrUpdateTagsRequestBody members


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


    ResourceTag getImageTag() const;
    bool imageTagIsSet() const;
    void unsetimageTag();
    void setImageTag(const ResourceTag& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string tag_;
    bool tagIsSet_;
    ResourceTag imageTag_;
    bool imageTagIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_AddOrUpdateTagsRequestBody_H_
