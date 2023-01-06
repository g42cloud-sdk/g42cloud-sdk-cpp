
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_JobEntities_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_JobEntities_H_

#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ims/v2/model/JobEntitiesResult.h>
#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  JobEntities
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


    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);


    std::string getCurrentTask() const;
    bool currentTaskIsSet() const;
    void unsetcurrentTask();
    void setCurrentTask(const std::string& value);


    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);


    double getProcessPercent() const;
    bool processPercentIsSet() const;
    void unsetprocessPercent();
    void setProcessPercent(double value);


    std::vector<JobEntitiesResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<JobEntitiesResult>& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    std::string currentTask_;
    bool currentTaskIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    double processPercent_;
    bool processPercentIsSet_;
    std::vector<JobEntitiesResult> results_;
    bool resultsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_JobEntities_H_
