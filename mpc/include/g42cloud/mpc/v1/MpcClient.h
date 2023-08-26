#ifndef G42CLOUD_SDK_MPC_V1_MpcClient_H_
#define G42CLOUD_SDK_MPC_V1_MpcClient_H_

#include <g42cloud/mpc/v1/MpcExport.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/core/ClientBuilder.h>


#include <g42cloud/mpc/v1/model/CreateAnimatedGraphicsTaskReq.h>
#include <g42cloud/mpc/v1/model/CreateAnimatedGraphicsTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateAnimatedGraphicsTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteAnimatedGraphicsTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteAnimatedGraphicsTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListAnimatedGraphicsTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListAnimatedGraphicsTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/AgenciesTaskReq.h>
#include <g42cloud/mpc/v1/model/BucketAuthorizedReq.h>
#include <g42cloud/mpc/v1/model/CreateAgenciesTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateAgenciesTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListAllBucketsRequest.h>
#include <g42cloud/mpc/v1/model/ListAllBucketsResponse.h>
#include <g42cloud/mpc/v1/model/ListAllObsObjListRequest.h>
#include <g42cloud/mpc/v1/model/ListAllObsObjListResponse.h>
#include <g42cloud/mpc/v1/model/ListNotifyEventRequest.h>
#include <g42cloud/mpc/v1/model/ListNotifyEventResponse.h>
#include <g42cloud/mpc/v1/model/ListNotifySmnTopicConfigRequest.h>
#include <g42cloud/mpc/v1/model/ListNotifySmnTopicConfigResponse.h>
#include <g42cloud/mpc/v1/model/NotificationConfigReq.h>
#include <g42cloud/mpc/v1/model/NotifySmnTopicConfigRequest.h>
#include <g42cloud/mpc/v1/model/NotifySmnTopicConfigResponse.h>
#include <g42cloud/mpc/v1/model/ShowAgenciesTaskRequest.h>
#include <g42cloud/mpc/v1/model/ShowAgenciesTaskResponse.h>
#include <g42cloud/mpc/v1/model/UpdateBucketAuthorizedRequest.h>
#include <g42cloud/mpc/v1/model/UpdateBucketAuthorizedResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateEditingJobReq.h>
#include <g42cloud/mpc/v1/model/CreateEditingJobRequest.h>
#include <g42cloud/mpc/v1/model/CreateEditingJobResponse.h>
#include <g42cloud/mpc/v1/model/DeleteEditingJobRequest.h>
#include <g42cloud/mpc/v1/model/DeleteEditingJobResponse.h>
#include <g42cloud/mpc/v1/model/ListEditingJobRequest.h>
#include <g42cloud/mpc/v1/model/ListEditingJobResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateEncryptReq.h>
#include <g42cloud/mpc/v1/model/CreateEncryptTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateEncryptTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteEncryptTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteEncryptTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListEncryptTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListEncryptTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateExtractTaskReq.h>
#include <g42cloud/mpc/v1/model/CreateExtractTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateExtractTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteExtractTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteExtractTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListExtractTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListExtractTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateMbTasksReportRequest.h>
#include <g42cloud/mpc/v1/model/CreateMbTasksReportResponse.h>
#include <g42cloud/mpc/v1/model/CreateMergeChannelsReq.h>
#include <g42cloud/mpc/v1/model/CreateMergeChannelsTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateMergeChannelsTaskResponse.h>
#include <g42cloud/mpc/v1/model/CreateResetTracksReq.h>
#include <g42cloud/mpc/v1/model/CreateResetTracksTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateResetTracksTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteMergeChannelsTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteMergeChannelsTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteResetTracksTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteResetTracksTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListMergeChannelsTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListMergeChannelsTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListResetTracksTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListResetTracksTaskResponse.h>
#include <g42cloud/mpc/v1/model/MbTasksReportReq.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateMediaProcessReq.h>
#include <g42cloud/mpc/v1/model/CreateMediaProcessTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateMediaProcessTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteMediaProcessTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteMediaProcessTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListMediaProcessTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListMediaProcessTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateMpeCallBackRequest.h>
#include <g42cloud/mpc/v1/model/CreateMpeCallBackResponse.h>
#include <g42cloud/mpc/v1/model/MpeCallBackReq.h>

#include <g42cloud/mpc/v1/model/CreateQualityEnhanceTemplateRequest.h>
#include <g42cloud/mpc/v1/model/CreateQualityEnhanceTemplateResponse.h>
#include <g42cloud/mpc/v1/model/DeleteQualityEnhanceTemplateRequest.h>
#include <g42cloud/mpc/v1/model/DeleteQualityEnhanceTemplateResponse.h>
#include <g42cloud/mpc/v1/model/ListQualityEnhanceDefaultTemplateRequest.h>
#include <g42cloud/mpc/v1/model/ListQualityEnhanceDefaultTemplateResponse.h>
#include <g42cloud/mpc/v1/model/QualityEnhanceTemplate.h>
#include <g42cloud/mpc/v1/model/UpdateQualityEnhanceTemplateReq.h>
#include <g42cloud/mpc/v1/model/UpdateQualityEnhanceTemplateRequest.h>
#include <g42cloud/mpc/v1/model/UpdateQualityEnhanceTemplateResponse.h>

#include <g42cloud/mpc/v1/model/ListTranscodeDetailRequest.h>
#include <g42cloud/mpc/v1/model/ListTranscodeDetailResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CancelRemuxTaskRequest.h>
#include <g42cloud/mpc/v1/model/CancelRemuxTaskResponse.h>
#include <g42cloud/mpc/v1/model/CreateRemuxTaskReq.h>
#include <g42cloud/mpc/v1/model/CreateRemuxTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateRemuxTaskResponse.h>
#include <g42cloud/mpc/v1/model/CreateRetryRemuxTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateRetryRemuxTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteRemuxTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteRemuxTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListRemuxTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListRemuxTaskResponse.h>
#include <g42cloud/mpc/v1/model/RemuxRetryReq.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateTemplateGroupRequest.h>
#include <g42cloud/mpc/v1/model/CreateTemplateGroupResponse.h>
#include <g42cloud/mpc/v1/model/DeleteTemplateGroupRequest.h>
#include <g42cloud/mpc/v1/model/DeleteTemplateGroupResponse.h>
#include <g42cloud/mpc/v1/model/ListTemplateGroupRequest.h>
#include <g42cloud/mpc/v1/model/ListTemplateGroupResponse.h>
#include <g42cloud/mpc/v1/model/ModifyTransTemplateGroup.h>
#include <g42cloud/mpc/v1/model/TransTemplateGroup.h>
#include <g42cloud/mpc/v1/model/UpdateTemplateGroupRequest.h>
#include <g42cloud/mpc/v1/model/UpdateTemplateGroupResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateThumbReq.h>
#include <g42cloud/mpc/v1/model/CreateThumbnailsTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateThumbnailsTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteThumbnailsTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteThumbnailsTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListThumbnailsTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListThumbnailsTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateTranscodingReq.h>
#include <g42cloud/mpc/v1/model/CreateTranscodingTaskRequest.h>
#include <g42cloud/mpc/v1/model/CreateTranscodingTaskResponse.h>
#include <g42cloud/mpc/v1/model/DeleteTranscodingTaskByConsoleRequest.h>
#include <g42cloud/mpc/v1/model/DeleteTranscodingTaskByConsoleResponse.h>
#include <g42cloud/mpc/v1/model/DeleteTranscodingTaskRequest.h>
#include <g42cloud/mpc/v1/model/DeleteTranscodingTaskResponse.h>
#include <g42cloud/mpc/v1/model/ListStatSummaryRequest.h>
#include <g42cloud/mpc/v1/model/ListStatSummaryResponse.h>
#include <g42cloud/mpc/v1/model/ListTranscodingTaskRequest.h>
#include <g42cloud/mpc/v1/model/ListTranscodingTaskResponse.h>
#include <string>

#include <g42cloud/mpc/v1/model/CreateTransTemplateRequest.h>
#include <g42cloud/mpc/v1/model/CreateTransTemplateResponse.h>
#include <g42cloud/mpc/v1/model/DeleteTemplateRequest.h>
#include <g42cloud/mpc/v1/model/DeleteTemplateResponse.h>
#include <g42cloud/mpc/v1/model/ListTemplateRequest.h>
#include <g42cloud/mpc/v1/model/ListTemplateResponse.h>
#include <g42cloud/mpc/v1/model/ModifyTransTemplateReq.h>
#include <g42cloud/mpc/v1/model/TransTemplate.h>
#include <g42cloud/mpc/v1/model/UpdateTransTemplateRequest.h>
#include <g42cloud/mpc/v1/model/UpdateTransTemplateResponse.h>

#include <g42cloud/mpc/v1/model/CreateWatermarkTemplateRequest.h>
#include <g42cloud/mpc/v1/model/CreateWatermarkTemplateResponse.h>
#include <g42cloud/mpc/v1/model/DeleteWatermarkTemplateRequest.h>
#include <g42cloud/mpc/v1/model/DeleteWatermarkTemplateResponse.h>
#include <g42cloud/mpc/v1/model/ListWatermarkTemplateRequest.h>
#include <g42cloud/mpc/v1/model/ListWatermarkTemplateResponse.h>
#include <g42cloud/mpc/v1/model/UpdateWatermarkTemplateRequest.h>
#include <g42cloud/mpc/v1/model/UpdateWatermarkTemplateResponse.h>
#include <g42cloud/mpc/v1/model/WatermarkTemplate.h>

#include <cpprest/details/basic_types.h>
#include <g42cloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {

using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Mpc::V1::Model;

class G42CLOUD_MPC_V1_EXPORT  MpcClient : public Client
{
public:

    MpcClient();

    virtual ~MpcClient();

    static ClientBuilder<MpcClient> newBuilder();

    std::shared_ptr<CreateAnimatedGraphicsTaskResponse> createAnimatedGraphicsTask(
        CreateAnimatedGraphicsTaskRequest &request
    );
    std::shared_ptr<DeleteAnimatedGraphicsTaskResponse> deleteAnimatedGraphicsTask(
        DeleteAnimatedGraphicsTaskRequest &request
    );
    std::shared_ptr<ListAnimatedGraphicsTaskResponse> listAnimatedGraphicsTask(
        ListAnimatedGraphicsTaskRequest &request
    );

    std::shared_ptr<CreateAgenciesTaskResponse> createAgenciesTask(
        CreateAgenciesTaskRequest &request
    );
    std::shared_ptr<ListAllBucketsResponse> listAllBuckets(
        ListAllBucketsRequest &request
    );
    std::shared_ptr<ListAllObsObjListResponse> listAllObsObjList(
        ListAllObsObjListRequest &request
    );
    std::shared_ptr<ListNotifyEventResponse> listNotifyEvent(
        ListNotifyEventRequest &request
    );
    std::shared_ptr<ListNotifySmnTopicConfigResponse> listNotifySmnTopicConfig(
        ListNotifySmnTopicConfigRequest &request
    );
    std::shared_ptr<NotifySmnTopicConfigResponse> notifySmnTopicConfig(
        NotifySmnTopicConfigRequest &request
    );
    std::shared_ptr<ShowAgenciesTaskResponse> showAgenciesTask(
        ShowAgenciesTaskRequest &request
    );
    std::shared_ptr<UpdateBucketAuthorizedResponse> updateBucketAuthorized(
        UpdateBucketAuthorizedRequest &request
    );

    std::shared_ptr<CreateEditingJobResponse> createEditingJob(
        CreateEditingJobRequest &request
    );
    std::shared_ptr<DeleteEditingJobResponse> deleteEditingJob(
        DeleteEditingJobRequest &request
    );
    std::shared_ptr<ListEditingJobResponse> listEditingJob(
        ListEditingJobRequest &request
    );

    std::shared_ptr<CreateEncryptTaskResponse> createEncryptTask(
        CreateEncryptTaskRequest &request
    );
    std::shared_ptr<DeleteEncryptTaskResponse> deleteEncryptTask(
        DeleteEncryptTaskRequest &request
    );
    std::shared_ptr<ListEncryptTaskResponse> listEncryptTask(
        ListEncryptTaskRequest &request
    );

    std::shared_ptr<CreateExtractTaskResponse> createExtractTask(
        CreateExtractTaskRequest &request
    );
    std::shared_ptr<DeleteExtractTaskResponse> deleteExtractTask(
        DeleteExtractTaskRequest &request
    );
    std::shared_ptr<ListExtractTaskResponse> listExtractTask(
        ListExtractTaskRequest &request
    );

    std::shared_ptr<CreateMbTasksReportResponse> createMbTasksReport(
        CreateMbTasksReportRequest &request
    );
    std::shared_ptr<CreateMergeChannelsTaskResponse> createMergeChannelsTask(
        CreateMergeChannelsTaskRequest &request
    );
    std::shared_ptr<CreateResetTracksTaskResponse> createResetTracksTask(
        CreateResetTracksTaskRequest &request
    );
    std::shared_ptr<DeleteMergeChannelsTaskResponse> deleteMergeChannelsTask(
        DeleteMergeChannelsTaskRequest &request
    );
    std::shared_ptr<DeleteResetTracksTaskResponse> deleteResetTracksTask(
        DeleteResetTracksTaskRequest &request
    );
    std::shared_ptr<ListMergeChannelsTaskResponse> listMergeChannelsTask(
        ListMergeChannelsTaskRequest &request
    );
    std::shared_ptr<ListResetTracksTaskResponse> listResetTracksTask(
        ListResetTracksTaskRequest &request
    );

    std::shared_ptr<CreateMediaProcessTaskResponse> createMediaProcessTask(
        CreateMediaProcessTaskRequest &request
    );
    std::shared_ptr<DeleteMediaProcessTaskResponse> deleteMediaProcessTask(
        DeleteMediaProcessTaskRequest &request
    );
    std::shared_ptr<ListMediaProcessTaskResponse> listMediaProcessTask(
        ListMediaProcessTaskRequest &request
    );

    std::shared_ptr<CreateMpeCallBackResponse> createMpeCallBack(
        CreateMpeCallBackRequest &request
    );

    std::shared_ptr<CreateQualityEnhanceTemplateResponse> createQualityEnhanceTemplate(
        CreateQualityEnhanceTemplateRequest &request
    );
    std::shared_ptr<DeleteQualityEnhanceTemplateResponse> deleteQualityEnhanceTemplate(
        DeleteQualityEnhanceTemplateRequest &request
    );
    std::shared_ptr<ListQualityEnhanceDefaultTemplateResponse> listQualityEnhanceDefaultTemplate(
        ListQualityEnhanceDefaultTemplateRequest &request
    );
    std::shared_ptr<UpdateQualityEnhanceTemplateResponse> updateQualityEnhanceTemplate(
        UpdateQualityEnhanceTemplateRequest &request
    );

    std::shared_ptr<ListTranscodeDetailResponse> listTranscodeDetail(
        ListTranscodeDetailRequest &request
    );

    std::shared_ptr<CancelRemuxTaskResponse> cancelRemuxTask(
        CancelRemuxTaskRequest &request
    );
    std::shared_ptr<CreateRemuxTaskResponse> createRemuxTask(
        CreateRemuxTaskRequest &request
    );
    std::shared_ptr<CreateRetryRemuxTaskResponse> createRetryRemuxTask(
        CreateRetryRemuxTaskRequest &request
    );
    std::shared_ptr<DeleteRemuxTaskResponse> deleteRemuxTask(
        DeleteRemuxTaskRequest &request
    );
    std::shared_ptr<ListRemuxTaskResponse> listRemuxTask(
        ListRemuxTaskRequest &request
    );

    std::shared_ptr<CreateTemplateGroupResponse> createTemplateGroup(
        CreateTemplateGroupRequest &request
    );
    std::shared_ptr<DeleteTemplateGroupResponse> deleteTemplateGroup(
        DeleteTemplateGroupRequest &request
    );
    std::shared_ptr<ListTemplateGroupResponse> listTemplateGroup(
        ListTemplateGroupRequest &request
    );
    std::shared_ptr<UpdateTemplateGroupResponse> updateTemplateGroup(
        UpdateTemplateGroupRequest &request
    );

    std::shared_ptr<CreateThumbnailsTaskResponse> createThumbnailsTask(
        CreateThumbnailsTaskRequest &request
    );
    std::shared_ptr<DeleteThumbnailsTaskResponse> deleteThumbnailsTask(
        DeleteThumbnailsTaskRequest &request
    );
    std::shared_ptr<ListThumbnailsTaskResponse> listThumbnailsTask(
        ListThumbnailsTaskRequest &request
    );

    std::shared_ptr<CreateTranscodingTaskResponse> createTranscodingTask(
        CreateTranscodingTaskRequest &request
    );
    std::shared_ptr<DeleteTranscodingTaskResponse> deleteTranscodingTask(
        DeleteTranscodingTaskRequest &request
    );
    std::shared_ptr<DeleteTranscodingTaskByConsoleResponse> deleteTranscodingTaskByConsole(
        DeleteTranscodingTaskByConsoleRequest &request
    );
    std::shared_ptr<ListStatSummaryResponse> listStatSummary(
        ListStatSummaryRequest &request
    );
    std::shared_ptr<ListTranscodingTaskResponse> listTranscodingTask(
        ListTranscodingTaskRequest &request
    );

    std::shared_ptr<CreateTransTemplateResponse> createTransTemplate(
        CreateTransTemplateRequest &request
    );
    std::shared_ptr<DeleteTemplateResponse> deleteTemplate(
        DeleteTemplateRequest &request
    );
    std::shared_ptr<ListTemplateResponse> listTemplate(
        ListTemplateRequest &request
    );
    std::shared_ptr<UpdateTransTemplateResponse> updateTransTemplate(
        UpdateTransTemplateRequest &request
    );

    std::shared_ptr<CreateWatermarkTemplateResponse> createWatermarkTemplate(
        CreateWatermarkTemplateRequest &request
    );
    std::shared_ptr<DeleteWatermarkTemplateResponse> deleteWatermarkTemplate(
        DeleteWatermarkTemplateRequest &request
    );
    std::shared_ptr<ListWatermarkTemplateResponse> listWatermarkTemplate(
        ListWatermarkTemplateRequest &request
    );
    std::shared_ptr<UpdateWatermarkTemplateResponse> updateWatermarkTemplate(
        UpdateWatermarkTemplateRequest &request
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
    std::string parameterToString(const Object& obj);
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

template class G42CLOUD_MPC_V1_EXPORT ::G42Cloud::Sdk::Core::ClientBuilder<::G42Cloud::Sdk::Mpc::V1::MpcClient>;

#endif // G42CLOUD_SDK_MPC_V1_MpcClient_H_

