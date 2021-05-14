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



#include "SubscriptionPermissions.h"

namespace fastreport {
namespace cloud {
namespace models {




SubscriptionPermissions::SubscriptionPermissions()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
    m_ownerIsSet = false;
    m_groupsIsSet = false;
    m_otherIsSet = false;
    m_anonIsSet = false;
}

SubscriptionPermissions::~SubscriptionPermissions()
{
}

void SubscriptionPermissions::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionPermissions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(m_ownerId);
    }
    if(m_ownerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_owner);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(m_groups);
    }
    if(m_otherIsSet)
    {
        val[utility::conversions::to_string_t("other")] = ModelBase::toJson(m_other);
    }
    if(m_anonIsSet)
    {
        val[utility::conversions::to_string_t("anon")] = ModelBase::toJson(m_anon);
    }

    return val;
}

bool SubscriptionPermissions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPermission> refVal_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_owner);
            setOwner(refVal_owner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<SubscriptionPermission>> refVal_groups;
            ok &= ModelBase::fromJson(fieldValue, refVal_groups);
            setGroups(refVal_groups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPermission> refVal_other;
            ok &= ModelBase::fromJson(fieldValue, refVal_other);
            setOther(refVal_other);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("anon")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("anon"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPermission> refVal_anon;
            ok &= ModelBase::fromJson(fieldValue, refVal_anon);
            setAnon(refVal_anon);
        }
    }
    return ok;
}

void SubscriptionPermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ownerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerId"), m_ownerId));
    }
    if(m_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_owner));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("groups"), m_groups));
    }
    if(m_otherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("other"), m_other));
    }
    if(m_anonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("anon"), m_anon));
    }
}

bool SubscriptionPermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ownerId")))
    {
        utility::string_t refVal_ownerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerId")), refVal_ownerId );
        setOwnerId(refVal_ownerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        std::shared_ptr<SubscriptionPermission> refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner")), refVal_owner );
        setOwner(refVal_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("groups")))
    {
        std::map<utility::string_t, std::shared_ptr<SubscriptionPermission>> refVal_groups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("groups")), refVal_groups );
        setGroups(refVal_groups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("other")))
    {
        std::shared_ptr<SubscriptionPermission> refVal_other;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("other")), refVal_other );
        setOther(refVal_other);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("anon")))
    {
        std::shared_ptr<SubscriptionPermission> refVal_anon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("anon")), refVal_anon );
        setAnon(refVal_anon);
    }
    return ok;
}

utility::string_t SubscriptionPermissions::getOwnerId() const
{
    return m_ownerId;
}

void SubscriptionPermissions::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool SubscriptionPermissions::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void SubscriptionPermissions::unsetownerId()
{
    m_ownerIdIsSet = false;
}
std::shared_ptr<SubscriptionPermission> SubscriptionPermissions::getOwner() const
{
    return m_owner;
}

void SubscriptionPermissions::setOwner(const std::shared_ptr<SubscriptionPermission>& value)
{
    m_owner = value;
    m_ownerIsSet = true;
}

bool SubscriptionPermissions::ownerIsSet() const
{
    return m_ownerIsSet;
}

void SubscriptionPermissions::unsetowner()
{
    m_ownerIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<SubscriptionPermission>>& SubscriptionPermissions::getGroups()
{
    return m_groups;
}

void SubscriptionPermissions::setGroups(const std::map<utility::string_t, std::shared_ptr<SubscriptionPermission>>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool SubscriptionPermissions::groupsIsSet() const
{
    return m_groupsIsSet;
}

void SubscriptionPermissions::unsetgroups()
{
    m_groupsIsSet = false;
}
std::shared_ptr<SubscriptionPermission> SubscriptionPermissions::getOther() const
{
    return m_other;
}

void SubscriptionPermissions::setOther(const std::shared_ptr<SubscriptionPermission>& value)
{
    m_other = value;
    m_otherIsSet = true;
}

bool SubscriptionPermissions::otherIsSet() const
{
    return m_otherIsSet;
}

void SubscriptionPermissions::unsetother()
{
    m_otherIsSet = false;
}
std::shared_ptr<SubscriptionPermission> SubscriptionPermissions::getAnon() const
{
    return m_anon;
}

void SubscriptionPermissions::setAnon(const std::shared_ptr<SubscriptionPermission>& value)
{
    m_anon = value;
    m_anonIsSet = true;
}

bool SubscriptionPermissions::anonIsSet() const
{
    return m_anonIsSet;
}

void SubscriptionPermissions::unsetanon()
{
    m_anonIsSet = false;
}
}
}
}

