
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListVersionsResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListVersionsResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/Versions.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVersionsResponse();
    virtual ~ListVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVersionsResponse members


    std::vector<Versions>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<Versions>& value);


protected:
    std::vector<Versions> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListVersionsResponse_H_
