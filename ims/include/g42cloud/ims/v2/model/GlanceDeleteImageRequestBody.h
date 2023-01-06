
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  GlanceDeleteImageRequestBody
    : public ModelBase
{
public:
    GlanceDeleteImageRequestBody();
    virtual ~GlanceDeleteImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceDeleteImageRequestBody members


    bool isDeleteBackup() const;
    bool deleteBackupIsSet() const;
    void unsetdeleteBackup();
    void setDeleteBackup(bool value);


protected:
    bool deleteBackup_;
    bool deleteBackupIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_GlanceDeleteImageRequestBody_H_
