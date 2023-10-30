
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CreateAgenciesTaskRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CreateAgenciesTaskRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/AgenciesTaskReq.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CreateAgenciesTaskRequest
    : public ModelBase
{
public:
    CreateAgenciesTaskRequest();
    virtual ~CreateAgenciesTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAgenciesTaskRequest members


    AgenciesTaskReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AgenciesTaskReq& value);


protected:
    AgenciesTaskReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAgenciesTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAgenciesTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CreateAgenciesTaskRequest_H_
