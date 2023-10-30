
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/CreateVolumeOption.h>
#include <g42cloud/evs/v2/model/CreateVolumeSchedulerHints.h>
#include <string>
#include <g42cloud/evs/v2/model/BssParamForCreateVolume.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  CreateVolumeRequestBody
    : public ModelBase
{
public:
    CreateVolumeRequestBody();
    virtual ~CreateVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVolumeRequestBody members


    BssParamForCreateVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const BssParamForCreateVolume& value);


    CreateVolumeOption getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const CreateVolumeOption& value);


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    CreateVolumeSchedulerHints getOSSCHHNTschedulerHints() const;
    bool oSSCHHNTschedulerHintsIsSet() const;
    void unsetoSSCHHNTschedulerHints();
    void setOSSCHHNTschedulerHints(const CreateVolumeSchedulerHints& value);


protected:
    BssParamForCreateVolume bssParam_;
    bool bssParamIsSet_;
    CreateVolumeOption volume_;
    bool volumeIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    CreateVolumeSchedulerHints oSSCHHNTschedulerHints_;
    bool oSSCHHNTschedulerHintsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_CreateVolumeRequestBody_H_
