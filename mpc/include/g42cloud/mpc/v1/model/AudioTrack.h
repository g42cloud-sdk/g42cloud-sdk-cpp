
#ifndef G42CLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_
#define G42CLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_


#include <g42cloud/mpc/v1/MpcExport.h>

#include <g42cloud/core/utils/ModelBase.h>
#include <g42cloud/core/utils/Utils.h>
#include <g42cloud/core/http/HttpResponse.h>


namespace G42Cloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace G42Cloud::Sdk::Core::Utils;
using namespace G42Cloud::Sdk::Core::Http;
class G42CLOUD_MPC_V1_EXPORT  AudioTrack
    : public ModelBase
{
public:
    AudioTrack();
    virtual ~AudioTrack();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioTrack members


    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


    int32_t getLeft() const;
    bool leftIsSet() const;
    void unsetleft();
    void setLeft(int32_t value);


    int32_t getRight() const;
    bool rightIsSet() const;
    void unsetright();
    void setRight(int32_t value);


protected:
    int32_t type_;
    bool typeIsSet_;
    int32_t left_;
    bool leftIsSet_;
    int32_t right_;
    bool rightIsSet_;

};


}
}
}
}
}

#endif // G42CLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_
