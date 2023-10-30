
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <g42cloud/ims/v2/model/Links.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  OsVersionResponse
    : public ModelBase
{
public:
    OsVersionResponse();
    virtual ~OsVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OsVersionResponse members


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::vector<Links>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Links>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<Links> links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_OsVersionResponse_H_
