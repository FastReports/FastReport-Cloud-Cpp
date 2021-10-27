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



#include "FetchTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




FetchTaskVM::FetchTaskVM()
{
    m_connectionTypeIsSet = false;
    m_connectionString = utility::conversions::to_string_t("");
    m_connectionStringIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
}

FetchTaskVM::~FetchTaskVM()
{
}

void FetchTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value FetchTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_connectionTypeIsSet)
    {
        val[utility::conversions::to_string_t("connectionType")] = ModelBase::toJson(m_connectionType);
    }
    if(m_connectionStringIsSet)
    {
        val[utility::conversions::to_string_t("connectionString")] = ModelBase::toJson(m_connectionString);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t("subscriptionId")] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_type);
    }

    return val;
}

bool FetchTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connectionType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourceConnectionType> refVal_connectionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_connectionType);
            setConnectionType(refVal_connectionType);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptionId);
            setSubscriptionId(refVal_subscriptionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskType> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void FetchTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_connectionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connectionType"), m_connectionType));
    }
    if(m_connectionStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connectionString"), m_connectionString));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionId"), m_subscriptionId));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_type));
    }
}

bool FetchTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("connectionType")))
    {
        std::shared_ptr<DataSourceConnectionType> refVal_connectionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connectionType")), refVal_connectionType );
        setConnectionType(refVal_connectionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("connectionString")))
    {
        utility::string_t refVal_connectionString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connectionString")), refVal_connectionString );
        setConnectionString(refVal_connectionString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptionId")))
    {
        utility::string_t refVal_subscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptionId")), refVal_subscriptionId );
        setSubscriptionId(refVal_subscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<TaskType> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

std::shared_ptr<DataSourceConnectionType> FetchTaskVM::getConnectionType() const
{
    return m_connectionType;
}

void FetchTaskVM::setConnectionType(const std::shared_ptr<DataSourceConnectionType>& value)
{
    m_connectionType = value;
    m_connectionTypeIsSet = true;
}

bool FetchTaskVM::connectionTypeIsSet() const
{
    return m_connectionTypeIsSet;
}

void FetchTaskVM::unsetconnectionType()
{
    m_connectionTypeIsSet = false;
}
utility::string_t FetchTaskVM::getConnectionString() const
{
    return m_connectionString;
}

void FetchTaskVM::setConnectionString(const utility::string_t& value)
{
    m_connectionString = value;
    m_connectionStringIsSet = true;
}

bool FetchTaskVM::connectionStringIsSet() const
{
    return m_connectionStringIsSet;
}

void FetchTaskVM::unsetconnectionString()
{
    m_connectionStringIsSet = false;
}
utility::string_t FetchTaskVM::getName() const
{
    return m_name;
}

void FetchTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool FetchTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void FetchTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t FetchTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void FetchTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool FetchTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void FetchTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> FetchTaskVM::getType() const
{
    return m_type;
}

void FetchTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool FetchTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void FetchTaskVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}

