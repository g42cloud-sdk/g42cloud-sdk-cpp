
#ifndef G42CLOUD_SDK_IMS_V2_MODEL_QuotaInfo_H_
#define G42CLOUD_SDK_IMS_V2_MODEL_QuotaInfo_H_


#include <g42cloud/ims/v2/ImsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_IMS_V2_EXPORT  QuotaInfo
    : public ModelBase
{
public:
    QuotaInfo();
    virtual ~QuotaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaInfo members


    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);


    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);


    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t min_;
    bool minIsSet_;
    int32_t max_;
    bool maxIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_MODEL_QuotaInfo_H_
