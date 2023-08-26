#include <g42cloud/evs/v2/EvsRegion.h>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Auth;
using namespace G42Cloud::Sdk::Core::Exception;

EvsRegion::EvsRegion()
{}

EvsRegion::~EvsRegion()
{}

std::map<std::string, Region> EvsRegion::regions = EvsRegion::initRegions();

Region EvsRegion::valueOf(std::string regionId) {
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
