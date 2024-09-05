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



#include "CppRestOpenAPIClient/model/TaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



TaskBaseVM::TaskBaseVM()
{
    m_cronExpression = utility::conversions::to_string_t("");
    m_cronExpressionIsSet = false;
    m_startsOn = utility::datetime();
    m_startsOnIsSet = false;
    m_endsIsSet = false;
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
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_cronExpressionIsSet)
    {
        val[utility::conversions::to_string_t(U("cronExpression"))] = ModelBase::toJson(m_cronExpression);
    }
    if(m_startsOnIsSet)
    {
        val[utility::conversions::to_string_t(U("startsOn"))] = ModelBase::toJson(m_startsOn);
    }
    if(m_endsIsSet)
    {
        val[utility::conversions::to_string_t(U("ends"))] = ModelBase::toJson(m_ends);
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

    return val;
}

bool TaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
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
    if(val.has_field(utility::conversions::to_string_t(U("startsOn"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("startsOn")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setStartsOn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStartsOn);
            setStartsOn(refVal_setStartsOn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ends"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ends")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskEnd> refVal_setEnds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnds);
            setEnds(refVal_setEnds);
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
    if(m_startsOnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("startsOn")), m_startsOn));
    }
    if(m_endsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ends")), m_ends));
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("startsOn"))))
    {
        utility::datetime refVal_setStartsOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("startsOn"))), refVal_setStartsOn );
        setStartsOn(refVal_setStartsOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ends"))))
    {
        std::shared_ptr<TaskEnd> refVal_setEnds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ends"))), refVal_setEnds );
        setEnds(refVal_setEnds);
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
utility::datetime TaskBaseVM::getStartsOn() const
{
    return m_startsOn;
}

void TaskBaseVM::setStartsOn(const utility::datetime& value)
{
    m_startsOn = value;
    m_startsOnIsSet = true;
}

bool TaskBaseVM::startsOnIsSet() const
{
    return m_startsOnIsSet;
}

void TaskBaseVM::unsetstartsOn()
{
    m_startsOnIsSet = false;
}
std::shared_ptr<TaskEnd> TaskBaseVM::getEnds() const
{
    return m_ends;
}

void TaskBaseVM::setEnds(const std::shared_ptr<TaskEnd>& value)
{
    m_ends = value;
    m_endsIsSet = true;
}

bool TaskBaseVM::endsIsSet() const
{
    return m_endsIsSet;
}

void TaskBaseVM::unsetends()
{
    m_endsIsSet = false;
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
}
}
}


