
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ServerFault_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ServerFault_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ServerFault
    : public ModelBase
{
public:
    ServerFault();
    virtual ~ServerFault();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerFault members


    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);


    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);


    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


    std::string getDetails() const;
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::string& value);


protected:
    int32_t code_;
    bool codeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string details_;
    bool detailsIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ServerFault_H_
