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
 * UpdateExportReportTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_UpdateExportReportTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_UpdateExportReportTaskVM_H_


#include "CppRestOpenAPIClient/model/InputFileVM.h"
#include "CppRestOpenAPIClient/model/CreateTaskEndVM.h"
#include "CppRestOpenAPIClient/model/OutputFileVM.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/UpdateTransformTaskBaseVM.h"
#include <map>
#include "CppRestOpenAPIClient/model/ExportFormat.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class InputFileVM;
class OutputFileVM;
class CreateTaskEndVM;

/// <summary>
/// 
/// </summary>
class  UpdateExportReportTaskVM
    : public UpdateTransformTaskBaseVM
{
public:
    UpdateExportReportTaskVM();
    virtual ~UpdateExportReportTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateExportReportTaskVM members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getExportParameters();
    bool exportParametersIsSet() const;
    void unsetexportParameters();

    void setExportParameters(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExportFormat> getFormat() const;
    bool formatIsSet() const;
    void unsetformat();

    void setFormat(const std::shared_ptr<ExportFormat>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPagesCount() const;
    bool pagesCountIsSet() const;
    void unsetpagesCount();

    void setPagesCount(int32_t value);


protected:
    std::map<utility::string_t, utility::string_t> m_exportParameters;
    bool m_exportParametersIsSet;
    std::shared_ptr<ExportFormat> m_format;
    bool m_formatIsSet;
    int32_t m_pagesCount;
    bool m_pagesCountIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_UpdateExportReportTaskVM_H_ */
