
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ThumbnailPara
    : public ModelBase
{
public:
    ThumbnailPara();
    virtual ~ThumbnailPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ThumbnailPara members


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);


    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);


    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


    std::vector<int32_t>& getDots();
    bool dotsIsSet() const;
    void unsetdots();
    void setDots(std::vector<int32_t> value);


    std::vector<int32_t>& getDotsMs();
    bool dotsMsIsSet() const;
    void unsetdotsMs();
    void setDotsMs(std::vector<int32_t> value);


    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);


    int32_t getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(int32_t value);


    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t time_;
    bool timeIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::vector<int32_t> dots_;
    bool dotsIsSet_;
    std::vector<int32_t> dotsMs_;
    bool dotsMsIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;
    int32_t format_;
    bool formatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t maxLength_;
    bool maxLengthIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ThumbnailPara_H_
