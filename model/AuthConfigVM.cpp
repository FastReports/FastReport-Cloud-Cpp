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



#include "AuthConfigVM.h"

namespace fastreport {
namespace cloud {
namespace models {




AuthConfigVM::AuthConfigVM()
{
    m_useLocal = false;
    m_useLocalIsSet = false;
    m_useOpenId = false;
    m_useOpenIdIsSet = false;
    m_authority = utility::conversions::to_string_t("");
    m_authorityIsSet = false;
}

AuthConfigVM::~AuthConfigVM()
{
}

void AuthConfigVM::validate()
{
    // TODO: implement validation
}

web::json::value AuthConfigVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_useLocalIsSet)
    {
        val[utility::conversions::to_string_t("useLocal")] = ModelBase::toJson(m_useLocal);
    }
    if(m_useOpenIdIsSet)
    {
        val[utility::conversions::to_string_t("useOpenId")] = ModelBase::toJson(m_useOpenId);
    }
    if(m_authorityIsSet)
    {
        val[utility::conversions::to_string_t("authority")] = ModelBase::toJson(m_authority);
    }

    return val;
}

bool AuthConfigVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("useLocal")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useLocal"));
        if(!fieldValue.is_null())
        {
            bool refVal_useLocal;
            ok &= ModelBase::fromJson(fieldValue, refVal_useLocal);
            setUseLocal(refVal_useLocal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useOpenId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useOpenId"));
        if(!fieldValue.is_null())
        {
            bool refVal_useOpenId;
            ok &= ModelBase::fromJson(fieldValue, refVal_useOpenId);
            setUseOpenId(refVal_useOpenId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authority")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authority"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_authority;
            ok &= ModelBase::fromJson(fieldValue, refVal_authority);
            setAuthority(refVal_authority);
        }
    }
    return ok;
}

void AuthConfigVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_useLocalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("useLocal"), m_useLocal));
    }
    if(m_useOpenIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("useOpenId"), m_useOpenId));
    }
    if(m_authorityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("authority"), m_authority));
    }
}

bool AuthConfigVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("useLocal")))
    {
        bool refVal_useLocal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("useLocal")), refVal_useLocal );
        setUseLocal(refVal_useLocal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useOpenId")))
    {
        bool refVal_useOpenId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("useOpenId")), refVal_useOpenId );
        setUseOpenId(refVal_useOpenId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("authority")))
    {
        utility::string_t refVal_authority;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("authority")), refVal_authority );
        setAuthority(refVal_authority);
    }
    return ok;
}

bool AuthConfigVM::isUseLocal() const
{
    return m_useLocal;
}

void AuthConfigVM::setUseLocal(bool value)
{
    m_useLocal = value;
    m_useLocalIsSet = true;
}

bool AuthConfigVM::useLocalIsSet() const
{
    return m_useLocalIsSet;
}

void AuthConfigVM::unsetuseLocal()
{
    m_useLocalIsSet = false;
}
bool AuthConfigVM::isUseOpenId() const
{
    return m_useOpenId;
}

void AuthConfigVM::setUseOpenId(bool value)
{
    m_useOpenId = value;
    m_useOpenIdIsSet = true;
}

bool AuthConfigVM::useOpenIdIsSet() const
{
    return m_useOpenIdIsSet;
}

void AuthConfigVM::unsetuseOpenId()
{
    m_useOpenIdIsSet = false;
}
utility::string_t AuthConfigVM::getAuthority() const
{
    return m_authority;
}

void AuthConfigVM::setAuthority(const utility::string_t& value)
{
    m_authority = value;
    m_authorityIsSet = true;
}

bool AuthConfigVM::authorityIsSet() const
{
    return m_authorityIsSet;
}

void AuthConfigVM::unsetauthority()
{
    m_authorityIsSet = false;
}
}
}
}

