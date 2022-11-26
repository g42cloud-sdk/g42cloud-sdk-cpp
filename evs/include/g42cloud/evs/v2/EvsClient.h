#ifndef G42CLOUD_SDK_EVS_V2_EvsClient_H_
#define G42CLOUD_SDK_EVS_V2_EvsClient_H_

#include <g42cloud/evs/v2/EvsExport.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/core/ClientBuilder.h>


#include <g42cloud/evs/v2/model/BatchCreateVolumeTagsRequest.h>
#include <g42cloud/evs/v2/model/BatchCreateVolumeTagsRequestBody.h>
#include <g42cloud/evs/v2/model/BatchCreateVolumeTagsResponse.h>
#include <g42cloud/evs/v2/model/BatchDeleteVolumeTagsRequest.h>
#include <g42cloud/evs/v2/model/BatchDeleteVolumeTagsRequestBody.h>
#include <g42cloud/evs/v2/model/BatchDeleteVolumeTagsResponse.h>
#include <g42cloud/evs/v2/model/CinderAcceptVolumeTransferRequest.h>
#include <g42cloud/evs/v2/model/CinderAcceptVolumeTransferRequestBody.h>
#include <g42cloud/evs/v2/model/CinderAcceptVolumeTransferResponse.h>
#include <g42cloud/evs/v2/model/CinderCreateVolumeTransferRequest.h>
#include <g42cloud/evs/v2/model/CinderCreateVolumeTransferRequestBody.h>
#include <g42cloud/evs/v2/model/CinderCreateVolumeTransferResponse.h>
#include <g42cloud/evs/v2/model/CinderDeleteVolumeTransferRequest.h>
#include <g42cloud/evs/v2/model/CinderDeleteVolumeTransferResponse.h>
#include <g42cloud/evs/v2/model/CinderListAvailabilityZonesRequest.h>
#include <g42cloud/evs/v2/model/CinderListAvailabilityZonesResponse.h>
#include <g42cloud/evs/v2/model/CinderListQuotasRequest.h>
#include <g42cloud/evs/v2/model/CinderListQuotasResponse.h>
#include <g42cloud/evs/v2/model/CinderListVolumeTransfersRequest.h>
#include <g42cloud/evs/v2/model/CinderListVolumeTransfersResponse.h>
#include <g42cloud/evs/v2/model/CinderListVolumeTypesRequest.h>
#include <g42cloud/evs/v2/model/CinderListVolumeTypesResponse.h>
#include <g42cloud/evs/v2/model/CinderShowVolumeTransferRequest.h>
#include <g42cloud/evs/v2/model/CinderShowVolumeTransferResponse.h>
#include <g42cloud/evs/v2/model/CreateSnapshotRequest.h>
#include <g42cloud/evs/v2/model/CreateSnapshotRequestBody.h>
#include <g42cloud/evs/v2/model/CreateSnapshotResponse.h>
#include <g42cloud/evs/v2/model/CreateVolumeRequest.h>
#include <g42cloud/evs/v2/model/CreateVolumeRequestBody.h>
#include <g42cloud/evs/v2/model/CreateVolumeResponse.h>
#include <g42cloud/evs/v2/model/DeleteSnapshotRequest.h>
#include <g42cloud/evs/v2/model/DeleteSnapshotResponse.h>
#include <g42cloud/evs/v2/model/DeleteVolumeRequest.h>
#include <g42cloud/evs/v2/model/DeleteVolumeResponse.h>
#include <g42cloud/evs/v2/model/ListSnapshotsRequest.h>
#include <g42cloud/evs/v2/model/ListSnapshotsResponse.h>
#include <g42cloud/evs/v2/model/ListVolumeTagsRequest.h>
#include <g42cloud/evs/v2/model/ListVolumeTagsResponse.h>
#include <g42cloud/evs/v2/model/ListVolumesByTagsRequest.h>
#include <g42cloud/evs/v2/model/ListVolumesByTagsRequestBody.h>
#include <g42cloud/evs/v2/model/ListVolumesByTagsResponse.h>
#include <g42cloud/evs/v2/model/ListVolumesRequest.h>
#include <g42cloud/evs/v2/model/ListVolumesResponse.h>
#include <g42cloud/evs/v2/model/ResizeVolumeRequest.h>
#include <g42cloud/evs/v2/model/ResizeVolumeRequestBody.h>
#include <g42cloud/evs/v2/model/ResizeVolumeResponse.h>
#include <g42cloud/evs/v2/model/RollbackSnapshotRequest.h>
#include <g42cloud/evs/v2/model/RollbackSnapshotRequestBody.h>
#include <g42cloud/evs/v2/model/RollbackSnapshotResponse.h>
#include <g42cloud/evs/v2/model/ShowJobRequest.h>
#include <g42cloud/evs/v2/model/ShowJobResponse.h>
#include <g42cloud/evs/v2/model/ShowSnapshotRequest.h>
#include <g42cloud/evs/v2/model/ShowSnapshotResponse.h>
#include <g42cloud/evs/v2/model/ShowVolumeRequest.h>
#include <g42cloud/evs/v2/model/ShowVolumeResponse.h>
#include <g42cloud/evs/v2/model/ShowVolumeTagsRequest.h>
#include <g42cloud/evs/v2/model/ShowVolumeTagsResponse.h>
#include <g42cloud/evs/v2/model/UpdateSnapshotRequest.h>
#include <g42cloud/evs/v2/model/UpdateSnapshotRequestBody.h>
#include <g42cloud/evs/v2/model/UpdateSnapshotResponse.h>
#include <g42cloud/evs/v2/model/UpdateVolumeRequest.h>
#include <g42cloud/evs/v2/model/UpdateVolumeRequestBody.h>
#include <g42cloud/evs/v2/model/UpdateVolumeResponse.h>
#include <string>

#include <g42cloud/evs/v2/model/ListVersionsRequest.h>
#include <g42cloud/evs/v2/model/ListVersionsResponse.h>
#include <g42cloud/evs/v2/model/ShowVersionRequest.h>
#include <g42cloud/evs/v2/model/ShowVersionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <g42cloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace G42Cloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Evs::V2::Model;

class G42CLOUD_EVS_V2_EXPORT  EvsClient : public Client
{
public:

    EvsClient();

    virtual ~EvsClient();

    static ClientBuilder<EvsClient> newBuilder();

    std::shared_ptr<BatchCreateVolumeTagsResponse> batchCreateVolumeTags(
        BatchCreateVolumeTagsRequest &request
    );
    std::shared_ptr<BatchDeleteVolumeTagsResponse> batchDeleteVolumeTags(
        BatchDeleteVolumeTagsRequest &request
    );
    std::shared_ptr<CinderAcceptVolumeTransferResponse> cinderAcceptVolumeTransfer(
        CinderAcceptVolumeTransferRequest &request
    );
    std::shared_ptr<CinderCreateVolumeTransferResponse> cinderCreateVolumeTransfer(
        CinderCreateVolumeTransferRequest &request
    );
    std::shared_ptr<CinderDeleteVolumeTransferResponse> cinderDeleteVolumeTransfer(
        CinderDeleteVolumeTransferRequest &request
    );
    std::shared_ptr<CinderListAvailabilityZonesResponse> cinderListAvailabilityZones(
        CinderListAvailabilityZonesRequest &request
    );
    std::shared_ptr<CinderListQuotasResponse> cinderListQuotas(
        CinderListQuotasRequest &request
    );
    std::shared_ptr<CinderListVolumeTransfersResponse> cinderListVolumeTransfers(
        CinderListVolumeTransfersRequest &request
    );
    std::shared_ptr<CinderListVolumeTypesResponse> cinderListVolumeTypes(
        CinderListVolumeTypesRequest &request
    );
    std::shared_ptr<CinderShowVolumeTransferResponse> cinderShowVolumeTransfer(
        CinderShowVolumeTransferRequest &request
    );
    std::shared_ptr<CreateSnapshotResponse> createSnapshot(
        CreateSnapshotRequest &request
    );
    std::shared_ptr<CreateVolumeResponse> createVolume(
        CreateVolumeRequest &request
    );
    std::shared_ptr<DeleteSnapshotResponse> deleteSnapshot(
        DeleteSnapshotRequest &request
    );
    std::shared_ptr<DeleteVolumeResponse> deleteVolume(
        DeleteVolumeRequest &request
    );
    std::shared_ptr<ListSnapshotsResponse> listSnapshots(
        ListSnapshotsRequest &request
    );
    std::shared_ptr<ListVolumeTagsResponse> listVolumeTags(
        ListVolumeTagsRequest &request
    );
    std::shared_ptr<ListVolumesResponse> listVolumes(
        ListVolumesRequest &request
    );
    std::shared_ptr<ListVolumesByTagsResponse> listVolumesByTags(
        ListVolumesByTagsRequest &request
    );
    std::shared_ptr<ResizeVolumeResponse> resizeVolume(
        ResizeVolumeRequest &request
    );
    std::shared_ptr<RollbackSnapshotResponse> rollbackSnapshot(
        RollbackSnapshotRequest &request
    );
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    std::shared_ptr<ShowSnapshotResponse> showSnapshot(
        ShowSnapshotRequest &request
    );
    std::shared_ptr<ShowVolumeResponse> showVolume(
        ShowVolumeRequest &request
    );
    std::shared_ptr<ShowVolumeTagsResponse> showVolumeTags(
        ShowVolumeTagsRequest &request
    );
    std::shared_ptr<UpdateSnapshotResponse> updateSnapshot(
        UpdateSnapshotRequest &request
    );
    std::shared_ptr<UpdateVolumeResponse> updateVolume(
        UpdateVolumeRequest &request
    );

    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const utility::datetime &value);
    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class G42CLOUD_EVS_V2_EXPORT ::G42Cloud::Sdk::Core::ClientBuilder<::G42Cloud::Sdk::Evs::V2::EvsClient>;

#endif // G42CLOUD_SDK_EVS_V2_EvsClient_H_

