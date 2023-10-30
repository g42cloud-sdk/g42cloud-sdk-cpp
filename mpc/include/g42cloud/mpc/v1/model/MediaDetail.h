
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/OutputWatermarkPara.h>
#include <string>
#include <g42cloud/mpc/v1/model/OutputThumbnailPara.h>
#include <g42cloud/mpc/v1/model/OutputVideoPara.h>
#include <g42cloud/mpc/v1/model/OriginPara.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MediaDetail
    : public ModelBase
{
public:
    MediaDetail();
    virtual ~MediaDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MediaDetail members


    std::vector<std::string>& getFeatures();
    bool featuresIsSet() const;
    void unsetfeatures();
    void setFeatures(const std::vector<std::string>& value);


    OriginPara getOriginPara() const;
    bool originParaIsSet() const;
    void unsetoriginPara();
    void setOriginPara(const OriginPara& value);


    std::vector<OutputVideoPara>& getOutputVideoParas();
    bool outputVideoParasIsSet() const;
    void unsetoutputVideoParas();
    void setOutputVideoParas(const std::vector<OutputVideoPara>& value);


    OutputThumbnailPara getOutputThumbnailPara() const;
    bool outputThumbnailParaIsSet() const;
    void unsetoutputThumbnailPara();
    void setOutputThumbnailPara(const OutputThumbnailPara& value);


    OutputWatermarkPara getOutputWatermarkParas() const;
    bool outputWatermarkParasIsSet() const;
    void unsetoutputWatermarkParas();
    void setOutputWatermarkParas(const OutputWatermarkPara& value);


protected:
    std::vector<std::string> features_;
    bool featuresIsSet_;
    OriginPara originPara_;
    bool originParaIsSet_;
    std::vector<OutputVideoPara> outputVideoParas_;
    bool outputVideoParasIsSet_;
    OutputThumbnailPara outputThumbnailPara_;
    bool outputThumbnailParaIsSet_;
    OutputWatermarkPara outputWatermarkParas_;
    bool outputWatermarkParasIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_
