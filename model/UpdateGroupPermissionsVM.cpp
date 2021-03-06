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



#include "UpdateGroupPermissionsVM.h"

namespace fastreport {
namespace cloud {
namespace models {




UpdateGroupPermissionsVM::UpdateGroupPermissionsVM()
{
    m_newPermissionsIsSet = false;
    m_administrateIsSet = false;
}

UpdateGroupPermissionsVM::~UpdateGroupPermissionsVM()
{
}

void UpdateGroupPermissionsVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateGroupPermissionsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_newPermissionsIsSet)
    {
        val[utility::conversions::to_string_t("newPermissions")] = ModelBase::toJson(m_newPermissions);
    }
    if(m_administrateIsSet)
    {
        val[utility::conversions::to_string_t("administrate")] = ModelBase::toJson(m_administrate);
    }

    return val;
}

bool UpdateGroupPermissionsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("newPermissions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newPermissions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GroupPermissions> refVal_newPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_newPermissions);
            setNewPermissions(refVal_newPermissions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("administrate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("administrate"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<GroupAdministrate> refVal_administrate;
            ok &= ModelBase::fromJson(fieldValue, refVal_administrate);
            setAdministrate(refVal_administrate);
        }
    }
    return ok;
}

void UpdateGroupPermissionsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_newPermissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("newPermissions"), m_newPermissions));
    }
    if(m_administrateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("administrate"), m_administrate));
    }
}

bool UpdateGroupPermissionsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("newPermissions")))
    {
        std::shared_ptr<GroupPermissions> refVal_newPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("newPermissions")), refVal_newPermissions );
        setNewPermissions(refVal_newPermissions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("administrate")))
    {
        std::shared_ptr<GroupAdministrate> refVal_administrate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("administrate")), refVal_administrate );
        setAdministrate(refVal_administrate);
    }
    return ok;
}

std::shared_ptr<GroupPermissions> UpdateGroupPermissionsVM::getNewPermissions() const
{
    return m_newPermissions;
}

void UpdateGroupPermissionsVM::setNewPermissions(const std::shared_ptr<GroupPermissions>& value)
{
    m_newPermissions = value;
    m_newPermissionsIsSet = true;
}

bool UpdateGroupPermissionsVM::newPermissionsIsSet() const
{
    return m_newPermissionsIsSet;
}

void UpdateGroupPermissionsVM::unsetnewPermissions()
{
    m_newPermissionsIsSet = false;
}
std::shared_ptr<GroupAdministrate> UpdateGroupPermissionsVM::getAdministrate() const
{
    return m_administrate;
}

void UpdateGroupPermissionsVM::setAdministrate(const std::shared_ptr<GroupAdministrate>& value)
{
    m_administrate = value;
    m_administrateIsSet = true;
}

bool UpdateGroupPermissionsVM::administrateIsSet() const
{
    return m_administrateIsSet;
}

void UpdateGroupPermissionsVM::unsetadministrate()
{
    m_administrateIsSet = false;
}
}
}
}


