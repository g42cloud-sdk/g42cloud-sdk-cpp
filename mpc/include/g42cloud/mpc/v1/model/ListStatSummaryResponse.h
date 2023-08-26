
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <g42cloud/mpc/v1/model/StatSummary.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  ListStatSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStatSummaryResponse();
    virtual ~ListStatSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStatSummaryResponse members


    std::vector<StatSummary>& getSummary();
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const std::vector<StatSummary>& value);


    float getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(float value);


    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);


protected:
    std::vector<StatSummary> summary_;
    bool summaryIsSet_;
    float total_;
    bool totalIsSet_;
    std::string statType_;
    bool statTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_ListStatSummaryResponse_H_
