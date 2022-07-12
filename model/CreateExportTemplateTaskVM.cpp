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



#include "CreateExportTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




CreateExportTemplateTaskVM::CreateExportTemplateTaskVM()
{
    m_reportParametersIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
    m_delayedRunTime = utility::datetime();
    m_delayedRunTimeIsSet = false;
    m_cronExpression = utility::conversions::to_string_t("");
    m_cronExpressionIsSet = false;
}

CreateExportTemplateTaskVM::~CreateExportTemplateTaskVM()
{
}

void CreateExportTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateExportTemplateTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_reportParametersIsSet)
    {
        val[utility::conversions::to_string_t("reportParameters")] = ModelBase::toJson(m_reportParameters);
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
    if(m_delayedRunTimeIsSet)
    {
        val[utility::conversions::to_string_t("delayedRunTime")] = ModelBase::toJson(m_delayedRunTime);
    }
    if(m_cronExpressionIsSet)
    {
        val[utility::conversions::to_string_t("cronExpression")] = ModelBase::toJson(m_cronExpression);
    }

    return val;
}

bool CreateExportTemplateTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reportParameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportParameters"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_reportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportParameters);
            setReportParameters(refVal_reportParameters);
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
    if(val.has_field(utility::conversions::to_string_t("delayedRunTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delayedRunTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_delayedRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_delayedRunTime);
            setDelayedRunTime(refVal_delayedRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cronExpression")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cronExpression"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cronExpression;
            ok &= ModelBase::fromJson(fieldValue, refVal_cronExpression);
            setCronExpression(refVal_cronExpression);
        }
    }
    return ok;
}

void CreateExportTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_reportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportParameters"), m_reportParameters));
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
    if(m_delayedRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("delayedRunTime"), m_delayedRunTime));
    }
    if(m_cronExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cronExpression"), m_cronExpression));
    }
}

bool CreateExportTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("reportParameters")))
    {
        std::map<utility::string_t, utility::string_t> refVal_reportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportParameters")), refVal_reportParameters );
        setReportParameters(refVal_reportParameters);
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
    if(multipart->hasContent(utility::conversions::to_string_t("delayedRunTime")))
    {
        utility::datetime refVal_delayedRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("delayedRunTime")), refVal_delayedRunTime );
        setDelayedRunTime(refVal_delayedRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cronExpression")))
    {
        utility::string_t refVal_cronExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cronExpression")), refVal_cronExpression );
        setCronExpression(refVal_cronExpression);
    }
    return ok;
}

std::map<utility::string_t, utility::string_t>& CreateExportTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void CreateExportTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool CreateExportTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void CreateExportTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
utility::string_t CreateExportTemplateTaskVM::getName() const
{
    return m_name;
}

void CreateExportTemplateTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool CreateExportTemplateTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void CreateExportTemplateTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t CreateExportTemplateTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void CreateExportTemplateTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool CreateExportTemplateTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void CreateExportTemplateTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> CreateExportTemplateTaskVM::getType() const
{
    return m_type;
}

void CreateExportTemplateTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool CreateExportTemplateTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void CreateExportTemplateTaskVM::unsettype()
{
    m_typeIsSet = false;
}
utility::datetime CreateExportTemplateTaskVM::getDelayedRunTime() const
{
    return m_delayedRunTime;
}

void CreateExportTemplateTaskVM::setDelayedRunTime(const utility::datetime& value)
{
    m_delayedRunTime = value;
    m_delayedRunTimeIsSet = true;
}

bool CreateExportTemplateTaskVM::delayedRunTimeIsSet() const
{
    return m_delayedRunTimeIsSet;
}

void CreateExportTemplateTaskVM::unsetdelayedRunTime()
{
    m_delayedRunTimeIsSet = false;
}
utility::string_t CreateExportTemplateTaskVM::getCronExpression() const
{
    return m_cronExpression;
}

void CreateExportTemplateTaskVM::setCronExpression(const utility::string_t& value)
{
    m_cronExpression = value;
    m_cronExpressionIsSet = true;
}

bool CreateExportTemplateTaskVM::cronExpressionIsSet() const
{
    return m_cronExpressionIsSet;
}

void CreateExportTemplateTaskVM::unsetcronExpression()
{
    m_cronExpressionIsSet = false;
}
}
}
}


