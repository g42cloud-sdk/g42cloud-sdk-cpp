
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/ResizePostPaidServerOption.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ResizePostPaidServerRequestBody
    : public ModelBase
{
public:
    ResizePostPaidServerRequestBody();
    virtual ~ResizePostPaidServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizePostPaidServerRequestBody members


    ResizePostPaidServerOption getResize() const;
    bool resizeIsSet() const;
    void unsetresize();
    void setResize(const ResizePostPaidServerOption& value);


    bool isDryRun() const;
    bool dryRunIsSet() const;
    void unsetdryRun();
    void setDryRun(bool value);


protected:
    ResizePostPaidServerOption resize_;
    bool resizeIsSet_;
    bool dryRun_;
    bool dryRunIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ResizePostPaidServerRequestBody_H_
