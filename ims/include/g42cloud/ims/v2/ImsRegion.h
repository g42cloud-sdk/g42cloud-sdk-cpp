#ifndef G42CLOUD_SDK_IMS_V2_ImsRegion_H_
#define G42CLOUD_SDK_IMS_V2_ImsRegion_H_

#include <g42cloud/core/auth/Region.h>
#include <g42cloud/core/exception/SdkException.h>
#include <g42cloud/ims/v2/ImsExport.h>
#include <map>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {
using namespace G42Cloud::Sdk::Core::Auth;

class G42CLOUD_IMS_V2_EXPORT ImsRegion {
public:
    ImsRegion();
    virtual ~ImsRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://ims.ae-ad-1.g42cloud.com"
            });
        return regions;
    }
private:
    static std::map<std::string, Region> regions;
};

}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_ImsRegion_H_