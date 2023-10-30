
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_


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
class G42CLOUD_MPC_V1_EXPORT  VideoProcess
    : public ModelBase
{
public:
    VideoProcess();
    virtual ~VideoProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoProcess members


    int32_t getHlsInitCount() const;
    bool hlsInitCountIsSet() const;
    void unsethlsInitCount();
    void setHlsInitCount(int32_t value);


    int32_t getHlsInitInterval() const;
    bool hlsInitIntervalIsSet() const;
    void unsethlsInitInterval();
    void setHlsInitInterval(int32_t value);


    int32_t getRotate() const;
    bool rotateIsSet() const;
    void unsetrotate();
    void setRotate(int32_t value);


    std::string getAdaptation() const;
    bool adaptationIsSet() const;
    void unsetadaptation();
    void setAdaptation(const std::string& value);


    int32_t getUpsample() const;
    bool upsampleIsSet() const;
    void unsetupsample();
    void setUpsample(int32_t value);


protected:
    int32_t hlsInitCount_;
    bool hlsInitCountIsSet_;
    int32_t hlsInitInterval_;
    bool hlsInitIntervalIsSet_;
    int32_t rotate_;
    bool rotateIsSet_;
    std::string adaptation_;
    bool adaptationIsSet_;
    int32_t upsample_;
    bool upsampleIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_VideoProcess_H_
