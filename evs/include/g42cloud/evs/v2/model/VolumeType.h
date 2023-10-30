
#ifndef G42CLOUD_SDK_EVS_V2_MODEL_VolumeType_H_
#define G42CLOUD_SDK_EVS_V2_MODEL_VolumeType_H_


#include <g42cloud/evs/v2/EvsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/evs/v2/model/VolumeTypeExtraSpecs.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_EVS_V2_EXPORT  VolumeType
    : public ModelBase
{
public:
    VolumeType();
    virtual ~VolumeType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeType members


    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


    VolumeTypeExtraSpecs getExtraSpecs() const;
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const VolumeTypeExtraSpecs& value);


    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


    std::string getQosSpecsId() const;
    bool qosSpecsIdIsSet() const;
    void unsetqosSpecsId();
    void setQosSpecsId(const std::string& value);


    bool isIsPublic() const;
    bool isPublicIsSet() const;
    void unsetisPublic();
    void setIsPublic(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    VolumeTypeExtraSpecs extraSpecs_;
    bool extraSpecsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string qosSpecsId_;
    bool qosSpecsIdIsSet_;
    bool isPublic_;
    bool isPublicIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_EVS_V2_MODEL_VolumeType_H_
