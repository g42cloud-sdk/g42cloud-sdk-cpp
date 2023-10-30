
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/ThumbnailPara.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateThumbReq
    : public ModelBase
{
public:
    CreateThumbReq();
    virtual ~CreateThumbReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateThumbReq members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);


    ThumbnailPara getThumbnailPara() const;
    bool thumbnailParaIsSet() const;
    void unsetthumbnailPara();
    void setThumbnailPara(const ThumbnailPara& value);


    int32_t getTar() const;
    bool tarIsSet() const;
    void unsettar();
    void setTar(int32_t value);


    int32_t getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(int32_t value);


    int32_t getOriginalDir() const;
    bool originalDirIsSet() const;
    void unsetoriginalDir();
    void setOriginalDir(int32_t value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    ThumbnailPara thumbnailPara_;
    bool thumbnailParaIsSet_;
    int32_t tar_;
    bool tarIsSet_;
    int32_t sync_;
    bool syncIsSet_;
    int32_t originalDir_;
    bool originalDirIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateThumbReq_H_
