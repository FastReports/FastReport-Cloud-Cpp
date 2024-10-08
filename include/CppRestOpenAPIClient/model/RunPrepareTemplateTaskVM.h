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
 * RunPrepareTemplateTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunPrepareTemplateTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_RunPrepareTemplateTaskVM_H_


#include "CppRestOpenAPIClient/model/RunInputFileVM.h"
#include "CppRestOpenAPIClient/model/RunTransformTaskBaseVM.h"
#include "CppRestOpenAPIClient/model/OutputFileVM.h"
#include "CppRestOpenAPIClient/model/RunExportReportTaskVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/RunTransportTaskBaseVM.h"
#include <map>
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class RunExportReportTaskVM;
class RunInputFileVM;
class OutputFileVM;
class RunTransportTaskBaseVM;

/// <summary>
/// 
/// </summary>
class  RunPrepareTemplateTaskVM
    : public RunTransformTaskBaseVM
{
public:
    RunPrepareTemplateTaskVM();
    virtual ~RunPrepareTemplateTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunPrepareTemplateTaskVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RunExportReportTaskVM>>& getExports();
    bool exportsIsSet() const;
    void unsetexports();

    void setExports(const std::vector<std::shared_ptr<RunExportReportTaskVM>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPagesCount() const;
    bool pagesCountIsSet() const;
    void unsetpagesCount();

    void setPagesCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getReportParameters();
    bool reportParametersIsSet() const;
    void unsetreportParameters();

    void setReportParameters(const std::map<utility::string_t, utility::string_t>& value);


protected:
    std::vector<std::shared_ptr<RunExportReportTaskVM>> m_exports;
    bool m_exportsIsSet;
    int32_t m_pagesCount;
    bool m_pagesCountIsSet;
    std::map<utility::string_t, utility::string_t> m_reportParameters;
    bool m_reportParametersIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunPrepareTemplateTaskVM_H_ */
