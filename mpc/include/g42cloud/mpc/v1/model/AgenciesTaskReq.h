
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  AgenciesTaskReq
    : public ModelBase
{
public:
    AgenciesTaskReq();
    virtual ~AgenciesTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AgenciesTaskReq members


    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AgenciesTaskReq_H_
