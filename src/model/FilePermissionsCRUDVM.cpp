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



#include "CppRestOpenAPIClient/model/FilePermissionsCRUDVM.h"

namespace fastreport {
namespace cloud {
namespace models {



FilePermissionsCRUDVM::FilePermissionsCRUDVM()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
    m_ownerIsSet = false;
    m_groupsIsSet = false;
    m_otherIsSet = false;
    m_anonIsSet = false;
}

FilePermissionsCRUDVM::~FilePermissionsCRUDVM()
{
}

void FilePermissionsCRUDVM::validate()
{
    // TODO: implement validation
}

web::json::value FilePermissionsCRUDVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_ownerId);
    }
    if(m_ownerIsSet)
    {
        val[utility::conversions::to_string_t(U("owner"))] = ModelBase::toJson(m_owner);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_groups);
    }
    if(m_otherIsSet)
    {
        val[utility::conversions::to_string_t(U("other"))] = ModelBase::toJson(m_other);
    }
    if(m_anonIsSet)
    {
        val[utility::conversions::to_string_t(U("anon"))] = ModelBase::toJson(m_anon);
    }

    return val;
}

bool FilePermissionsCRUDVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
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
    if(val.has_field(utility::conversions::to_string_t(U("owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("owner")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FilePermissionCRUDVM> refVal_setOwner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwner);
            setOwner(refVal_setOwner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<FilePermissionCRUDVM>> refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("other"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("other")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FilePermissionCRUDVM> refVal_setOther;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOther);
            setOther(refVal_setOther);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("anon"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("anon")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FilePermissionCRUDVM> refVal_setAnon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAnon);
            setAnon(refVal_setAnon);
        }
    }
    return ok;
}

void FilePermissionsCRUDVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_owner));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_otherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("other")), m_other));
    }
    if(m_anonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("anon")), m_anon));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool FilePermissionsCRUDVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        std::shared_ptr<FilePermissionCRUDVM> refVal_setOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_setOwner );
        setOwner(refVal_setOwner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::map<utility::string_t, std::shared_ptr<FilePermissionCRUDVM>> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("other"))))
    {
        std::shared_ptr<FilePermissionCRUDVM> refVal_setOther;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("other"))), refVal_setOther );
        setOther(refVal_setOther);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("anon"))))
    {
        std::shared_ptr<FilePermissionCRUDVM> refVal_setAnon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("anon"))), refVal_setAnon );
        setAnon(refVal_setAnon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t FilePermissionsCRUDVM::getOwnerId() const
{
    return m_ownerId;
}

void FilePermissionsCRUDVM::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool FilePermissionsCRUDVM::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void FilePermissionsCRUDVM::unsetownerId()
{
    m_ownerIdIsSet = false;
}
std::shared_ptr<FilePermissionCRUDVM> FilePermissionsCRUDVM::getOwner() const
{
    return m_owner;
}

void FilePermissionsCRUDVM::setOwner(const std::shared_ptr<FilePermissionCRUDVM>& value)
{
    m_owner = value;
    m_ownerIsSet = true;
}

bool FilePermissionsCRUDVM::ownerIsSet() const
{
    return m_ownerIsSet;
}

void FilePermissionsCRUDVM::unsetowner()
{
    m_ownerIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<FilePermissionCRUDVM>>& FilePermissionsCRUDVM::getGroups()
{
    return m_groups;
}

void FilePermissionsCRUDVM::setGroups(const std::map<utility::string_t, std::shared_ptr<FilePermissionCRUDVM>>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool FilePermissionsCRUDVM::groupsIsSet() const
{
    return m_groupsIsSet;
}

void FilePermissionsCRUDVM::unsetgroups()
{
    m_groupsIsSet = false;
}
std::shared_ptr<FilePermissionCRUDVM> FilePermissionsCRUDVM::getOther() const
{
    return m_other;
}

void FilePermissionsCRUDVM::setOther(const std::shared_ptr<FilePermissionCRUDVM>& value)
{
    m_other = value;
    m_otherIsSet = true;
}

bool FilePermissionsCRUDVM::otherIsSet() const
{
    return m_otherIsSet;
}

void FilePermissionsCRUDVM::unsetother()
{
    m_otherIsSet = false;
}
std::shared_ptr<FilePermissionCRUDVM> FilePermissionsCRUDVM::getAnon() const
{
    return m_anon;
}

void FilePermissionsCRUDVM::setAnon(const std::shared_ptr<FilePermissionCRUDVM>& value)
{
    m_anon = value;
    m_anonIsSet = true;
}

bool FilePermissionsCRUDVM::anonIsSet() const
{
    return m_anonIsSet;
}

void FilePermissionsCRUDVM::unsetanon()
{
    m_anonIsSet = false;
}
}
}
}

