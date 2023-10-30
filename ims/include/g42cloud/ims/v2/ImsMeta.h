#ifndef G42CLOUD_SDK_IMS_V2_ImsMeta_H_
#define G42CLOUD_SDK_IMS_V2_ImsMeta_H_

#include <g42cloud/core/http/HttpRequestDef.h>
#include <g42cloud/ims/v2/ImsExport.h>

namespace G42Cloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace G42Cloud::Sdk::Core::Http;

class G42CLOUD_IMS_V2_EXPORT  ImsMeta {
public:
    static HttpRequestDef genRequestDefForAddImageTag();
    static HttpRequestDef genRequestDefForBatchAddMembers();
    static HttpRequestDef genRequestDefForBatchAddOrDeleteTags();
    static HttpRequestDef genRequestDefForBatchDeleteMembers();
    static HttpRequestDef genRequestDefForBatchUpdateMembers();
    static HttpRequestDef genRequestDefForCopyImageCrossRegion();
    static HttpRequestDef genRequestDefForCopyImageInRegion();
    static HttpRequestDef genRequestDefForCreateDataImage();
    static HttpRequestDef genRequestDefForCreateImage();
    static HttpRequestDef genRequestDefForCreateOrUpdateTags();
    static HttpRequestDef genRequestDefForCreateWholeImage();
    static HttpRequestDef genRequestDefForDeleteImageTag();
    static HttpRequestDef genRequestDefForExportImage();
    static HttpRequestDef genRequestDefForImportImageQuick();
    static HttpRequestDef genRequestDefForListImageByTags();
    static HttpRequestDef genRequestDefForListImageTags();
    static HttpRequestDef genRequestDefForListImages();
    static HttpRequestDef genRequestDefForListImagesTags();
    static HttpRequestDef genRequestDefForListOsVersions();
    static HttpRequestDef genRequestDefForListTags();
    static HttpRequestDef genRequestDefForRegisterImage();
    static HttpRequestDef genRequestDefForShowImageQuota();
    static HttpRequestDef genRequestDefForShowJob();
    static HttpRequestDef genRequestDefForShowJobProgress();
    static HttpRequestDef genRequestDefForUpdateImage();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForShowVersion();
    static HttpRequestDef genRequestDefForGlanceAddImageMember();
    static HttpRequestDef genRequestDefForGlanceCreateImageMetadata();
    static HttpRequestDef genRequestDefForGlanceCreateTag();
    static HttpRequestDef genRequestDefForGlanceDeleteImage();
    static HttpRequestDef genRequestDefForGlanceDeleteImageMember();
    static HttpRequestDef genRequestDefForGlanceDeleteTag();
    static HttpRequestDef genRequestDefForGlanceListImageMemberSchemas();
    static HttpRequestDef genRequestDefForGlanceListImageMembers();
    static HttpRequestDef genRequestDefForGlanceListImageSchemas();
    static HttpRequestDef genRequestDefForGlanceListImages();
    static HttpRequestDef genRequestDefForGlanceShowImage();
    static HttpRequestDef genRequestDefForGlanceShowImageMember();
    static HttpRequestDef genRequestDefForGlanceShowImageMemberSchemas();
    static HttpRequestDef genRequestDefForGlanceShowImageSchemas();
    static HttpRequestDef genRequestDefForGlanceUpdateImage();
    static HttpRequestDef genRequestDefForGlanceUpdateImageMember();
};

}
}
}
}

#endif // G42CLOUD_SDK_IMS_V2_ImsMeta_H_
