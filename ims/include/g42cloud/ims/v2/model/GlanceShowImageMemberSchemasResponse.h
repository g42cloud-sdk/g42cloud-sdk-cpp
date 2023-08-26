
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/core/utils/Object.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceShowImageMemberSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceShowImageMemberSchemasResponse();
    virtual ~GlanceShowImageMemberSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceShowImageMemberSchemasResponse members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object properties_;
    bool propertiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_
