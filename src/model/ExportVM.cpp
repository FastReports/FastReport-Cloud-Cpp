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



#include "CppRestOpenAPIClient/model/ExportVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ExportVM::ExportVM()
{
    m_formatIsSet = false;
    m_reportId = utility::conversions::to_string_t("");
    m_reportIdIsSet = false;
    m_templateId = utility::conversions::to_string_t("");
    m_templateIdIsSet = false;
}

ExportVM::~ExportVM()
{
}

void ExportVM::validate()
{
    // TODO: implement validation
}

web::json::value ExportVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_formatIsSet)
    {
        val[utility::conversions::to_string_t(U("format"))] = ModelBase::toJson(m_format);
    }
    if(m_reportIdIsSet)
    {
        val[utility::conversions::to_string_t(U("reportId"))] = ModelBase::toJson(m_reportId);
    }
    if(m_templateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_templateId);
    }

    return val;
}

bool ExportVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExportFormat> refVal_setFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFormat);
            setFormat(refVal_setFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reportId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reportId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReportId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportId);
            setReportId(refVal_setReportId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("templateId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("templateId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTemplateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTemplateId);
            setTemplateId(refVal_setTemplateId);
        }
    }
    return ok;
}

void ExportVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_formatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("format")), m_format));
    }
    if(m_reportIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportId")), m_reportId));
    }
    if(m_templateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_templateId));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_createdTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdTime")), m_createdTime));
    }
    if(m_creatorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creatorUserId")), m_creatorUserId));
    }
    if(m_editedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("editedTime")), m_editedTime));
    }
    if(m_editorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("editorUserId")), m_editorUserId));
    }
}

bool ExportVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        std::shared_ptr<ExportFormat> refVal_setFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_setFormat );
        setFormat(refVal_setFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportId"))))
    {
        utility::string_t refVal_setReportId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportId"))), refVal_setReportId );
        setReportId(refVal_setReportId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdTime"))))
    {
        utility::datetime refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdTime"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creatorUserId"))))
    {
        utility::string_t refVal_setCreatorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creatorUserId"))), refVal_setCreatorUserId );
        setCreatorUserId(refVal_setCreatorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("editedTime"))))
    {
        utility::datetime refVal_setEditedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("editedTime"))), refVal_setEditedTime );
        setEditedTime(refVal_setEditedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("editorUserId"))))
    {
        utility::string_t refVal_setEditorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("editorUserId"))), refVal_setEditorUserId );
        setEditorUserId(refVal_setEditorUserId);
    }
    return ok;
}

std::shared_ptr<ExportFormat> ExportVM::getFormat() const
{
    return m_format;
}

void ExportVM::setFormat(const std::shared_ptr<ExportFormat>& value)
{
    m_format = value;
    m_formatIsSet = true;
}

bool ExportVM::formatIsSet() const
{
    return m_formatIsSet;
}

void ExportVM::unsetformat()
{
    m_formatIsSet = false;
}
utility::string_t ExportVM::getReportId() const
{
    return m_reportId;
}

void ExportVM::setReportId(const utility::string_t& value)
{
    m_reportId = value;
    m_reportIdIsSet = true;
}

bool ExportVM::reportIdIsSet() const
{
    return m_reportIdIsSet;
}

void ExportVM::unsetreportId()
{
    m_reportIdIsSet = false;
}
utility::string_t ExportVM::getTemplateId() const
{
    return m_templateId;
}

void ExportVM::setTemplateId(const utility::string_t& value)
{
    m_templateId = value;
    m_templateIdIsSet = true;
}

bool ExportVM::templateIdIsSet() const
{
    return m_templateIdIsSet;
}

void ExportVM::unsettemplateId()
{
    m_templateIdIsSet = false;
}
}
}
}


