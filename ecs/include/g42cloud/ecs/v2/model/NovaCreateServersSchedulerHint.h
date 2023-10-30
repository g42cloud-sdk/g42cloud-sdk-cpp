
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  NovaCreateServersSchedulerHint
    : public ModelBase
{
public:
    NovaCreateServersSchedulerHint();
    virtual ~NovaCreateServersSchedulerHint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaCreateServersSchedulerHint members


    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);


    std::vector<std::string>& getDifferentHost();
    bool differentHostIsSet() const;
    void unsetdifferentHost();
    void setDifferentHost(const std::vector<std::string>& value);


    std::vector<std::string>& getSameHost();
    bool sameHostIsSet() const;
    void unsetsameHost();
    void setSameHost(const std::vector<std::string>& value);


    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


    std::string getBuildNearHostIp() const;
    bool buildNearHostIpIsSet() const;
    void unsetbuildNearHostIp();
    void setBuildNearHostIp(const std::string& value);


    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);


    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string group_;
    bool groupIsSet_;
    std::vector<std::string> differentHost_;
    bool differentHostIsSet_;
    std::vector<std::string> sameHost_;
    bool sameHostIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string buildNearHostIp_;
    bool buildNearHostIpIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_NovaCreateServersSchedulerHint_H_
