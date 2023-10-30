
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ObsBucket
    : public ModelBase
{
public:
    ObsBucket();
    virtual ~ObsBucket();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsBucket members


    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);


    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);


    int32_t getIsAuthorized() const;
    bool isAuthorizedIsSet() const;
    void unsetisAuthorized();
    void setIsAuthorized(int32_t value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;
    int32_t isAuthorized_;
    bool isAuthorizedIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_
