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



#include "CppRestOpenAPIClient/model/ReportCreateAdminVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ReportCreateAdminVM::ReportCreateAdminVM()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
    m_parentId = utility::conversions::to_string_t("");
    m_parentIdIsSet = false;
}

ReportCreateAdminVM::~ReportCreateAdminVM()
{
}

void ReportCreateAdminVM::validate()
{
    // TODO: implement validation
}

web::json::value ReportCreateAdminVM::toJson() const
{
    web::json::value val = this->ReportCreateVM::toJson();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_ownerId);
    }
    if(m_parentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("parentId"))] = ModelBase::toJson(m_parentId);
    }

    return val;
}

bool ReportCreateAdminVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->ReportCreateVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("ownerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwnerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerId);
            setOwnerId(refVal_setOwnerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentId);
            setParentId(refVal_setParentId);
        }
    }
    return ok;
}

void ReportCreateAdminVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ownerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerId")), m_ownerId));
    }
    if(m_parentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parentId")), m_parentId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_templateIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("templateId")), m_templateId));
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

bool ReportCreateAdminVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerId"))))
    {
        utility::string_t refVal_setOwnerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerId"))), refVal_setOwnerId );
        setOwnerId(refVal_setOwnerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parentId"))))
    {
        utility::string_t refVal_setParentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parentId"))), refVal_setParentId );
        setParentId(refVal_setParentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("templateId"))))
    {
        utility::string_t refVal_setTemplateId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("templateId"))), refVal_setTemplateId );
        setTemplateId(refVal_setTemplateId);
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

utility::string_t ReportCreateAdminVM::getOwnerId() const
{
    return m_ownerId;
}

void ReportCreateAdminVM::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool ReportCreateAdminVM::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void ReportCreateAdminVM::unsetownerId()
{
    m_ownerIdIsSet = false;
}
utility::string_t ReportCreateAdminVM::getParentId() const
{
    return m_parentId;
}

void ReportCreateAdminVM::setParentId(const utility::string_t& value)
{
    m_parentId = value;
    m_parentIdIsSet = true;
}

bool ReportCreateAdminVM::parentIdIsSet() const
{
    return m_parentIdIsSet;
}

void ReportCreateAdminVM::unsetparentId()
{
    m_parentIdIsSet = false;
}
}
}
}


