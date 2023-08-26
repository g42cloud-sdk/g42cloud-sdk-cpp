
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/PaneSetting.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MixInfo_layout
    : public ModelBase
{
public:
    MixInfo_layout();
    virtual ~MixInfo_layout();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MixInfo_layout members


    std::vector<PaneSetting>& getPanes();
    bool panesIsSet() const;
    void unsetpanes();
    void setPanes(const std::vector<PaneSetting>& value);


protected:
    std::vector<PaneSetting> panes_;
    bool panesIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_
