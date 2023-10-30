
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/ecs/v2/model/ResizeServerExtendParam.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ResizePrePaidServerOption
    : public ModelBase
{
public:
    ResizePrePaidServerOption();
    virtual ~ResizePrePaidServerOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizePrePaidServerOption members


    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);


    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


    ResizeServerExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const ResizeServerExtendParam& value);


    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;
    ResizeServerExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_
