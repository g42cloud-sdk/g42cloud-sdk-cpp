
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OutputThumbnailPara
    : public ModelBase
{
public:
    OutputThumbnailPara();
    virtual ~OutputThumbnailPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputThumbnailPara members


    int32_t getTotalPictures() const;
    bool totalPicturesIsSet() const;
    void unsettotalPictures();
    void setTotalPictures(int32_t value);


    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    int32_t totalPictures_;
    bool totalPicturesIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_
