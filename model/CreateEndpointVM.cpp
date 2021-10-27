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



#include "CreateEndpointVM.h"

namespace fastreport {
namespace cloud {
namespace models {




CreateEndpointVM::CreateEndpointVM()
{
    m_bearerToken = utility::conversions::to_string_t("");
    m_bearerTokenIsSet = false;
    m_url = utility::conversions::to_string_t("");
    m_urlIsSet = false;
}

CreateEndpointVM::~CreateEndpointVM()
{
}

void CreateEndpointVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateEndpointVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_bearerTokenIsSet)
    {
        val[utility::conversions::to_string_t("bearerToken")] = ModelBase::toJson(m_bearerToken);
    }
    if(m_urlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_url);
    }

    return val;
}

bool CreateEndpointVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bearerToken")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bearerToken"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bearerToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_bearerToken);
            setBearerToken(refVal_bearerToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    return ok;
}

void CreateEndpointVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_bearerTokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bearerToken"), m_bearerToken));
    }
    if(m_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_url));
    }
}

bool CreateEndpointVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("bearerToken")))
    {
        utility::string_t refVal_bearerToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bearerToken")), refVal_bearerToken );
        setBearerToken(refVal_bearerToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    return ok;
}

utility::string_t CreateEndpointVM::getBearerToken() const
{
    return m_bearerToken;
}

void CreateEndpointVM::setBearerToken(const utility::string_t& value)
{
    m_bearerToken = value;
    m_bearerTokenIsSet = true;
}

bool CreateEndpointVM::bearerTokenIsSet() const
{
    return m_bearerTokenIsSet;
}

void CreateEndpointVM::unsetbearerToken()
{
    m_bearerTokenIsSet = false;
}
utility::string_t CreateEndpointVM::getUrl() const
{
    return m_url;
}

void CreateEndpointVM::setUrl(const utility::string_t& value)
{
    m_url = value;
    m_urlIsSet = true;
}

bool CreateEndpointVM::urlIsSet() const
{
    return m_urlIsSet;
}

void CreateEndpointVM::unseturl()
{
    m_urlIsSet = false;
}
}
}
}


