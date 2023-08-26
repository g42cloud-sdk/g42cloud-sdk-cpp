

#include "g42cloud/mpc/v1/model/CreateTransTemplateResponse.h"

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTransTemplateResponse::CreateTransTemplateResponse()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
}

CreateTransTemplateResponse::~CreateTransTemplateResponse() = default;

void CreateTransTemplateResponse::validate()
{
}

web::json::value CreateTransTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}

bool CreateTransTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}

int32_t CreateTransTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void CreateTransTemplateResponse::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateTransTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateTransTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


