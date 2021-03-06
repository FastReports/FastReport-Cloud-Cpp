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



#include "UpdateDataSourceConnectionStringVM.h"

namespace fastreport {
namespace cloud {
namespace models {




UpdateDataSourceConnectionStringVM::UpdateDataSourceConnectionStringVM()
{
    m_connectionString = utility::conversions::to_string_t("");
    m_connectionStringIsSet = false;
}

UpdateDataSourceConnectionStringVM::~UpdateDataSourceConnectionStringVM()
{
}

void UpdateDataSourceConnectionStringVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateDataSourceConnectionStringVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_connectionStringIsSet)
    {
        val[utility::conversions::to_string_t("connectionString")] = ModelBase::toJson(m_connectionString);
    }

    return val;
}

bool UpdateDataSourceConnectionStringVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connectionString")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionString"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_connectionString;
            ok &= ModelBase::fromJson(fieldValue, refVal_connectionString);
            setConnectionString(refVal_connectionString);
        }
    }
    return ok;
}

void UpdateDataSourceConnectionStringVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_connectionStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connectionString"), m_connectionString));
    }
}

bool UpdateDataSourceConnectionStringVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("connectionString")))
    {
        utility::string_t refVal_connectionString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connectionString")), refVal_connectionString );
        setConnectionString(refVal_connectionString);
    }
    return ok;
}

utility::string_t UpdateDataSourceConnectionStringVM::getConnectionString() const
{
    return m_connectionString;
}

void UpdateDataSourceConnectionStringVM::setConnectionString(const utility::string_t& value)
{
    m_connectionString = value;
    m_connectionStringIsSet = true;
}

bool UpdateDataSourceConnectionStringVM::connectionStringIsSet() const
{
    return m_connectionStringIsSet;
}

void UpdateDataSourceConnectionStringVM::unsetconnectionString()
{
    m_connectionStringIsSet = false;
}
}
}
}


