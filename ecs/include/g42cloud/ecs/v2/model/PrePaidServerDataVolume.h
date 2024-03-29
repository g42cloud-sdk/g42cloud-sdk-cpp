
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolume_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolume_H_


#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/ecs/v2/model/PrePaidServerDataVolumeExtendParam.h>
#include <string>
#include <g42cloud/ecs/v2/model/PrePaidServerDataVolumeMetadata.h>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  PrePaidServerDataVolume
    : public ModelBase
{
public:
    PrePaidServerDataVolume();
    virtual ~PrePaidServerDataVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidServerDataVolume members


    std::string getVolumetype() const;
    bool volumetypeIsSet() const;
    void unsetvolumetype();
    void setVolumetype(const std::string& value);


    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


    bool isShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(bool value);


    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);


    bool isHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(bool value);


    PrePaidServerDataVolumeExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PrePaidServerDataVolumeExtendParam& value);


    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);


    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);


    PrePaidServerDataVolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PrePaidServerDataVolumeMetadata& value);


    std::string getDataImageId() const;
    bool dataImageIdIsSet() const;
    void unsetdataImageId();
    void setDataImageId(const std::string& value);


    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    std::string volumetype_;
    bool volumetypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    bool shareable_;
    bool shareableIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    bool hwpassthrough_;
    bool hwpassthroughIsSet_;
    PrePaidServerDataVolumeExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    PrePaidServerDataVolumeMetadata metadata_;
    bool metadataIsSet_;
    std::string dataImageId_;
    bool dataImageIdIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_PrePaidServerDataVolume_H_
