
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_

#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  VolumeMetadata
    : public ModelBase
{
public:
    VolumeMetadata();
    virtual ~VolumeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeMetadata members


    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);


    std::string getSystemEncrypted() const;
    bool systemEncryptedIsSet() const;
    void unsetsystemEncrypted();
    void setSystemEncrypted(const std::string& value);


    std::string getFullClone() const;
    bool fullCloneIsSet() const;
    void unsetfullClone();
    void setFullClone(const std::string& value);


    std::string getHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(const std::string& value);


    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);


protected:
    std::string systemCmkid_;
    bool systemCmkidIsSet_;
    std::string systemEncrypted_;
    bool systemEncryptedIsSet_;
    std::string fullClone_;
    bool fullCloneIsSet_;
    std::string hwpassthrough_;
    bool hwpassthroughIsSet_;
    std::string orderID_;
    bool orderIDIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_
