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



#include "RunExportTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




RunExportTemplateTaskVM::RunExportTemplateTaskVM()
{
    m_reportParametersIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
}

RunExportTemplateTaskVM::~RunExportTemplateTaskVM()
{
}

void RunExportTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value RunExportTemplateTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_reportParametersIsSet)
    {
        val[utility::conversions::to_string_t("reportParameters")] = ModelBase::toJson(m_reportParameters);
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

bool RunExportTemplateTaskVM::fromJson(const web::json::value& val)
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

void RunExportTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionId"), m_subscriptionId));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_type));
    }
}

bool RunExportTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

std::map<utility::string_t, utility::string_t>& RunExportTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void RunExportTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool RunExportTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void RunExportTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
utility::string_t RunExportTemplateTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void RunExportTemplateTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool RunExportTemplateTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void RunExportTemplateTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> RunExportTemplateTaskVM::getType() const
{
    return m_type;
}

void RunExportTemplateTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool RunExportTemplateTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void RunExportTemplateTaskVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}


