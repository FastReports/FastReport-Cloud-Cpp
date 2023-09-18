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



#include "CppRestOpenAPIClient/model/SubscriptionPermissionsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



SubscriptionPermissionsVM::SubscriptionPermissionsVM()
{
    m_permissionsIsSet = false;
}

SubscriptionPermissionsVM::~SubscriptionPermissionsVM()
{
}

void SubscriptionPermissionsVM::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionPermissionsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_permissionsIsSet)
    {
        val[utility::conversions::to_string_t(U("permissions"))] = ModelBase::toJson(m_permissions);
    }

    return val;
}

bool SubscriptionPermissionsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("permissions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("permissions")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPermissions> refVal_setPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPermissions);
            setPermissions(refVal_setPermissions);
        }
    }
    return ok;
}

void SubscriptionPermissionsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_permissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("permissions")), m_permissions));
    }
}

bool SubscriptionPermissionsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("permissions"))))
    {
        std::shared_ptr<SubscriptionPermissions> refVal_setPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("permissions"))), refVal_setPermissions );
        setPermissions(refVal_setPermissions);
    }
    return ok;
}

std::shared_ptr<SubscriptionPermissions> SubscriptionPermissionsVM::getPermissions() const
{
    return m_permissions;
}

void SubscriptionPermissionsVM::setPermissions(const std::shared_ptr<SubscriptionPermissions>& value)
{
    m_permissions = value;
    m_permissionsIsSet = true;
}

bool SubscriptionPermissionsVM::permissionsIsSet() const
{
    return m_permissionsIsSet;
}

void SubscriptionPermissionsVM::unsetpermissions()
{
    m_permissionsIsSet = false;
}
}
}
}

