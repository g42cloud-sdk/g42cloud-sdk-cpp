
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_Attachment_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_Attachment_H_

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
class G42CLOUD_EVS_V2_EXPORT  Attachment
    : public ModelBase
{
public:
    Attachment();
    virtual ~Attachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Attachment members


    std::string getAttachedAt() const;
    bool attachedAtIsSet() const;
    void unsetattachedAt();
    void setAttachedAt(const std::string& value);


    std::string getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetattachmentId();
    void setAttachmentId(const std::string& value);


    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string attachedAt_;
    bool attachedAtIsSet_;
    std::string attachmentId_;
    bool attachmentIdIsSet_;
    std::string device_;
    bool deviceIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_Attachment_H_
