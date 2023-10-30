
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_


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
class G42CLOUD_MPC_V1_EXPORT  AudioProcess
    : public ModelBase
{
public:
    AudioProcess();
    virtual ~AudioProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioProcess members


    std::string getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const std::string& value);


    int32_t getVolumeExpr() const;
    bool volumeExprIsSet() const;
    void unsetvolumeExpr();
    void setVolumeExpr(int32_t value);


protected:
    std::string volume_;
    bool volumeIsSet_;
    int32_t volumeExpr_;
    bool volumeExprIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_
