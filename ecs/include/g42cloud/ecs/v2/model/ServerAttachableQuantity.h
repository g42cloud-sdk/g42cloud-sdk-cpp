
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerAttachableQuantity
    : public ModelBase
{
public:
    ServerAttachableQuantity();
    virtual ~ServerAttachableQuantity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerAttachableQuantity members


    int32_t getFreeScsi() const;
    bool freeScsiIsSet() const;
    void unsetfreeScsi();
    void setFreeScsi(int32_t value);


    int32_t getFreeBlk() const;
    bool freeBlkIsSet() const;
    void unsetfreeBlk();
    void setFreeBlk(int32_t value);


    int32_t getFreeDisk() const;
    bool freeDiskIsSet() const;
    void unsetfreeDisk();
    void setFreeDisk(int32_t value);


    int32_t getFreeNic() const;
    bool freeNicIsSet() const;
    void unsetfreeNic();
    void setFreeNic(int32_t value);


protected:
    int32_t freeScsi_;
    bool freeScsiIsSet_;
    int32_t freeBlk_;
    bool freeBlkIsSet_;
    int32_t freeDisk_;
    bool freeDiskIsSet_;
    int32_t freeNic_;
    bool freeNicIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_
