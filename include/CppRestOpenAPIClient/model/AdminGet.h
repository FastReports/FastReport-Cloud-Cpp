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
 * AdminGet.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AdminGet_H_
#define FASTREPORT_CLOUD_MODELS_AdminGet_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  AdminGet
    : public ModelBase
{
public:
    AdminGet();
    virtual ~AdminGet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eAdminGet
    {
        AdminGet__0,
        AdminGet__1,
        AdminGet__2,
        AdminGet__4,
        AdminGet__8,
        AdminGet__16,
        AdminGet__32,
        AdminGet__64,
        AdminGet__128,
        AdminGet__256,
        AdminGet__512,
        AdminGet__12,
    };

    eAdminGet getValue() const;
    void setValue(eAdminGet const value);

    protected:
        eAdminGet m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AdminGet_H_ */
