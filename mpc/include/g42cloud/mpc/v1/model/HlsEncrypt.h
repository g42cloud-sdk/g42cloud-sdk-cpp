
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  HlsEncrypt
    : public ModelBase
{
public:
    HlsEncrypt();
    virtual ~HlsEncrypt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HlsEncrypt members


    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


    std::string getIv() const;
    bool ivIsSet() const;
    void unsetiv();
    void setIv(const std::string& value);


    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string iv_;
    bool ivIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_HlsEncrypt_H_
