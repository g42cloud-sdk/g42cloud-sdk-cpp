
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_CommonQueryTaskRsp_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_CommonQueryTaskRsp_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  CommonQueryTaskRsp
    : public ModelBase
{
public:
    CommonQueryTaskRsp();
    virtual ~CommonQueryTaskRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonQueryTaskRsp members


    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_CommonQueryTaskRsp_H_
