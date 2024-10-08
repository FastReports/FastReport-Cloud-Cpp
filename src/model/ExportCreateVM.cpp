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



#include "CppRestOpenAPIClient/model/ExportCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ExportCreateVM::ExportCreateVM()
{
    m_templateId = utility::conversions::to_string_t("");
    m_templateIdIsSet = false;
    m_reportId = utility::conversions::to_string_t("");
    m_reportIdIsSet = false;
}

ExportCreateVM::~ExportCreateVM()
{
}

void ExportCreateVM::validate()
{
    // TODO: implement validation
}

web::json::value ExportCreateVM::toJson() const
{
    web::json::value val = this->FileCreateVM::toJson();
    
    if(m_templateIdIsSet)
    {
        val[utility::conversions::to_string_t(U("templateId"))] = ModelBase::toJson(m_templateId);
    }
    if(m_reportIdIsSet)
    {
        val[utility::conversions::to_string_t(U("reportId"))] = ModelBase::toJson(m_reportId);
    }

    return val;
}

bool ExportCreateVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->FileCreateVM::fromJson(val);
    
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
    return ok;
}

void ExportCreateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_reportIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportId")), m_reportId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_tags));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("icon")), m_icon));
    }
    if(m_contentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content")), m_content));
    }
}

bool ExportCreateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportId"))))
    {
        utility::string_t refVal_setReportId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportId"))), refVal_setReportId );
        setReportId(refVal_setReportId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("icon"))))
    {
        utility::string_t refVal_setIcon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("icon"))), refVal_setIcon );
        setIcon(refVal_setIcon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("content"))))
    {
        utility::string_t refVal_setContent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content"))), refVal_setContent );
        setContent(refVal_setContent);
    }
    return ok;
}

utility::string_t ExportCreateVM::getTemplateId() const
{
    return m_templateId;
}

void ExportCreateVM::setTemplateId(const utility::string_t& value)
{
    m_templateId = value;
    m_templateIdIsSet = true;
}

bool ExportCreateVM::templateIdIsSet() const
{
    return m_templateIdIsSet;
}

void ExportCreateVM::unsettemplateId()
{
    m_templateIdIsSet = false;
}
utility::string_t ExportCreateVM::getReportId() const
{
    return m_reportId;
}

void ExportCreateVM::setReportId(const utility::string_t& value)
{
    m_reportId = value;
    m_reportIdIsSet = true;
}

bool ExportCreateVM::reportIdIsSet() const
{
    return m_reportIdIsSet;
}

void ExportCreateVM::unsetreportId()
{
    m_reportIdIsSet = false;
}
}
}
}


