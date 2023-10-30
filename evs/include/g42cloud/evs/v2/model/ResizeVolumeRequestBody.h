
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/OsExtend.h>
#include <g42cloud/evs/v2/model/BssParamForResizeVolume.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ResizeVolumeRequestBody
    : public ModelBase
{
public:
    ResizeVolumeRequestBody();
    virtual ~ResizeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeVolumeRequestBody members


    BssParamForResizeVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const BssParamForResizeVolume& value);


    OsExtend getOsExtend() const;
    bool osExtendIsSet() const;
    void unsetosExtend();
    void setOsExtend(const OsExtend& value);


protected:
    BssParamForResizeVolume bssParam_;
    bool bssParamIsSet_;
    OsExtend osExtend_;
    bool osExtendIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ResizeVolumeRequestBody_H_
