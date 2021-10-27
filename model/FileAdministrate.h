/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FileAdministrate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_FileAdministrate_H_
#define FASTREPORT_CLOUD_MODELS_FileAdministrate_H_

#include "CloudKludge.h"
#include "../ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  FileAdministrate
    : public ModelBase
{
public:
    FileAdministrate();
    virtual ~FileAdministrate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eFileAdministrate
    {
        FileAdministrate__0,
        FileAdministrate__1,
        FileAdministrate__2,
        FileAdministrate__4,
        FileAdministrate__8,
        FileAdministrate__1,
    };

    eFileAdministrate getValue() const;
    void setValue(eFileAdministrate const value);

    protected:
        eFileAdministrate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_FileAdministrate_H_ */