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



#include "AdminReportFolderCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {




AdminReportFolderCreateVM::AdminReportFolderCreateVM()
{
    m_parentId = utility::conversions::to_string_t("");
    m_parentIdIsSet = false;
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_tagsIsSet = false;
    m_iconIsSet = false;
}

AdminReportFolderCreateVM::~AdminReportFolderCreateVM()
{
}

void AdminReportFolderCreateVM::validate()
{
    // TODO: implement validation
}

web::json::value AdminReportFolderCreateVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_parentIdIsSet)
    {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(m_parentId);
    }
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(m_ownerId);
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

    return val;
}

bool AdminReportFolderCreateVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentId);
            setParentId(refVal_parentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ownerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerId);
            setOwnerId(refVal_ownerId);
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
    return ok;
}

void AdminReportFolderCreateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_parentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentId"), m_parentId));
    }
    if(m_ownerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerId"), m_ownerId));
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
}

bool AdminReportFolderCreateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("parentId")))
    {
        utility::string_t refVal_parentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentId")), refVal_parentId );
        setParentId(refVal_parentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ownerId")))
    {
        utility::string_t refVal_ownerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerId")), refVal_ownerId );
        setOwnerId(refVal_ownerId);
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
    return ok;
}

utility::string_t AdminReportFolderCreateVM::getParentId() const
{
    return m_parentId;
}

void AdminReportFolderCreateVM::setParentId(const utility::string_t& value)
{
    m_parentId = value;
    m_parentIdIsSet = true;
}

bool AdminReportFolderCreateVM::parentIdIsSet() const
{
    return m_parentIdIsSet;
}

void AdminReportFolderCreateVM::unsetparentId()
{
    m_parentIdIsSet = false;
}
utility::string_t AdminReportFolderCreateVM::getOwnerId() const
{
    return m_ownerId;
}

void AdminReportFolderCreateVM::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool AdminReportFolderCreateVM::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void AdminReportFolderCreateVM::unsetownerId()
{
    m_ownerIdIsSet = false;
}
utility::string_t AdminReportFolderCreateVM::getName() const
{
    return m_name;
}

void AdminReportFolderCreateVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool AdminReportFolderCreateVM::nameIsSet() const
{
    return m_nameIsSet;
}

void AdminReportFolderCreateVM::unsetname()
{
    m_nameIsSet = false;
}
std::vector<utility::string_t>& AdminReportFolderCreateVM::getTags()
{
    return m_tags;
}

void AdminReportFolderCreateVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool AdminReportFolderCreateVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void AdminReportFolderCreateVM::unsettags()
{
    m_tagsIsSet = false;
}
utility::string_t AdminReportFolderCreateVM::getIcon() const
{
    return m_icon;
}

void AdminReportFolderCreateVM::setIcon(const utility::string_t& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool AdminReportFolderCreateVM::iconIsSet() const
{
    return m_iconIsSet;
}

void AdminReportFolderCreateVM::unseticon()
{
    m_iconIsSet = false;
}
}
}
}


