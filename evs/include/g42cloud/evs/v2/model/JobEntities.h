
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_JobEntities_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_JobEntities_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/SubJob.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  JobEntities
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


    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::vector<SubJob>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<SubJob>& value);


protected:
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<SubJob> subJobs_;
    bool subJobsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_JobEntities_H_
