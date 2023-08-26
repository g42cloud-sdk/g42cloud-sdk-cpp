
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/MpeMetaData.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MpeCallBackReq
    : public ModelBase
{
public:
    MpeCallBackReq();
    virtual ~MpeCallBackReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MpeCallBackReq members


    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);


    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    int32_t getCompleteRatio() const;
    bool completeRatioIsSet() const;
    void unsetcompleteRatio();
    void setCompleteRatio(int32_t value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    MpeMetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const MpeMetaData& value);


protected:
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t completeRatio_;
    bool completeRatioIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    MpeMetaData metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MpeCallBackReq_H_
