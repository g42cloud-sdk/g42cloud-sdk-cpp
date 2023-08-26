
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <g42cloud/mpc/v1/model/SourceInfo.h>
#include <string>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  OutputFileInfo
    : public ModelBase
{
public:
    OutputFileInfo();
    virtual ~OutputFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputFileInfo members


    std::string getOutputFileName() const;
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::string& value);


    std::string getExecDescription() const;
    bool execDescriptionIsSet() const;
    void unsetexecDescription();
    void setExecDescription(const std::string& value);


    SourceInfo getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const SourceInfo& value);


protected:
    std::string outputFileName_;
    bool outputFileNameIsSet_;
    std::string execDescription_;
    bool execDescriptionIsSet_;
    SourceInfo metaData_;
    bool metaDataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_OutputFileInfo_H_
