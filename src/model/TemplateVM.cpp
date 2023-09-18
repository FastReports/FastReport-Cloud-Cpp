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



#include "CppRestOpenAPIClient/model/TemplateVM.h"

namespace fastreport {
namespace cloud {
namespace models {



TemplateVM::TemplateVM()
{
    m_reportInfoIsSet = false;
}

TemplateVM::~TemplateVM()
{
}

void TemplateVM::validate()
{
    // TODO: implement validation
}

web::json::value TemplateVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_reportInfoIsSet)
    {
        val[utility::conversions::to_string_t(U("reportInfo"))] = ModelBase::toJson(m_reportInfo);
    }

    return val;
}

bool TemplateVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void TemplateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

bool TemplateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

std::shared_ptr<ReportInfo> TemplateVM::getReportInfo() const
{
    return m_reportInfo;
}

void TemplateVM::setReportInfo(const std::shared_ptr<ReportInfo>& value)
{
    m_reportInfo = value;
    m_reportInfoIsSet = true;
}

bool TemplateVM::reportInfoIsSet() const
{
    return m_reportInfoIsSet;
}

void TemplateVM::unsetreportInfo()
{
    m_reportInfoIsSet = false;
}
}
}
}

