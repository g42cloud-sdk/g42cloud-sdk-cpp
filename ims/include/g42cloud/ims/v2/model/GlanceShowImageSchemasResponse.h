
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/AdditionalProperties.h>
#include <g42cloud/core/utils/Object.h>
#include <vector>
#include <g42cloud/ims/v2/model/Links.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceShowImageSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceShowImageSchemasResponse();
    virtual ~GlanceShowImageSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceShowImageSchemasResponse members


    AdditionalProperties getAdditionalProperties() const;
    bool additionalPropertiesIsSet() const;
    void unsetadditionalProperties();
    void setAdditionalProperties(const AdditionalProperties& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);


    std::vector<Links>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Links>& value);


protected:
    AdditionalProperties additionalProperties_;
    bool additionalPropertiesIsSet_;
    std::string name_;
    bool nameIsSet_;
    Object properties_;
    bool propertiesIsSet_;
    std::vector<Links> links_;
    bool linksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_
