/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GroupDelete.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_GroupDelete_H_
#define FASTREPORT_CLOUD_MODELS_GroupDelete_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  GroupDelete
    : public ModelBase
{
public:
    GroupDelete();
    virtual ~GroupDelete();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eGroupDelete
    {
        GroupDelete__0,
        GroupDelete__1,
        GroupDelete__2,
        GroupDelete__12,
    };

    eGroupDelete getValue() const;
    void setValue(eGroupDelete const value);

    protected:
        eGroupDelete m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_GroupDelete_H_ */
