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



#include "ApiKeysVM.h"

namespace fastreport {
namespace cloud {
namespace models {




ApiKeysVM::ApiKeysVM()
{
    m_apiKeysIsSet = false;
    m_count = 0L;
    m_countIsSet = false;
}

ApiKeysVM::~ApiKeysVM()
{
}

void ApiKeysVM::validate()
{
    // TODO: implement validation
}

web::json::value ApiKeysVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_apiKeysIsSet)
    {
        val[utility::conversions::to_string_t("apiKeys")] = ModelBase::toJson(m_apiKeys);
    }
    if(m_countIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_count);
    }

    return val;
}

bool ApiKeysVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiKeys")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiKeys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ApiKeyVM>> refVal_apiKeys;
            ok &= ModelBase::fromJson(fieldValue, refVal_apiKeys);
            setApiKeys(refVal_apiKeys);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_count;
            ok &= ModelBase::fromJson(fieldValue, refVal_count);
            setCount(refVal_count);
        }
    }
    return ok;
}

void ApiKeysVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_apiKeysIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiKeys"), m_apiKeys));
    }
    if(m_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_count));
    }
}

bool ApiKeysVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("apiKeys")))
    {
        std::vector<std::shared_ptr<ApiKeyVM>> refVal_apiKeys;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiKeys")), refVal_apiKeys );
        setApiKeys(refVal_apiKeys);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        int64_t refVal_count;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("count")), refVal_count );
        setCount(refVal_count);
    }
    return ok;
}

std::vector<std::shared_ptr<ApiKeyVM>>& ApiKeysVM::getApiKeys()
{
    return m_apiKeys;
}

void ApiKeysVM::setApiKeys(const std::vector<std::shared_ptr<ApiKeyVM>>& value)
{
    m_apiKeys = value;
    m_apiKeysIsSet = true;
}

bool ApiKeysVM::apiKeysIsSet() const
{
    return m_apiKeysIsSet;
}

void ApiKeysVM::unsetapiKeys()
{
    m_apiKeysIsSet = false;
}
int64_t ApiKeysVM::getCount() const
{
    return m_count;
}

void ApiKeysVM::setCount(int64_t value)
{
    m_count = value;
    m_countIsSet = true;
}

bool ApiKeysVM::countIsSet() const
{
    return m_countIsSet;
}

void ApiKeysVM::unsetcount()
{
    m_countIsSet = false;
}
}
}
}


