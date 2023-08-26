
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ListResizeFlavorsResult.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListResizeFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResizeFlavorsResponse();
    virtual ~ListResizeFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResizeFlavorsResponse members


    std::vector<ListResizeFlavorsResult>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<ListResizeFlavorsResult>& value);


protected:
    std::vector<ListResizeFlavorsResult> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsResponse_H_
