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



#include "CppRestOpenAPIClient/model/UpdateTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateTaskBaseVM::UpdateTaskBaseVM()
{
    m_cronExpression = utility::conversions::to_string_t("");
    m_cronExpressionIsSet = false;
    m_delayedRunTime = utility::datetime();
    m_delayedRunTimeIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_t = utility::conversions::to_string_t("");
    m_tIsSet = false;
}

UpdateTaskBaseVM::~UpdateTaskBaseVM()
{
}

void UpdateTaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateTaskBaseVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_cronExpressionIsSet)
    {
        val[utility::conversions::to_string_t(U("cronExpression"))] = ModelBase::toJson(m_cronExpression);
    }
    if(m_delayedRunTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("delayedRunTime"))] = ModelBase::toJson(m_delayedRunTime);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_tIsSet)
    {
        val[utility::conversions::to_string_t(U("$t"))] = ModelBase::toJson(m_t);
    }

    return val;
}

bool UpdateTaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("cronExpression"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cronExpression")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCronExpression;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCronExpression);
            setCronExpression(refVal_setCronExpression);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("delayedRunTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("delayedRunTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDelayedRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDelayedRunTime);
            setDelayedRunTime(refVal_setDelayedRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("$t"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("$t")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setT;
            ok &= ModelBase::fromJson(fieldValue, refVal_setT);
            setT(refVal_setT);
        }
    }
    return ok;
}

void UpdateTaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_cronExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cronExpression")), m_cronExpression));
    }
    if(m_delayedRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("delayedRunTime")), m_delayedRunTime));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool UpdateTaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("cronExpression"))))
    {
        utility::string_t refVal_setCronExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cronExpression"))), refVal_setCronExpression );
        setCronExpression(refVal_setCronExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("delayedRunTime"))))
    {
        utility::datetime refVal_setDelayedRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("delayedRunTime"))), refVal_setDelayedRunTime );
        setDelayedRunTime(refVal_setDelayedRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t UpdateTaskBaseVM::getCronExpression() const
{
    return m_cronExpression;
}

void UpdateTaskBaseVM::setCronExpression(const utility::string_t& value)
{
    m_cronExpression = value;
    m_cronExpressionIsSet = true;
}

bool UpdateTaskBaseVM::cronExpressionIsSet() const
{
    return m_cronExpressionIsSet;
}

void UpdateTaskBaseVM::unsetcronExpression()
{
    m_cronExpressionIsSet = false;
}
utility::datetime UpdateTaskBaseVM::getDelayedRunTime() const
{
    return m_delayedRunTime;
}

void UpdateTaskBaseVM::setDelayedRunTime(const utility::datetime& value)
{
    m_delayedRunTime = value;
    m_delayedRunTimeIsSet = true;
}

bool UpdateTaskBaseVM::delayedRunTimeIsSet() const
{
    return m_delayedRunTimeIsSet;
}

void UpdateTaskBaseVM::unsetdelayedRunTime()
{
    m_delayedRunTimeIsSet = false;
}
utility::string_t UpdateTaskBaseVM::getName() const
{
    return m_name;
}

void UpdateTaskBaseVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool UpdateTaskBaseVM::nameIsSet() const
{
    return m_nameIsSet;
}

void UpdateTaskBaseVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t UpdateTaskBaseVM::getT() const
{
    return m_t;
}

void UpdateTaskBaseVM::setT(const utility::string_t& value)
{
    m_t = value;
    m_tIsSet = true;
}

bool UpdateTaskBaseVM::TIsSet() const
{
    return m_tIsSet;
}

void UpdateTaskBaseVM::unsett()
{
    m_tIsSet = false;
}
}
}
}


