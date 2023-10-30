
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_Notification_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_Notification_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  Notification
    : public ModelBase
{
public:
    Notification();
    virtual ~Notification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Notification members


    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);


    int32_t getMsgType() const;
    bool msgTypeIsSet() const;
    void unsetmsgType();
    void setMsgType(int32_t value);


protected:
    std::string eventName_;
    bool eventNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string topic_;
    bool topicIsSet_;
    int32_t msgType_;
    bool msgTypeIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_Notification_H_
