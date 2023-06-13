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



#include "CppRestOpenAPIClient/model/ReportVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ReportVM::ReportVM()
{
    m_templateId = utility::conversions::to_string_t("");
    m_templateIdIsSet = false;
    m_reportInfoIsSet = false;
}

ReportVM::~ReportVM()
{
}

void ReportVM::validate()
{
    // TODO: implement validation
}

web::json::value ReportVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_templateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_templateId);
    }
    if(m_reportInfoIsSet)
    {
        val[utility::conversions::to_string_t(U("reportInfo"))] = ModelBase::toJson(m_reportInfo);
    }

    return val;
}

bool ReportVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("reportInfo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reportInfo")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ReportInfo> refVal_setReportInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportInfo);
            setReportInfo(refVal_setReportInfo);
        }
    }
    return ok;
}

void ReportVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_templateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_templateId));
    }
    if(m_reportInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportInfo")), m_reportInfo));
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

bool ReportVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportInfo"))))
    {
        std::shared_ptr<ReportInfo> refVal_setReportInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportInfo"))), refVal_setReportInfo );
        setReportInfo(refVal_setReportInfo);
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

utility::string_t ReportVM::getTemplateId() const
{
    return m_templateId;
}

void ReportVM::setTemplateId(const utility::string_t& value)
{
    m_templateId = value;
    m_templateIdIsSet = true;
}

bool ReportVM::templateIdIsSet() const
{
    return m_templateIdIsSet;
}

void ReportVM::unsettemplateId()
{
    m_templateIdIsSet = false;
}
std::shared_ptr<ReportInfo> ReportVM::getReportInfo() const
{
    return m_reportInfo;
}

void ReportVM::setReportInfo(const std::shared_ptr<ReportInfo>& value)
{
    m_reportInfo = value;
    m_reportInfoIsSet = true;
}

bool ReportVM::reportInfoIsSet() const
{
    return m_reportInfoIsSet;
}

void ReportVM::unsetreportInfo()
{
    m_reportInfoIsSet = false;
}
}
}
}


