
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ims/v2/model/OsVersionInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  ListOsVersionsResponseBody
    : public ModelBase
{
public:
    ListOsVersionsResponseBody();
    virtual ~ListOsVersionsResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOsVersionsResponseBody members


    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);


    std::vector<OsVersionInfo>& getVersionList();
    bool versionListIsSet() const;
    void unsetversionList();
    void setVersionList(const std::vector<OsVersionInfo>& value);


protected:
    std::string platform_;
    bool platformIsSet_;
    std::vector<OsVersionInfo> versionList_;
    bool versionListIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_
