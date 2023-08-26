#ifndef G42CLOUD_SDK_MPC_V1_MpcRegion_H_
#define G42CLOUD_SDK_MPC_V1_MpcRegion_H_

#include <g42cloud/core/auth/Region.h>
#include <g42cloud/core/exception/SdkException.h>
#include <g42cloud/mpc/v1/MpcExport.h>
#include <map>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
using namespace G42Cloud::Sdk::Core::Auth;

class G42CLOUD_MPC_V1_EXPORT MpcRegion {
public:
    MpcRegion();
    virtual ~MpcRegion();

    static Region valueOf(std::string regionId);

    static std::map<std::string, Region> initRegions() {
        std::map<std::string, Region> regions;
        regions["ae-ad-1"] = Region("ae-ad-1",
            { 
                "https://mpc.ae-ad-1.g42cloud.com"
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

#endif // G42CLOUD_SDK_MPC_V1_MpcRegion_H_