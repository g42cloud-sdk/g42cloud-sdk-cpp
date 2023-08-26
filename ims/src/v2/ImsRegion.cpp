#include <g42cloud/ims/v2/ImsRegion.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Auth;
using namespace G42Cloud::Sdk::Core::Exception;

ImsRegion::ImsRegion()
{}

ImsRegion::~ImsRegion()
{}

std::map<std::string, Region> ImsRegion::regions = ImsRegion::initRegions();

Region ImsRegion::valueOf(std::string regionId) {
    if (regionId.empty()) {
        throw SdkException("the regionId can not be null!");
    }
    auto iter = regions.find(regionId);
    if (iter != regions.end()) {
        return iter->second;
    }
    throw SdkException("the regionId is supported for the service!");
}

}
}
}
}
