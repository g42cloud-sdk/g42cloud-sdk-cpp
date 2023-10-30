
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListMediaProcessTaskResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListMediaProcessTaskResponse_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/MediaProcessTaskInfo.h>
#include <vector>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListMediaProcessTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMediaProcessTaskResponse();
    virtual ~ListMediaProcessTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMediaProcessTaskResponse members


    std::vector<MediaProcessTaskInfo>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<MediaProcessTaskInfo>& value);


    int32_t getIsTruncated() const;
    bool isTruncatedIsSet() const;
    void unsetisTruncated();
    void setIsTruncated(int32_t value);


    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<MediaProcessTaskInfo> taskArray_;
    bool taskArrayIsSet_;
    int32_t isTruncated_;
    bool isTruncatedIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListMediaProcessTaskResponse_H_
