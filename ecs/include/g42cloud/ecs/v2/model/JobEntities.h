
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_JobEntities_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_JobEntities_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/SubJob.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  JobEntities
    : public ModelBase
{
public:
    JobEntities();
    virtual ~JobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// JobEntities members


    std::vector<SubJob>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<SubJob>& value);


    int32_t getSubJobsTotal() const;
    bool subJobsTotalIsSet() const;
    void unsetsubJobsTotal();
    void setSubJobsTotal(int32_t value);


protected:
    std::vector<SubJob> subJobs_;
    bool subJobsIsSet_;
    int32_t subJobsTotal_;
    bool subJobsTotalIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_JobEntities_H_
