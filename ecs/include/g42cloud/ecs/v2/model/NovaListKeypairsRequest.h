
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaListKeypairsRequest
    : public ModelBase
{
public:
    NovaListKeypairsRequest();
    virtual ~NovaListKeypairsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListKeypairsRequest members


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListKeypairsRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListKeypairsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaListKeypairsRequest_H_
