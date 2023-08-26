

#include "g42cloud/ims/v2/model/CopyImageInRegionResponse.h"

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageInRegionResponse::CopyImageInRegionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CopyImageInRegionResponse::~CopyImageInRegionResponse() = default;

void CopyImageInRegionResponse::validate()
{
}

web::json::value CopyImageInRegionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CopyImageInRegionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}

std::string CopyImageInRegionResponse::getJobId() const
{
    return jobId_;
}

void CopyImageInRegionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CopyImageInRegionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CopyImageInRegionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


