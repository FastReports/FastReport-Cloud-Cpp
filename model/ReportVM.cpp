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



#include "ReportVM.h"

namespace fastreport {
namespace cloud {
namespace models {




ReportVM::ReportVM()
{
    m_templateId = utility::conversions::to_string_t("");
    m_templateIdIsSet = false;
    m_reportInfoIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_createdTime = utility::datetime();
    m_createdTimeIsSet = false;
    m_creatorUserId = utility::conversions::to_string_t("");
    m_creatorUserIdIsSet = false;
    m_editedTime = utility::datetime();
    m_editedTimeIsSet = false;
    m_editorUserId = utility::conversions::to_string_t("");
    m_editorUserIdIsSet = false;
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
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(m_templateId);
    }
    if(m_reportInfoIsSet)
    {
        val[utility::conversions::to_string_t("reportInfo")] = ModelBase::toJson(m_reportInfo);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_id);
    }
    if(m_createdTimeIsSet)
    {
        val[utility::conversions::to_string_t("createdTime")] = ModelBase::toJson(m_createdTime);
    }
    if(m_creatorUserIdIsSet)
    {
        val[utility::conversions::to_string_t("creatorUserId")] = ModelBase::toJson(m_creatorUserId);
    }
    if(m_editedTimeIsSet)
    {
        val[utility::conversions::to_string_t("editedTime")] = ModelBase::toJson(m_editedTime);
    }
    if(m_editorUserIdIsSet)
    {
        val[utility::conversions::to_string_t("editorUserId")] = ModelBase::toJson(m_editorUserId);
    }

    return val;
}

bool ReportVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templateId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_templateId;
            ok &= ModelBase::fromJson(fieldValue, refVal_templateId);
            setTemplateId(refVal_templateId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ReportInfo> refVal_reportInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportInfo);
            setReportInfo(refVal_reportInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdTime);
            setCreatedTime(refVal_createdTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatorUserId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatorUserId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_creatorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_creatorUserId);
            setCreatorUserId(refVal_creatorUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editedTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editedTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_editedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_editedTime);
            setEditedTime(refVal_editedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editorUserId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editorUserId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_editorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_editorUserId);
            setEditorUserId(refVal_editorUserId);
        }
    }
    return ok;
}

void ReportVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_templateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("templateId"), m_templateId));
    }
    if(m_reportInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportInfo"), m_reportInfo));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_id));
    }
    if(m_createdTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdTime"), m_createdTime));
    }
    if(m_creatorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("creatorUserId"), m_creatorUserId));
    }
    if(m_editedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editedTime"), m_editedTime));
    }
    if(m_editorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editorUserId"), m_editorUserId));
    }
}

bool ReportVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("templateId")))
    {
        utility::string_t refVal_templateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("templateId")), refVal_templateId );
        setTemplateId(refVal_templateId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportInfo")))
    {
        std::shared_ptr<ReportInfo> refVal_reportInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportInfo")), refVal_reportInfo );
        setReportInfo(refVal_reportInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdTime")))
    {
        utility::datetime refVal_createdTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdTime")), refVal_createdTime );
        setCreatedTime(refVal_createdTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("creatorUserId")))
    {
        utility::string_t refVal_creatorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("creatorUserId")), refVal_creatorUserId );
        setCreatorUserId(refVal_creatorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editedTime")))
    {
        utility::datetime refVal_editedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editedTime")), refVal_editedTime );
        setEditedTime(refVal_editedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editorUserId")))
    {
        utility::string_t refVal_editorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editorUserId")), refVal_editorUserId );
        setEditorUserId(refVal_editorUserId);
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
utility::string_t ReportVM::getId() const
{
    return m_id;
}

void ReportVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool ReportVM::idIsSet() const
{
    return m_idIsSet;
}

void ReportVM::unsetid()
{
    m_idIsSet = false;
}
utility::datetime ReportVM::getCreatedTime() const
{
    return m_createdTime;
}

void ReportVM::setCreatedTime(const utility::datetime& value)
{
    m_createdTime = value;
    m_createdTimeIsSet = true;
}

bool ReportVM::createdTimeIsSet() const
{
    return m_createdTimeIsSet;
}

void ReportVM::unsetcreatedTime()
{
    m_createdTimeIsSet = false;
}
utility::string_t ReportVM::getCreatorUserId() const
{
    return m_creatorUserId;
}

void ReportVM::setCreatorUserId(const utility::string_t& value)
{
    m_creatorUserId = value;
    m_creatorUserIdIsSet = true;
}

bool ReportVM::creatorUserIdIsSet() const
{
    return m_creatorUserIdIsSet;
}

void ReportVM::unsetcreatorUserId()
{
    m_creatorUserIdIsSet = false;
}
utility::datetime ReportVM::getEditedTime() const
{
    return m_editedTime;
}

void ReportVM::setEditedTime(const utility::datetime& value)
{
    m_editedTime = value;
    m_editedTimeIsSet = true;
}

bool ReportVM::editedTimeIsSet() const
{
    return m_editedTimeIsSet;
}

void ReportVM::unseteditedTime()
{
    m_editedTimeIsSet = false;
}
utility::string_t ReportVM::getEditorUserId() const
{
    return m_editorUserId;
}

void ReportVM::setEditorUserId(const utility::string_t& value)
{
    m_editorUserId = value;
    m_editorUserIdIsSet = true;
}

bool ReportVM::editorUserIdIsSet() const
{
    return m_editorUserIdIsSet;
}

void ReportVM::unseteditorUserId()
{
    m_editorUserIdIsSet = false;
}
}
}
}


