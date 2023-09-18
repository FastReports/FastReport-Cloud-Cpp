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



#include "CppRestOpenAPIClient/model/TaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



TaskBaseVM::TaskBaseVM()
{
    m_cronExpression = utility::conversions::to_string_t("");
    m_cronExpressionIsSet = false;
    m_delayedRunTime = utility::datetime();
    m_delayedRunTimeIsSet = false;
    m_delayedWasRunTime = utility::datetime();
    m_delayedWasRunTimeIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_recurrentRunTime = utility::datetime();
    m_recurrentRunTimeIsSet = false;
    m_recurrentWasRunTime = utility::datetime();
    m_recurrentWasRunTimeIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_t = utility::conversions::to_string_t("");
    m_tIsSet = false;
}

TaskBaseVM::~TaskBaseVM()
{
}

void TaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value TaskBaseVM::toJson() const
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
    if(m_delayedWasRunTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("delayedWasRunTime"))] = ModelBase::toJson(m_delayedWasRunTime);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_recurrentRunTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("recurrentRunTime"))] = ModelBase::toJson(m_recurrentRunTime);
    }
    if(m_recurrentWasRunTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("recurrentWasRunTime"))] = ModelBase::toJson(m_recurrentWasRunTime);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionId"))] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_tIsSet)
    {
        val[utility::conversions::to_string_t(U("$t"))] = ModelBase::toJson(m_t);
    }

    return val;
}

bool TaskBaseVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("delayedWasRunTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("delayedWasRunTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setDelayedWasRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDelayedWasRunTime);
            setDelayedWasRunTime(refVal_setDelayedWasRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
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
    if(val.has_field(utility::conversions::to_string_t(U("recurrentRunTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recurrentRunTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setRecurrentRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecurrentRunTime);
            setRecurrentRunTime(refVal_setRecurrentRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("recurrentWasRunTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("recurrentWasRunTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setRecurrentWasRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRecurrentWasRunTime);
            setRecurrentWasRunTime(refVal_setRecurrentWasRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptionId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptionId);
            setSubscriptionId(refVal_setSubscriptionId);
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

void TaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_delayedWasRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("delayedWasRunTime")), m_delayedWasRunTime));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_recurrentRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentRunTime")), m_recurrentRunTime));
    }
    if(m_recurrentWasRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentWasRunTime")), m_recurrentWasRunTime));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool TaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("delayedWasRunTime"))))
    {
        utility::datetime refVal_setDelayedWasRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("delayedWasRunTime"))), refVal_setDelayedWasRunTime );
        setDelayedWasRunTime(refVal_setDelayedWasRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentRunTime"))))
    {
        utility::datetime refVal_setRecurrentRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentRunTime"))), refVal_setRecurrentRunTime );
        setRecurrentRunTime(refVal_setRecurrentRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))))
    {
        utility::datetime refVal_setRecurrentWasRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))), refVal_setRecurrentWasRunTime );
        setRecurrentWasRunTime(refVal_setRecurrentWasRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t TaskBaseVM::getCronExpression() const
{
    return m_cronExpression;
}

void TaskBaseVM::setCronExpression(const utility::string_t& value)
{
    m_cronExpression = value;
    m_cronExpressionIsSet = true;
}

bool TaskBaseVM::cronExpressionIsSet() const
{
    return m_cronExpressionIsSet;
}

void TaskBaseVM::unsetcronExpression()
{
    m_cronExpressionIsSet = false;
}
utility::datetime TaskBaseVM::getDelayedRunTime() const
{
    return m_delayedRunTime;
}

void TaskBaseVM::setDelayedRunTime(const utility::datetime& value)
{
    m_delayedRunTime = value;
    m_delayedRunTimeIsSet = true;
}

bool TaskBaseVM::delayedRunTimeIsSet() const
{
    return m_delayedRunTimeIsSet;
}

void TaskBaseVM::unsetdelayedRunTime()
{
    m_delayedRunTimeIsSet = false;
}
utility::datetime TaskBaseVM::getDelayedWasRunTime() const
{
    return m_delayedWasRunTime;
}

void TaskBaseVM::setDelayedWasRunTime(const utility::datetime& value)
{
    m_delayedWasRunTime = value;
    m_delayedWasRunTimeIsSet = true;
}

bool TaskBaseVM::delayedWasRunTimeIsSet() const
{
    return m_delayedWasRunTimeIsSet;
}

void TaskBaseVM::unsetdelayedWasRunTime()
{
    m_delayedWasRunTimeIsSet = false;
}
utility::string_t TaskBaseVM::getId() const
{
    return m_id;
}

void TaskBaseVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool TaskBaseVM::idIsSet() const
{
    return m_idIsSet;
}

void TaskBaseVM::unsetid()
{
    m_idIsSet = false;
}
utility::string_t TaskBaseVM::getName() const
{
    return m_name;
}

void TaskBaseVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool TaskBaseVM::nameIsSet() const
{
    return m_nameIsSet;
}

void TaskBaseVM::unsetname()
{
    m_nameIsSet = false;
}
utility::datetime TaskBaseVM::getRecurrentRunTime() const
{
    return m_recurrentRunTime;
}

void TaskBaseVM::setRecurrentRunTime(const utility::datetime& value)
{
    m_recurrentRunTime = value;
    m_recurrentRunTimeIsSet = true;
}

bool TaskBaseVM::recurrentRunTimeIsSet() const
{
    return m_recurrentRunTimeIsSet;
}

void TaskBaseVM::unsetrecurrentRunTime()
{
    m_recurrentRunTimeIsSet = false;
}
utility::datetime TaskBaseVM::getRecurrentWasRunTime() const
{
    return m_recurrentWasRunTime;
}

void TaskBaseVM::setRecurrentWasRunTime(const utility::datetime& value)
{
    m_recurrentWasRunTime = value;
    m_recurrentWasRunTimeIsSet = true;
}

bool TaskBaseVM::recurrentWasRunTimeIsSet() const
{
    return m_recurrentWasRunTimeIsSet;
}

void TaskBaseVM::unsetrecurrentWasRunTime()
{
    m_recurrentWasRunTimeIsSet = false;
}
utility::string_t TaskBaseVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void TaskBaseVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool TaskBaseVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void TaskBaseVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
utility::string_t TaskBaseVM::getT() const
{
    return m_t;
}

void TaskBaseVM::setT(const utility::string_t& value)
{
    m_t = value;
    m_tIsSet = true;
}

bool TaskBaseVM::TIsSet() const
{
    return m_tIsSet;
}

void TaskBaseVM::unsett()
{
    m_tIsSet = false;
}
}
}
}

