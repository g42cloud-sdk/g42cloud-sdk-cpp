

#include "g42cloud/ims/v2/model/JobProgressEntities.h"
namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




JobProgressEntities::JobProgressEntities()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    currentTask_ = "";
    currentTaskIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    processPercent_ = 0.0;
    processPercentIsSet_ = false;
    subJobId_ = "";
    subJobIdIsSet_ = false;
}

JobProgressEntities::~JobProgressEntities() = default;

void JobProgressEntities::validate()
{
}

web::json::value JobProgressEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(currentTaskIsSet_) {
        val[utility::conversions::to_string_t("current_task")] = ModelBase::toJson(currentTask_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(processPercentIsSet_) {
        val[utility::conversions::to_string_t("process_percent")] = ModelBase::toJson(processPercent_);
    }
    if(subJobIdIsSet_) {
        val[utility::conversions::to_string_t("subJobId")] = ModelBase::toJson(subJobId_);
    }

    return val;
}
bool JobProgressEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_percent"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subJobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subJobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobId(refVal);
        }
    }
    return ok;
}


std::string JobProgressEntities::getImageId() const
{
    return imageId_;
}

void JobProgressEntities::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool JobProgressEntities::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void JobProgressEntities::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string JobProgressEntities::getCurrentTask() const
{
    return currentTask_;
}

void JobProgressEntities::setCurrentTask(const std::string& value)
{
    currentTask_ = value;
    currentTaskIsSet_ = true;
}

bool JobProgressEntities::currentTaskIsSet() const
{
    return currentTaskIsSet_;
}

void JobProgressEntities::unsetcurrentTask()
{
    currentTaskIsSet_ = false;
}

std::string JobProgressEntities::getImageName() const
{
    return imageName_;
}

void JobProgressEntities::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool JobProgressEntities::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void JobProgressEntities::unsetimageName()
{
    imageNameIsSet_ = false;
}

double JobProgressEntities::getProcessPercent() const
{
    return processPercent_;
}

void JobProgressEntities::setProcessPercent(double value)
{
    processPercent_ = value;
    processPercentIsSet_ = true;
}

bool JobProgressEntities::processPercentIsSet() const
{
    return processPercentIsSet_;
}

void JobProgressEntities::unsetprocessPercent()
{
    processPercentIsSet_ = false;
}

std::string JobProgressEntities::getSubJobId() const
{
    return subJobId_;
}

void JobProgressEntities::setSubJobId(const std::string& value)
{
    subJobId_ = value;
    subJobIdIsSet_ = true;
}

bool JobProgressEntities::subJobIdIsSet() const
{
    return subJobIdIsSet_;
}

void JobProgressEntities::unsetsubJobId()
{
    subJobIdIsSet_ = false;
}

}
}
}
}
}


