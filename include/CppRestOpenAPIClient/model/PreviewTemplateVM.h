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
 * PreviewTemplateVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_PreviewTemplateVM_H_
#define FASTREPORT_CLOUD_MODELS_PreviewTemplateVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include <map>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  PreviewTemplateVM
    : public CloudBaseVM
{
public:
    PreviewTemplateVM();
    virtual ~PreviewTemplateVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PreviewTemplateVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();

    void setLocale(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getReportParameters();
    bool reportParametersIsSet() const;
    void unsetreportParameters();

    void setReportParameters(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    double getCacheTolerance() const;
    bool cacheToleranceIsSet() const;
    void unsetcacheTolerance();

    void setCacheTolerance(double value);


protected:
    utility::string_t m_locale;
    bool m_localeIsSet;
    std::map<utility::string_t, utility::string_t> m_reportParameters;
    bool m_reportParametersIsSet;
    double m_cacheTolerance;
    bool m_cacheToleranceIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_PreviewTemplateVM_H_ */
