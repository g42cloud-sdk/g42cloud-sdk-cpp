
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  RemuxOutputParam
    : public ModelBase
{
public:
    RemuxOutputParam();
    virtual ~RemuxOutputParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RemuxOutputParam members


    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


    int32_t getSegmentDuration() const;
    bool segmentDurationIsSet() const;
    void unsetsegmentDuration();
    void setSegmentDuration(int32_t value);


    bool isRemoveMeta() const;
    bool removeMetaIsSet() const;
    void unsetremoveMeta();
    void setRemoveMeta(bool value);


protected:
    std::string format_;
    bool formatIsSet_;
    int32_t segmentDuration_;
    bool segmentDurationIsSet_;
    bool removeMeta_;
    bool removeMetaIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_RemuxOutputParam_H_
