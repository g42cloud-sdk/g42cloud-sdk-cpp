
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateMbTasksReportRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateMbTasksReportRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MbTasksReportReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateMbTasksReportRequest
    : public ModelBase
{
public:
    CreateMbTasksReportRequest();
    virtual ~CreateMbTasksReportRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateMbTasksReportRequest members


    MbTasksReportReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MbTasksReportReq& value);


protected:
    MbTasksReportReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMbTasksReportRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMbTasksReportRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateMbTasksReportRequest_H_
