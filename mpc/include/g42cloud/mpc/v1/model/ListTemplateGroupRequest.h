
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListTemplateGroupRequest
    : public ModelBase
{
public:
    ListTemplateGroupRequest();
    virtual ~ListTemplateGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTemplateGroupRequest members


    std::vector<std::string>& getGroupId();
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::vector<std::string>& value);


    std::vector<std::string>& getGroupName();
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::vector<std::string>& value);


    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::vector<std::string> groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> groupName_;
    bool groupNameIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplateGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplateGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListTemplateGroupRequest_H_
