
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_EditSetting_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_EditSetting_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MosaicInfo.h>
#include <g42cloud/mpc/v1/model/AvParameters.h>
#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/ImageWatermarkSetting.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  EditSetting
    : public ModelBase
{
public:
    EditSetting();
    virtual ~EditSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditSetting members


    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);


    std::string getTimelineEnd() const;
    bool timelineEndIsSet() const;
    void unsettimelineEnd();
    void setTimelineEnd(const std::string& value);


    int32_t getTransTemplateId() const;
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(int32_t value);


    AvParameters getAvParameter() const;
    bool avParameterIsSet() const;
    void unsetavParameter();
    void setAvParameter(const AvParameters& value);


    std::vector<MosaicInfo>& getMosaics();
    bool mosaicsIsSet() const;
    void unsetmosaics();
    void setMosaics(const std::vector<MosaicInfo>& value);


    std::vector<ImageWatermarkSetting>& getImageWatermarks();
    bool imageWatermarksIsSet() const;
    void unsetimageWatermarks();
    void setImageWatermarks(const std::vector<ImageWatermarkSetting>& value);


    std::vector<ObsObjInfo>& getHeads();
    bool headsIsSet() const;
    void unsetheads();
    void setHeads(const std::vector<ObsObjInfo>& value);


    std::vector<ObsObjInfo>& getTails();
    bool tailsIsSet() const;
    void unsettails();
    void setTails(const std::vector<ObsObjInfo>& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineEnd_;
    bool timelineEndIsSet_;
    int32_t transTemplateId_;
    bool transTemplateIdIsSet_;
    AvParameters avParameter_;
    bool avParameterIsSet_;
    std::vector<MosaicInfo> mosaics_;
    bool mosaicsIsSet_;
    std::vector<ImageWatermarkSetting> imageWatermarks_;
    bool imageWatermarksIsSet_;
    std::vector<ObsObjInfo> heads_;
    bool headsIsSet_;
    std::vector<ObsObjInfo> tails_;
    bool tailsIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_EditSetting_H_
