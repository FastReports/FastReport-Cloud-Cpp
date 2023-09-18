/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/UpdateTaskPermissionsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateTaskPermissionsVM::UpdateTaskPermissionsVM()
{
    m_administrateIsSet = false;
    m_newPermissionsIsSet = false;
}

UpdateTaskPermissionsVM::~UpdateTaskPermissionsVM()
{
}

void UpdateTaskPermissionsVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateTaskPermissionsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_administrateIsSet)
    {
        val[utility::conversions::to_string_t(U("administrate"))] = ModelBase::toJson(m_administrate);
    }
    if(m_newPermissionsIsSet)
    {
        val[utility::conversions::to_string_t(U("newPermissions"))] = ModelBase::toJson(m_newPermissions);
    }

    return val;
}

bool UpdateTaskPermissionsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("administrate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("administrate")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskAdministrate> refVal_setAdministrate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdministrate);
            setAdministrate(refVal_setAdministrate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("newPermissions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("newPermissions")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskPermissions> refVal_setNewPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNewPermissions);
            setNewPermissions(refVal_setNewPermissions);
        }
    }
    return ok;
}

void UpdateTaskPermissionsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_administrateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("administrate")), m_administrate));
    }
    if(m_newPermissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("newPermissions")), m_newPermissions));
    }
}

bool UpdateTaskPermissionsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("administrate"))))
    {
        std::shared_ptr<TaskAdministrate> refVal_setAdministrate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("administrate"))), refVal_setAdministrate );
        setAdministrate(refVal_setAdministrate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("newPermissions"))))
    {
        std::shared_ptr<TaskPermissions> refVal_setNewPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("newPermissions"))), refVal_setNewPermissions );
        setNewPermissions(refVal_setNewPermissions);
    }
    return ok;
}

std::shared_ptr<TaskAdministrate> UpdateTaskPermissionsVM::getAdministrate() const
{
    return m_administrate;
}

void UpdateTaskPermissionsVM::setAdministrate(const std::shared_ptr<TaskAdministrate>& value)
{
    m_administrate = value;
    m_administrateIsSet = true;
}

bool UpdateTaskPermissionsVM::administrateIsSet() const
{
    return m_administrateIsSet;
}

void UpdateTaskPermissionsVM::unsetadministrate()
{
    m_administrateIsSet = false;
}
std::shared_ptr<TaskPermissions> UpdateTaskPermissionsVM::getNewPermissions() const
{
    return m_newPermissions;
}

void UpdateTaskPermissionsVM::setNewPermissions(const std::shared_ptr<TaskPermissions>& value)
{
    m_newPermissions = value;
    m_newPermissionsIsSet = true;
}

bool UpdateTaskPermissionsVM::newPermissionsIsSet() const
{
    return m_newPermissionsIsSet;
}

void UpdateTaskPermissionsVM::unsetnewPermissions()
{
    m_newPermissionsIsSet = false;
}
}
}
}

