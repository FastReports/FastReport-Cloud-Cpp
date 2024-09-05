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
 * DataSourceAdministrate.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_DataSourceAdministrate_H_
#define FASTREPORT_CLOUD_MODELS_DataSourceAdministrate_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"


namespace fastreport {
namespace cloud {
namespace models {

class  DataSourceAdministrate
    : public ModelBase
{
public:
    DataSourceAdministrate();
    virtual ~DataSourceAdministrate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eDataSourceAdministrate
    {
        DataSourceAdministrate__0,
        DataSourceAdministrate__1,
        DataSourceAdministrate__2,
        DataSourceAdministrate__4,
        DataSourceAdministrate__8,
        DataSourceAdministrate__12,
    };

    eDataSourceAdministrate getValue() const;
    void setValue(eDataSourceAdministrate const value);

    protected:
        eDataSourceAdministrate m_value;
};

}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_DataSourceAdministrate_H_ */
