
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_VideoCommon_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_VideoCommon_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/OutputPolicy.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  VideoCommon
    : public ModelBase
{
public:
    VideoCommon();
    virtual ~VideoCommon();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoCommon members


    std::string getOutputPolicy() const;
    bool outputPolicyIsSet() const;
    void unsetoutputPolicy();
    void setOutputPolicy(const std::string& value);


    int32_t getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(int32_t value);


    int32_t getProfile() const;
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(int32_t value);


    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);


    int32_t getPreset() const;
    bool presetIsSet() const;
    void unsetpreset();
    void setPreset(int32_t value);


    int32_t getMaxIframesInterval() const;
    bool maxIframesIntervalIsSet() const;
    void unsetmaxIframesInterval();
    void setMaxIframesInterval(int32_t value);


    int32_t getBframesCount() const;
    bool bframesCountIsSet() const;
    void unsetbframesCount();
    void setBframesCount(int32_t value);


    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


    int32_t getBlackCut() const;
    bool blackCutIsSet() const;
    void unsetblackCut();
    void setBlackCut(int32_t value);


protected:
    std::string outputPolicy_;
    bool outputPolicyIsSet_;
    int32_t codec_;
    bool codecIsSet_;
    int32_t profile_;
    bool profileIsSet_;
    int32_t level_;
    bool levelIsSet_;
    int32_t preset_;
    bool presetIsSet_;
    int32_t maxIframesInterval_;
    bool maxIframesIntervalIsSet_;
    int32_t bframesCount_;
    bool bframesCountIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    int32_t blackCut_;
    bool blackCutIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_VideoCommon_H_
