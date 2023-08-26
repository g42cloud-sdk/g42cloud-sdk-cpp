
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_VideoContrast_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_VideoContrast_H_

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
class G42CLOUD_MPC_V1_EXPORT  VideoContrast
    : public ModelBase
{
public:
    VideoContrast();
    virtual ~VideoContrast();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VideoContrast members


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    int32_t getExecutionOrder() const;
    bool executionOrderIsSet() const;
    void unsetexecutionOrder();
    void setExecutionOrder(int32_t value);


    std::string getContrast() const;
    bool contrastIsSet() const;
    void unsetcontrast();
    void setContrast(const std::string& value);


    std::string getBrightness() const;
    bool brightnessIsSet() const;
    void unsetbrightness();
    void setBrightness(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t executionOrder_;
    bool executionOrderIsSet_;
    std::string contrast_;
    bool contrastIsSet_;
    std::string brightness_;
    bool brightnessIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_VideoContrast_H_
