
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_

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
class G42CLOUD_MPC_V1_EXPORT  AnimatedGraphicsOutputParam
    : public ModelBase
{
public:
    AnimatedGraphicsOutputParam();
    virtual ~AnimatedGraphicsOutputParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AnimatedGraphicsOutputParam members


    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


    int32_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int32_t value);


    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(int32_t value);


    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


protected:
    std::string format_;
    bool formatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t start_;
    bool startIsSet_;
    int32_t end_;
    bool endIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AnimatedGraphicsOutputParam_H_
