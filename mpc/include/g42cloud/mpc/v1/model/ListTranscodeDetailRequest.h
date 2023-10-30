
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
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
class G42CLOUD_MPC_V1_EXPORT  ListTranscodeDetailRequest
    : public ModelBase
{
public:
    ListTranscodeDetailRequest();
    virtual ~ListTranscodeDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTranscodeDetailRequest members


    std::vector<std::string>& getTaskId();
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTranscodeDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ListTranscodeDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailRequest_H_
