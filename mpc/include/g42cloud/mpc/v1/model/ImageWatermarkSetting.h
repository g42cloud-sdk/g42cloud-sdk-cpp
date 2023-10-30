
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/BasicWatermark.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ImageWatermarkSetting
    : public ModelBase
{
public:
    ImageWatermarkSetting();
    virtual ~ImageWatermarkSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageWatermarkSetting members


    std::string getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(const std::string& value);


    std::string getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(const std::string& value);


    std::string getReferpos() const;
    bool referposIsSet() const;
    void unsetreferpos();
    void setReferpos(const std::string& value);


    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);


    std::string getTimelineDuration() const;
    bool timelineDurationIsSet() const;
    void unsettimelineDuration();
    void setTimelineDuration(const std::string& value);


    std::string getOverlayInput() const;
    bool overlayInputIsSet() const;
    void unsetoverlayInput();
    void setOverlayInput(const std::string& value);


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    std::string getBase() const;
    bool baseIsSet() const;
    void unsetbase();
    void setBase(const std::string& value);


protected:
    std::string dx_;
    bool dxIsSet_;
    std::string dy_;
    bool dyIsSet_;
    std::string referpos_;
    bool referposIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineDuration_;
    bool timelineDurationIsSet_;
    std::string overlayInput_;
    bool overlayInputIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string base_;
    bool baseIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ImageWatermarkSetting_H_
