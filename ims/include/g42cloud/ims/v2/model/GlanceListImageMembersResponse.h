
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/GlanceImageMembers.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceListImageMembersResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceListImageMembersResponse();
    virtual ~GlanceListImageMembersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImageMembersResponse members


    std::vector<GlanceImageMembers>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<GlanceImageMembers>& value);


    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);


protected:
    std::vector<GlanceImageMembers> members_;
    bool membersIsSet_;
    std::string schema_;
    bool schemaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceListImageMembersResponse_H_
