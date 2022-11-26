
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeDetail.h>
#include <g42cloud/evs/v2/model/Link.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListVolumesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumesResponse();
    virtual ~ListVolumesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVolumesResponse members


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    std::vector<Link>& getVolumesLinks();
    bool volumesLinksIsSet() const;
    void unsetvolumesLinks();
    void setVolumesLinks(const std::vector<Link>& value);


    std::vector<VolumeDetail>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<VolumeDetail>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<Link> volumesLinks_;
    bool volumesLinksIsSet_;
    std::vector<VolumeDetail> volumes_;
    bool volumesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListVolumesResponse_H_
