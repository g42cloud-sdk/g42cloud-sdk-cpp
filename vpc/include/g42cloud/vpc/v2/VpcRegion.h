#ifndef G42CLOUD_SDK_VPC_V2_VpcRegion_H_
#define G42CLOUD_SDK_VPC_V2_VpcRegion_H_

#include <g42cloud/core/auth/Region.h>
#include <g42cloud/core/exception/SdkException.h>
#include <g42cloud/vpc/v2/VpcExport.h>
#include <map>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
using namespace G42Cloud::Sdk::Core::Auth;

class G42CLOUD_VPC_V2_EXPORT VpcRegion {
public:
    VpcRegion();
    virtual ~VpcRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://vpc.ae-ad-1.g42cloud.com"
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

#endif // G42CLOUD_SDK_VPC_V2_VpcRegion_H_