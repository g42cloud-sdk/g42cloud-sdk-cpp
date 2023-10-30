
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_


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
class G42CLOUD_ECS_V2_EXPORT  ListServersDetailsRequest
    : public ModelBase
{
public:
    ListServersDetailsRequest();
    virtual ~ListServersDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServersDetailsRequest members


    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);


    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getNotTags() const;
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::string& value);


    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


    std::string getReservationId() const;
    bool reservationIdIsSet() const;
    void unsetreservationId();
    void setReservationId(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);


    std::string getIpEq() const;
    bool ipEqIsSet() const;
    void unsetipEq();
    void setIpEq(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notTags_;
    bool notTagsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string ipEq_;
    bool ipEqIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServersDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListServersDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_
