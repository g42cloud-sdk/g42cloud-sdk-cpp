
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_


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
class G42CLOUD_MPC_V1_EXPORT  VideoInfo
    : public ModelBase
{
public:
    VideoInfo();
    virtual ~VideoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoInfo members


    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);


    int64_t getBitrateBps() const;
    bool bitrateBpsIsSet() const;
    void unsetbitrateBps();
    void setBitrateBps(int64_t value);


    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);


protected:
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int64_t bitrateBps_;
    bool bitrateBpsIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    std::string codec_;
    bool codecIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_
