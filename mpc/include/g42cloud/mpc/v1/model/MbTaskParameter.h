
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_

#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/http/HttpResponse.h>

#include <string>
#include <g42cloud/mpc/v1/model/MetaData.h>

namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  MbTaskParameter
    : public ModelBase
{
public:
    MbTaskParameter();
    virtual ~MbTaskParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MbTaskParameter members


    std::string getStatusDescription() const;
    bool statusDescriptionIsSet() const;
    void unsetstatusDescription();
    void setStatusDescription(const std::string& value);


    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);


    MetaData getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const MetaData& value);


protected:
    std::string statusDescription_;
    bool statusDescriptionIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;
    MetaData metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_MbTaskParameter_H_
