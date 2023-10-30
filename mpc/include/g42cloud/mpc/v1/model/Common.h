
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_Common_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_Common_H_


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
class G42CLOUD_MPC_V1_EXPORT  Common
    : public ModelBase
{
public:
    Common();
    virtual ~Common();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Common members


    bool isPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(bool value);


    int32_t getHlsInterval() const;
    bool hlsIntervalIsSet() const;
    void unsethlsInterval();
    void setHlsInterval(int32_t value);


    int32_t getDashInterval() const;
    bool dashIntervalIsSet() const;
    void unsetdashInterval();
    void setDashInterval(int32_t value);


    int32_t getPackType() const;
    bool packTypeIsSet() const;
    void unsetpackType();
    void setPackType(int32_t value);


protected:
    bool pvc_;
    bool pvcIsSet_;
    int32_t hlsInterval_;
    bool hlsIntervalIsSet_;
    int32_t dashInterval_;
    bool dashIntervalIsSet_;
    int32_t packType_;
    bool packTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_Common_H_
