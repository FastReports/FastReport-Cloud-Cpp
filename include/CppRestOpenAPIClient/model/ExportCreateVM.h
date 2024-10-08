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
 * ExportCreateVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_ExportCreateVM_H_
#define FASTREPORT_CLOUD_MODELS_ExportCreateVM_H_


#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/FileCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  ExportCreateVM
    : public FileCreateVM
{
public:
    ExportCreateVM();
    virtual ~ExportCreateVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExportCreateVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();

    void setTemplateId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReportId() const;
    bool reportIdIsSet() const;
    void unsetreportId();

    void setReportId(const utility::string_t& value);


protected:
    utility::string_t m_templateId;
    bool m_templateIdIsSet;
    utility::string_t m_reportId;
    bool m_reportIdIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_ExportCreateVM_H_ */
