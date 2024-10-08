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
 * GroupUpdate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_GroupUpdate_H_
#define FASTREPORT_CLOUD_MODELS_GroupUpdate_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  GroupUpdate
    : public ModelBase
{
public:
    GroupUpdate();
    virtual ~GroupUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eGroupUpdate
    {
        GroupUpdate__0,
        GroupUpdate__1,
        GroupUpdate__12,
    };

    eGroupUpdate getValue() const;
    void setValue(eGroupUpdate const value);

    protected:
        eGroupUpdate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_GroupUpdate_H_ */
