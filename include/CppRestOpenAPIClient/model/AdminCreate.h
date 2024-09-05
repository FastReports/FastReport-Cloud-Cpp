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
 * AdminCreate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AdminCreate_H_
#define FASTREPORT_CLOUD_MODELS_AdminCreate_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  AdminCreate
    : public ModelBase
{
public:
    AdminCreate();
    virtual ~AdminCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eAdminCreate
    {
        AdminCreate__0,
        AdminCreate__1,
        AdminCreate__2,
        AdminCreate__4,
        AdminCreate__8,
        AdminCreate__16,
        AdminCreate__32,
        AdminCreate__64,
        AdminCreate__128,
        AdminCreate__12,
    };

    eAdminCreate getValue() const;
    void setValue(eAdminCreate const value);

    protected:
        eAdminCreate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AdminCreate_H_ */