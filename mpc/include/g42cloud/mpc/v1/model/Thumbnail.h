
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ObsObjInfo.h>
#include <g42cloud/mpc/v1/model/ThumbnailPara.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  Thumbnail
    : public ModelBase
{
public:
    Thumbnail();
    virtual ~Thumbnail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Thumbnail members


    int32_t getTar() const;
    bool tarIsSet() const;
    void unsettar();
    void setTar(int32_t value);


    ObsObjInfo getOut() const;
    bool outIsSet() const;
    void unsetout();
    void setOut(const ObsObjInfo& value);


    ThumbnailPara getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const ThumbnailPara& value);


protected:
    int32_t tar_;
    bool tarIsSet_;
    ObsObjInfo out_;
    bool outIsSet_;
    ThumbnailPara params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_Thumbnail_H_
