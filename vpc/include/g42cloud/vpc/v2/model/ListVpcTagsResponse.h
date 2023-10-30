
#ifndef G42CLOUD_SDK_VPC_V2_MODEL_ListVpcTagsResponse_H_
#define G42CLOUD_SDK_VPC_V2_MODEL_ListVpcTagsResponse_H_


#include <g42cloud/vpc/v2/VpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/vpc/v2/model/ListTag.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_VPC_V2_EXPORT  ListVpcTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVpcTagsResponse();
    virtual ~ListVpcTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVpcTagsResponse members


    std::vector<ListTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ListTag>& value);


protected:
    std::vector<ListTag> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_VPC_V2_MODEL_ListVpcTagsResponse_H_
