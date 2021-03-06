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



#include "UpdateDataSourcePermissionsVM.h"

namespace fastreport {
namespace cloud {
namespace models {




UpdateDataSourcePermissionsVM::UpdateDataSourcePermissionsVM()
{
    m_newPermissionsIsSet = false;
    m_administrateIsSet = false;
}

UpdateDataSourcePermissionsVM::~UpdateDataSourcePermissionsVM()
{
}

void UpdateDataSourcePermissionsVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateDataSourcePermissionsVM::toJson() const
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

bool UpdateDataSourcePermissionsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("newPermissions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newPermissions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourcePermissions> refVal_newPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_newPermissions);
            setNewPermissions(refVal_newPermissions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("administrate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("administrate"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourceAdministrate> refVal_administrate;
            ok &= ModelBase::fromJson(fieldValue, refVal_administrate);
            setAdministrate(refVal_administrate);
        }
    }
    return ok;
}

void UpdateDataSourcePermissionsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool UpdateDataSourcePermissionsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("newPermissions")))
    {
        std::shared_ptr<DataSourcePermissions> refVal_newPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("newPermissions")), refVal_newPermissions );
        setNewPermissions(refVal_newPermissions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("administrate")))
    {
        std::shared_ptr<DataSourceAdministrate> refVal_administrate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("administrate")), refVal_administrate );
        setAdministrate(refVal_administrate);
    }
    return ok;
}

std::shared_ptr<DataSourcePermissions> UpdateDataSourcePermissionsVM::getNewPermissions() const
{
    return m_newPermissions;
}

void UpdateDataSourcePermissionsVM::setNewPermissions(const std::shared_ptr<DataSourcePermissions>& value)
{
    m_newPermissions = value;
    m_newPermissionsIsSet = true;
}

bool UpdateDataSourcePermissionsVM::newPermissionsIsSet() const
{
    return m_newPermissionsIsSet;
}

void UpdateDataSourcePermissionsVM::unsetnewPermissions()
{
    m_newPermissionsIsSet = false;
}
std::shared_ptr<DataSourceAdministrate> UpdateDataSourcePermissionsVM::getAdministrate() const
{
    return m_administrate;
}

void UpdateDataSourcePermissionsVM::setAdministrate(const std::shared_ptr<DataSourceAdministrate>& value)
{
    m_administrate = value;
    m_administrateIsSet = true;
}

bool UpdateDataSourcePermissionsVM::administrateIsSet() const
{
    return m_administrateIsSet;
}

void UpdateDataSourcePermissionsVM::unsetadministrate()
{
    m_administrateIsSet = false;
}
}
}
}


