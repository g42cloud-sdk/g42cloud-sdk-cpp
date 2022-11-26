
#ifndef G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_
#define G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_

#include <g42cloud/ecs/v2/EcsExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_ECS_V2_EXPORT  ListResizeFlavorsRequest
    : public ModelBase
{
public:
    ListResizeFlavorsRequest();
    virtual ~ListResizeFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResizeFlavorsRequest members


    std::string getInstanceUuid() const;
    bool instanceUuidIsSet() const;
    void unsetinstanceUuid();
    void setInstanceUuid(const std::string& value);


    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);


    std::string getSourceFlavorId() const;
    bool sourceFlavorIdIsSet() const;
    void unsetsourceFlavorId();
    void setSourceFlavorId(const std::string& value);


    std::string getSourceFlavorName() const;
    bool sourceFlavorNameIsSet() const;
    void unsetsourceFlavorName();
    void setSourceFlavorName(const std::string& value);


protected:
    std::string instanceUuid_;
    bool instanceUuidIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sourceFlavorId_;
    bool sourceFlavorIdIsSet_;
    std::string sourceFlavorName_;
    bool sourceFlavorNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResizeFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListResizeFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_MODEL_ListResizeFlavorsRequest_H_
