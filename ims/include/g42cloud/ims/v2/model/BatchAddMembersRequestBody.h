
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  BatchAddMembersRequestBody
    : public ModelBase
{
public:
    BatchAddMembersRequestBody();
    virtual ~BatchAddMembersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddMembersRequestBody members


    std::vector<std::string>& getImages();
    bool imagesIsSet() const;
    void unsetimages();
    void setImages(const std::vector<std::string>& value);


    std::vector<std::string>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<std::string>& value);


protected:
    std::vector<std::string> images_;
    bool imagesIsSet_;
    std::vector<std::string> projects_;
    bool projectsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_BatchAddMembersRequestBody_H_
