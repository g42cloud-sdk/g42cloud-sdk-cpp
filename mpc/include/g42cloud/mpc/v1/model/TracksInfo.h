
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_

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
class G42CLOUD_MPC_V1_EXPORT  TracksInfo
    : public ModelBase
{
public:
    TracksInfo();
    virtual ~TracksInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TracksInfo members


    std::string getChannelLayout() const;
    bool channelLayoutIsSet() const;
    void unsetchannelLayout();
    void setChannelLayout(const std::string& value);


    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string channelLayout_;
    bool channelLayoutIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_TracksInfo_H_
