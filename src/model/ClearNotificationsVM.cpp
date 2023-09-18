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



#include "CppRestOpenAPIClient/model/ClearNotificationsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ClearNotificationsVM::ClearNotificationsVM()
{
    m_update = false;
    m_updateIsSet = false;
}

ClearNotificationsVM::~ClearNotificationsVM()
{
}

void ClearNotificationsVM::validate()
{
    // TODO: implement validation
}

web::json::value ClearNotificationsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_updateIsSet)
    {
        val[utility::conversions::to_string_t(U("update"))] = ModelBase::toJson(m_update);
    }

    return val;
}

bool ClearNotificationsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("update"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("update")));
        if(!fieldValue.is_null())
        {
            bool refVal_setUpdate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdate);
            setUpdate(refVal_setUpdate);
        }
    }
    return ok;
}

void ClearNotificationsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_updateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("update")), m_update));
    }
}

bool ClearNotificationsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("update"))))
    {
        bool refVal_setUpdate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("update"))), refVal_setUpdate );
        setUpdate(refVal_setUpdate);
    }
    return ok;
}

bool ClearNotificationsVM::isUpdate() const
{
    return m_update;
}

void ClearNotificationsVM::setUpdate(bool value)
{
    m_update = value;
    m_updateIsSet = true;
}

bool ClearNotificationsVM::updateIsSet() const
{
    return m_updateIsSet;
}

void ClearNotificationsVM::unsetupdate()
{
    m_updateIsSet = false;
}
}
}
}


