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



#include "CppRestOpenAPIClient/model/UpdateDataSourcePermissionsVM.h"

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
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_newPermissionsIsSet)
    {
        val[utility::conversions::to_string_t(U("newPermissions"))] = ModelBase::toJson(m_newPermissions);
    }
    if(m_administrateIsSet)
    {
        val[utility::conversions::to_string_t(U("administrate"))] = ModelBase::toJson(m_administrate);
    }

    return val;
}

bool UpdateDataSourcePermissionsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("newPermissions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("newPermissions")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourcePermissionsCRUDVM> refVal_setNewPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNewPermissions);
            setNewPermissions(refVal_setNewPermissions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("administrate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("administrate")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourceAdministrate> refVal_setAdministrate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdministrate);
            setAdministrate(refVal_setAdministrate);
        }
    }
    return ok;
}

void UpdateDataSourcePermissionsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_newPermissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("newPermissions")), m_newPermissions));
    }
    if(m_administrateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("administrate")), m_administrate));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool UpdateDataSourcePermissionsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("newPermissions"))))
    {
        std::shared_ptr<DataSourcePermissionsCRUDVM> refVal_setNewPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("newPermissions"))), refVal_setNewPermissions );
        setNewPermissions(refVal_setNewPermissions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("administrate"))))
    {
        std::shared_ptr<DataSourceAdministrate> refVal_setAdministrate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("administrate"))), refVal_setAdministrate );
        setAdministrate(refVal_setAdministrate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

std::shared_ptr<DataSourcePermissionsCRUDVM> UpdateDataSourcePermissionsVM::getNewPermissions() const
{
    return m_newPermissions;
}

void UpdateDataSourcePermissionsVM::setNewPermissions(const std::shared_ptr<DataSourcePermissionsCRUDVM>& value)
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


