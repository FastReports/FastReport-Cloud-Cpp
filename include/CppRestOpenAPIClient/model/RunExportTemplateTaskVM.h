/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RunExportTemplateTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunExportTemplateTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_RunExportTemplateTaskVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/RunExportReportTaskVM.h"
#include <cpprest/details/basic_types.h>
#include <map>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  RunExportTemplateTaskVM
    : public ModelBase
{
public:
    RunExportTemplateTaskVM();
    virtual ~RunExportTemplateTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunExportTemplateTaskVM members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getReportParameters();
    bool reportParametersIsSet() const;
    void unsetreportParameters();

    void setReportParameters(const std::map<utility::string_t, utility::string_t>& value);


protected:
    std::map<utility::string_t, utility::string_t> m_reportParameters;
    bool m_reportParametersIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunExportTemplateTaskVM_H_ */