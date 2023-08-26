
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ClipInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ClipInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
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
class G42CLOUD_MPC_V1_EXPORT  ClipInfo
    : public ModelBase
{
public:
    ClipInfo();
    virtual ~ClipInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ClipInfo members


    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);


    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);


    std::string getTimelineEnd() const;
    bool timelineEndIsSet() const;
    void unsettimelineEnd();
    void setTimelineEnd(const std::string& value);


protected:
    ObsObjInfo input_;
    bool inputIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineEnd_;
    bool timelineEndIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ClipInfo_H_
