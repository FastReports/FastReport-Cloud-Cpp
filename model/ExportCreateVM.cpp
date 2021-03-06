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



#include "ExportCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {




ExportCreateVM::ExportCreateVM()
{
    m_templateId = utility::conversions::to_string_t("");
    m_templateIdIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_tagsIsSet = false;
    m_iconIsSet = false;
    m_contentIsSet = false;
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

    web::json::value val = web::json::value::object();
    
    if(m_templateIdIsSet)
    {
        val[utility::conversions::to_string_t("templateId")] = ModelBase::toJson(m_templateId);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_tagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_tags);
    }
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(m_icon);
    }
    if(m_contentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_content);
    }

    return val;
}

bool ExportCreateVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_icon;
            ok &= ModelBase::fromJson(fieldValue, refVal_icon);
            setIcon(refVal_icon);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_content);
            setContent(refVal_content);
        }
    }
    return ok;
}

void ExportCreateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_tags));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("icon"), m_icon));
    }
    if(m_contentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_content));
    }
}

bool ExportCreateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<utility::string_t> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("icon")))
    {
        utility::string_t refVal_icon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("icon")), refVal_icon );
        setIcon(refVal_icon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        utility::string_t refVal_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("content")), refVal_content );
        setContent(refVal_content);
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
utility::string_t ExportCreateVM::getName() const
{
    return m_name;
}

void ExportCreateVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool ExportCreateVM::nameIsSet() const
{
    return m_nameIsSet;
}

void ExportCreateVM::unsetname()
{
    m_nameIsSet = false;
}
std::vector<utility::string_t>& ExportCreateVM::getTags()
{
    return m_tags;
}

void ExportCreateVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool ExportCreateVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void ExportCreateVM::unsettags()
{
    m_tagsIsSet = false;
}
utility::string_t ExportCreateVM::getIcon() const
{
    return m_icon;
}

void ExportCreateVM::setIcon(const utility::string_t& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool ExportCreateVM::iconIsSet() const
{
    return m_iconIsSet;
}

void ExportCreateVM::unseticon()
{
    m_iconIsSet = false;
}
utility::string_t ExportCreateVM::getContent() const
{
    return m_content;
}

void ExportCreateVM::setContent(const utility::string_t& value)
{
    m_content = value;
    m_contentIsSet = true;
}

bool ExportCreateVM::contentIsSet() const
{
    return m_contentIsSet;
}

void ExportCreateVM::unsetcontent()
{
    m_contentIsSet = false;
}
}
}
}


