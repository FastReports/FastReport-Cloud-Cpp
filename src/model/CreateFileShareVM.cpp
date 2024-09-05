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



#include "CppRestOpenAPIClient/model/CreateFileShareVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateFileShareVM::CreateFileShareVM()
{
    m_expires = utility::datetime();
    m_expiresIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_permissionIsSet = false;
}

CreateFileShareVM::~CreateFileShareVM()
{
}

void CreateFileShareVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateFileShareVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_expiresIsSet)
    {
        val[utility::conversions::to_string_t(U("expires"))] = ModelBase::toJson(m_expires);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_permissionIsSet)
    {
        val[utility::conversions::to_string_t(U("permission"))] = ModelBase::toJson(m_permission);
    }

    return val;
}

bool CreateFileShareVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("expires"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("expires")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setExpires;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExpires);
            setExpires(refVal_setExpires);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("permission"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("permission")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FilePermissionCRUDVM> refVal_setPermission;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPermission);
            setPermission(refVal_setPermission);
        }
    }
    return ok;
}

void CreateFileShareVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_expiresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expires")), m_expires));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_permissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("permission")), m_permission));
    }
}

bool CreateFileShareVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("expires"))))
    {
        utility::datetime refVal_setExpires;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expires"))), refVal_setExpires );
        setExpires(refVal_setExpires);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("permission"))))
    {
        std::shared_ptr<FilePermissionCRUDVM> refVal_setPermission;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("permission"))), refVal_setPermission );
        setPermission(refVal_setPermission);
    }
    return ok;
}

utility::datetime CreateFileShareVM::getExpires() const
{
    return m_expires;
}

void CreateFileShareVM::setExpires(const utility::datetime& value)
{
    m_expires = value;
    m_expiresIsSet = true;
}

bool CreateFileShareVM::expiresIsSet() const
{
    return m_expiresIsSet;
}

void CreateFileShareVM::unsetexpires()
{
    m_expiresIsSet = false;
}
utility::string_t CreateFileShareVM::getName() const
{
    return m_name;
}

void CreateFileShareVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool CreateFileShareVM::nameIsSet() const
{
    return m_nameIsSet;
}

void CreateFileShareVM::unsetname()
{
    m_nameIsSet = false;
}
std::shared_ptr<FilePermissionCRUDVM> CreateFileShareVM::getPermission() const
{
    return m_permission;
}

void CreateFileShareVM::setPermission(const std::shared_ptr<FilePermissionCRUDVM>& value)
{
    m_permission = value;
    m_permissionIsSet = true;
}

bool CreateFileShareVM::permissionIsSet() const
{
    return m_permissionIsSet;
}

void CreateFileShareVM::unsetpermission()
{
    m_permissionIsSet = false;
}
}
}
}

