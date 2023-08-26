
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/ObsObject.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListAllObsObjListResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllObsObjListResponse();
    virtual ~ListAllObsObjListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAllObsObjListResponse members


    std::vector<ObsObject>& getObjects();
    bool objectsIsSet() const;
    void unsetobjects();
    void setObjects(const std::vector<ObsObject>& value);


protected:
    std::vector<ObsObject> objects_;
    bool objectsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListAllObsObjListResponse_H_
