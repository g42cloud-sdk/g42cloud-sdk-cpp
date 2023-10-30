
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/Link.h>
#include <g42cloud/evs/v2/model/SnapshotList.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  ListSnapshotsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotsResponse();
    virtual ~ListSnapshotsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotsResponse members


    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


    std::vector<SnapshotList>& getSnapshots();
    bool snapshotsIsSet() const;
    void unsetsnapshots();
    void setSnapshots(const std::vector<SnapshotList>& value);


    std::vector<Link>& getSnapshotsLinks();
    bool snapshotsLinksIsSet() const;
    void unsetsnapshotsLinks();
    void setSnapshotsLinks(const std::vector<Link>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<SnapshotList> snapshots_;
    bool snapshotsIsSet_;
    std::vector<Link> snapshotsLinks_;
    bool snapshotsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_ListSnapshotsResponse_H_
