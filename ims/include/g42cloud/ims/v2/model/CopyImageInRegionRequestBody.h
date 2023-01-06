
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequestBody_H_

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
class G42CLOUD_IMS_V2_EXPORT  CopyImageInRegionRequestBody
    : public ModelBase
{
public:
    CopyImageInRegionRequestBody();
    virtual ~CopyImageInRegionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyImageInRegionRequestBody members


    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_CopyImageInRegionRequestBody_H_
