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



#include "CppRestOpenAPIClient/model/UpdateDataSourceConnectionStringVM.h"

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
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_connectionStringIsSet)
    {
        val[utility::conversions::to_string_t(U("connectionString"))] = ModelBase::toJson(m_connectionString);
    }

    return val;
}

bool UpdateDataSourceConnectionStringVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("connectionString"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectionString")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConnectionString;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectionString);
            setConnectionString(refVal_setConnectionString);
        }
    }
    return ok;
}

void UpdateDataSourceConnectionStringVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_connectionStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectionString")), m_connectionString));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool UpdateDataSourceConnectionStringVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("connectionString"))))
    {
        utility::string_t refVal_setConnectionString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectionString"))), refVal_setConnectionString );
        setConnectionString(refVal_setConnectionString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
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


