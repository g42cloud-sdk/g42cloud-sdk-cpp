
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_VpcPeering_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_VpcPeering_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/VpcInfo.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  VpcPeering
    : public ModelBase
{
public:
    VpcPeering();
    virtual ~VpcPeering();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VpcPeering members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


    VpcInfo getRequestVpcInfo() const;
    bool requestVpcInfoIsSet() const;
    void unsetrequestVpcInfo();
    void setRequestVpcInfo(const VpcInfo& value);


    VpcInfo getAcceptVpcInfo() const;
    bool acceptVpcInfoIsSet() const;
    void unsetacceptVpcInfo();
    void setAcceptVpcInfo(const VpcInfo& value);


    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);


    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    VpcInfo requestVpcInfo_;
    bool requestVpcInfoIsSet_;
    VpcInfo acceptVpcInfo_;
    bool acceptVpcInfoIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_VpcPeering_H_
