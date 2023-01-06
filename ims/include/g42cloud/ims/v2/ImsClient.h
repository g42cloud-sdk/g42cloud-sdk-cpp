#ifndef G42CLOUD_SDK_IMS_V2_ImsClient_H_
#define G42CLOUD_SDK_IMS_V2_ImsClient_H_

#include <g42cloud/ims/v2/ImsExport.h>
#include <g42cloud/core/Client.h>
#include <g42cloud/core/ClientBuilder.h>


#include <g42cloud/ims/v2/model/AddImageTagRequest.h>
#include <g42cloud/ims/v2/model/AddImageTagRequestBody.h>
#include <g42cloud/ims/v2/model/AddImageTagResponse.h>
#include <g42cloud/ims/v2/model/AddOrUpdateTagsRequestBody.h>
#include <g42cloud/ims/v2/model/BatchAddMembersRequest.h>
#include <g42cloud/ims/v2/model/BatchAddMembersRequestBody.h>
#include <g42cloud/ims/v2/model/BatchAddMembersResponse.h>
#include <g42cloud/ims/v2/model/BatchAddOrDeleteTagsRequest.h>
#include <g42cloud/ims/v2/model/BatchAddOrDeleteTagsRequestBody.h>
#include <g42cloud/ims/v2/model/BatchAddOrDeleteTagsResponse.h>
#include <g42cloud/ims/v2/model/BatchDeleteMembersRequest.h>
#include <g42cloud/ims/v2/model/BatchDeleteMembersResponse.h>
#include <g42cloud/ims/v2/model/BatchUpdateMembersRequest.h>
#include <g42cloud/ims/v2/model/BatchUpdateMembersRequestBody.h>
#include <g42cloud/ims/v2/model/BatchUpdateMembersResponse.h>
#include <g42cloud/ims/v2/model/CopyImageCrossRegionRequest.h>
#include <g42cloud/ims/v2/model/CopyImageCrossRegionRequestBody.h>
#include <g42cloud/ims/v2/model/CopyImageCrossRegionResponse.h>
#include <g42cloud/ims/v2/model/CopyImageInRegionRequest.h>
#include <g42cloud/ims/v2/model/CopyImageInRegionRequestBody.h>
#include <g42cloud/ims/v2/model/CopyImageInRegionResponse.h>
#include <g42cloud/ims/v2/model/CreateDataImageRequest.h>
#include <g42cloud/ims/v2/model/CreateDataImageRequestBody.h>
#include <g42cloud/ims/v2/model/CreateDataImageResponse.h>
#include <g42cloud/ims/v2/model/CreateImageRequest.h>
#include <g42cloud/ims/v2/model/CreateImageRequestBody.h>
#include <g42cloud/ims/v2/model/CreateImageResponse.h>
#include <g42cloud/ims/v2/model/CreateOrUpdateTagsRequest.h>
#include <g42cloud/ims/v2/model/CreateOrUpdateTagsResponse.h>
#include <g42cloud/ims/v2/model/CreateWholeImageRequest.h>
#include <g42cloud/ims/v2/model/CreateWholeImageRequestBody.h>
#include <g42cloud/ims/v2/model/CreateWholeImageResponse.h>
#include <g42cloud/ims/v2/model/DeleteImageTagRequest.h>
#include <g42cloud/ims/v2/model/DeleteImageTagResponse.h>
#include <g42cloud/ims/v2/model/ExportImageRequest.h>
#include <g42cloud/ims/v2/model/ExportImageRequestBody.h>
#include <g42cloud/ims/v2/model/ExportImageResponse.h>
#include <g42cloud/ims/v2/model/ImportImageQuickRequest.h>
#include <g42cloud/ims/v2/model/ImportImageQuickResponse.h>
#include <g42cloud/ims/v2/model/ListImageByTagsRequest.h>
#include <g42cloud/ims/v2/model/ListImageByTagsRequestBody.h>
#include <g42cloud/ims/v2/model/ListImageByTagsResponse.h>
#include <g42cloud/ims/v2/model/ListImageTagsRequest.h>
#include <g42cloud/ims/v2/model/ListImageTagsResponse.h>
#include <g42cloud/ims/v2/model/ListImagesRequest.h>
#include <g42cloud/ims/v2/model/ListImagesResponse.h>
#include <g42cloud/ims/v2/model/ListImagesTagsRequest.h>
#include <g42cloud/ims/v2/model/ListImagesTagsResponse.h>
#include <g42cloud/ims/v2/model/ListOsVersionsRequest.h>
#include <g42cloud/ims/v2/model/ListOsVersionsResponse.h>
#include <g42cloud/ims/v2/model/ListOsVersionsResponseBody.h>
#include <g42cloud/ims/v2/model/ListTagsRequest.h>
#include <g42cloud/ims/v2/model/ListTagsResponse.h>
#include <g42cloud/ims/v2/model/QuickImportImageByFileRequestBody.h>
#include <g42cloud/ims/v2/model/RegisterImageRequest.h>
#include <g42cloud/ims/v2/model/RegisterImageRequestBody.h>
#include <g42cloud/ims/v2/model/RegisterImageResponse.h>
#include <g42cloud/ims/v2/model/ShowImageQuotaRequest.h>
#include <g42cloud/ims/v2/model/ShowImageQuotaResponse.h>
#include <g42cloud/ims/v2/model/ShowJobProgressRequest.h>
#include <g42cloud/ims/v2/model/ShowJobProgressResponse.h>
#include <g42cloud/ims/v2/model/ShowJobRequest.h>
#include <g42cloud/ims/v2/model/ShowJobResponse.h>
#include <g42cloud/ims/v2/model/UpdateImageRequest.h>
#include <g42cloud/ims/v2/model/UpdateImageRequestBody.h>
#include <g42cloud/ims/v2/model/UpdateImageResponse.h>
#include <string>
#include <vector>

#include <g42cloud/ims/v2/model/ListVersionsRequest.h>
#include <g42cloud/ims/v2/model/ListVersionsResponse.h>
#include <g42cloud/ims/v2/model/ShowVersionRequest.h>
#include <g42cloud/ims/v2/model/ShowVersionResponse.h>
#include <string>

#include <g42cloud/ims/v2/model/GlanceAddImageMemberRequest.h>
#include <g42cloud/ims/v2/model/GlanceAddImageMemberRequestBody.h>
#include <g42cloud/ims/v2/model/GlanceAddImageMemberResponse.h>
#include <g42cloud/ims/v2/model/GlanceCreateImageMetadataRequest.h>
#include <g42cloud/ims/v2/model/GlanceCreateImageMetadataRequestBody.h>
#include <g42cloud/ims/v2/model/GlanceCreateImageMetadataResponse.h>
#include <g42cloud/ims/v2/model/GlanceCreateTagRequest.h>
#include <g42cloud/ims/v2/model/GlanceCreateTagResponse.h>
#include <g42cloud/ims/v2/model/GlanceDeleteImageMemberRequest.h>
#include <g42cloud/ims/v2/model/GlanceDeleteImageMemberResponse.h>
#include <g42cloud/ims/v2/model/GlanceDeleteImageRequest.h>
#include <g42cloud/ims/v2/model/GlanceDeleteImageRequestBody.h>
#include <g42cloud/ims/v2/model/GlanceDeleteImageResponse.h>
#include <g42cloud/ims/v2/model/GlanceDeleteTagRequest.h>
#include <g42cloud/ims/v2/model/GlanceDeleteTagResponse.h>
#include <g42cloud/ims/v2/model/GlanceListImageMemberSchemasRequest.h>
#include <g42cloud/ims/v2/model/GlanceListImageMemberSchemasResponse.h>
#include <g42cloud/ims/v2/model/GlanceListImageMembersRequest.h>
#include <g42cloud/ims/v2/model/GlanceListImageMembersResponse.h>
#include <g42cloud/ims/v2/model/GlanceListImageSchemasRequest.h>
#include <g42cloud/ims/v2/model/GlanceListImageSchemasResponse.h>
#include <g42cloud/ims/v2/model/GlanceListImagesRequest.h>
#include <g42cloud/ims/v2/model/GlanceListImagesResponse.h>
#include <g42cloud/ims/v2/model/GlanceShowImageMemberRequest.h>
#include <g42cloud/ims/v2/model/GlanceShowImageMemberResponse.h>
#include <g42cloud/ims/v2/model/GlanceShowImageMemberSchemasRequest.h>
#include <g42cloud/ims/v2/model/GlanceShowImageMemberSchemasResponse.h>
#include <g42cloud/ims/v2/model/GlanceShowImageRequest.h>
#include <g42cloud/ims/v2/model/GlanceShowImageResponse.h>
#include <g42cloud/ims/v2/model/GlanceShowImageSchemasRequest.h>
#include <g42cloud/ims/v2/model/GlanceShowImageSchemasResponse.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageMemberRequest.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageMemberRequestBody.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageMemberResponse.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageRequest.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageRequestBody.h>
#include <g42cloud/ims/v2/model/GlanceUpdateImageResponse.h>
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include <g42cloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace G42Cloud::Sdk::Core;
using namespace G42Cloud::Sdk::Ims::V2::Model;

class G42CLOUD_IMS_V2_EXPORT  ImsClient : public Client
{
public:

    ImsClient();

    virtual ~ImsClient();

    static ClientBuilder<ImsClient> newBuilder();

    std::shared_ptr<AddImageTagResponse> addImageTag(
        AddImageTagRequest &request
    );
    std::shared_ptr<BatchAddMembersResponse> batchAddMembers(
        BatchAddMembersRequest &request
    );
    std::shared_ptr<BatchAddOrDeleteTagsResponse> batchAddOrDeleteTags(
        BatchAddOrDeleteTagsRequest &request
    );
    std::shared_ptr<BatchDeleteMembersResponse> batchDeleteMembers(
        BatchDeleteMembersRequest &request
    );
    std::shared_ptr<BatchUpdateMembersResponse> batchUpdateMembers(
        BatchUpdateMembersRequest &request
    );
    std::shared_ptr<CopyImageCrossRegionResponse> copyImageCrossRegion(
        CopyImageCrossRegionRequest &request
    );
    std::shared_ptr<CopyImageInRegionResponse> copyImageInRegion(
        CopyImageInRegionRequest &request
    );
    std::shared_ptr<CreateDataImageResponse> createDataImage(
        CreateDataImageRequest &request
    );
    std::shared_ptr<CreateImageResponse> createImage(
        CreateImageRequest &request
    );
    std::shared_ptr<CreateOrUpdateTagsResponse> createOrUpdateTags(
        CreateOrUpdateTagsRequest &request
    );
    std::shared_ptr<CreateWholeImageResponse> createWholeImage(
        CreateWholeImageRequest &request
    );
    std::shared_ptr<DeleteImageTagResponse> deleteImageTag(
        DeleteImageTagRequest &request
    );
    std::shared_ptr<ExportImageResponse> exportImage(
        ExportImageRequest &request
    );
    std::shared_ptr<ImportImageQuickResponse> importImageQuick(
        ImportImageQuickRequest &request
    );
    std::shared_ptr<ListImageByTagsResponse> listImageByTags(
        ListImageByTagsRequest &request
    );
    std::shared_ptr<ListImageTagsResponse> listImageTags(
        ListImageTagsRequest &request
    );
    std::shared_ptr<ListImagesResponse> listImages(
        ListImagesRequest &request
    );
    std::shared_ptr<ListImagesTagsResponse> listImagesTags(
        ListImagesTagsRequest &request
    );
    std::shared_ptr<ListOsVersionsResponse> listOsVersions(
        ListOsVersionsRequest &request
    );
    std::shared_ptr<ListTagsResponse> listTags(
        ListTagsRequest &request
    );
    std::shared_ptr<RegisterImageResponse> registerImage(
        RegisterImageRequest &request
    );
    std::shared_ptr<ShowImageQuotaResponse> showImageQuota(
        ShowImageQuotaRequest &request
    );
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    std::shared_ptr<ShowJobProgressResponse> showJobProgress(
        ShowJobProgressRequest &request
    );
    std::shared_ptr<UpdateImageResponse> updateImage(
        UpdateImageRequest &request
    );

    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
    );

    std::shared_ptr<GlanceAddImageMemberResponse> glanceAddImageMember(
        GlanceAddImageMemberRequest &request
    );
    std::shared_ptr<GlanceCreateImageMetadataResponse> glanceCreateImageMetadata(
        GlanceCreateImageMetadataRequest &request
    );
    std::shared_ptr<GlanceCreateTagResponse> glanceCreateTag(
        GlanceCreateTagRequest &request
    );
    std::shared_ptr<GlanceDeleteImageResponse> glanceDeleteImage(
        GlanceDeleteImageRequest &request
    );
    std::shared_ptr<GlanceDeleteImageMemberResponse> glanceDeleteImageMember(
        GlanceDeleteImageMemberRequest &request
    );
    std::shared_ptr<GlanceDeleteTagResponse> glanceDeleteTag(
        GlanceDeleteTagRequest &request
    );
    std::shared_ptr<GlanceListImageMemberSchemasResponse> glanceListImageMemberSchemas(
        GlanceListImageMemberSchemasRequest &request
    );
    std::shared_ptr<GlanceListImageMembersResponse> glanceListImageMembers(
        GlanceListImageMembersRequest &request
    );
    std::shared_ptr<GlanceListImageSchemasResponse> glanceListImageSchemas(
        GlanceListImageSchemasRequest &request
    );
    std::shared_ptr<GlanceListImagesResponse> glanceListImages(
        GlanceListImagesRequest &request
    );
    std::shared_ptr<GlanceShowImageResponse> glanceShowImage(
        GlanceShowImageRequest &request
    );
    std::shared_ptr<GlanceShowImageMemberResponse> glanceShowImageMember(
        GlanceShowImageMemberRequest &request
    );
    std::shared_ptr<GlanceShowImageMemberSchemasResponse> glanceShowImageMemberSchemas(
        GlanceShowImageMemberSchemasRequest &request
    );
    std::shared_ptr<GlanceShowImageSchemasResponse> glanceShowImageSchemas(
        GlanceShowImageSchemasRequest &request
    );
    std::shared_ptr<GlanceUpdateImageResponse> glanceUpdateImage(
        GlanceUpdateImageRequest &request
    );
    std::shared_ptr<GlanceUpdateImageMemberResponse> glanceUpdateImageMember(
        GlanceUpdateImageMemberRequest &request
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

template class G42CLOUD_IMS_V2_EXPORT ::G42Cloud::Sdk::Core::ClientBuilder<::G42Cloud::Sdk::Ims::V2::ImsClient>;

#endif // G42CLOUD_SDK_IMS_V2_ImsClient_H_

