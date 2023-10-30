
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerEipBandwidth_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerEipBandwidth_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PostPaidServerEipBandwidth
    : public ModelBase
{
public:
    PostPaidServerEipBandwidth();
    virtual ~PostPaidServerEipBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServerEipBandwidth members


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);


    std::string getChargemode() const;
    bool chargemodeIsSet() const;
    void unsetchargemode();
    void setChargemode(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;
    std::string chargemode_;
    bool chargemodeIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PostPaidServerEipBandwidth_H_
