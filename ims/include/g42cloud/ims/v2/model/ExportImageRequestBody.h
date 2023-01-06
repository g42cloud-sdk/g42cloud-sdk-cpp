
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_

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
class G42CLOUD_IMS_V2_EXPORT  ExportImageRequestBody
    : public ModelBase
{
public:
    ExportImageRequestBody();
    virtual ~ExportImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExportImageRequestBody members


    std::string getBucketUrl() const;
    bool bucketUrlIsSet() const;
    void unsetbucketUrl();
    void setBucketUrl(const std::string& value);


    std::string getFileFormat() const;
    bool fileFormatIsSet() const;
    void unsetfileFormat();
    void setFileFormat(const std::string& value);


    bool isIsQuickExport() const;
    bool isQuickExportIsSet() const;
    void unsetisQuickExport();
    void setIsQuickExport(bool value);


protected:
    std::string bucketUrl_;
    bool bucketUrlIsSet_;
    std::string fileFormat_;
    bool fileFormatIsSet_;
    bool isQuickExport_;
    bool isQuickExportIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ExportImageRequestBody_H_
