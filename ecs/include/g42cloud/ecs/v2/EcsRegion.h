#ifndef G42CLOUD_SDK_ECS_V2_EcsRegion_H_
#define G42CLOUD_SDK_ECS_V2_EcsRegion_H_

#include <g42cloud/core/auth/Region.h>
#include <g42cloud/core/exception/SdkException.h>
#include <g42cloud/ecs/v2/EcsExport.h>
#include <map>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
using namespace G42Cloud::Sdk::Core::Auth;

class G42CLOUD_ECS_V2_EXPORT EcsRegion {
public:
    EcsRegion();
    virtual ~EcsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ae-ad-1"] = Region("ae-ad-1","https://ecs.ae-ad-1.g42cloud.com") ;
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // G42CLOUD_SDK_ECS_V2_EcsRegion_H_