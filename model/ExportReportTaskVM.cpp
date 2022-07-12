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



#include "ExportReportTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




ExportReportTaskVM::ExportReportTaskVM()
{
    m_exportParametersIsSet = false;
    m_formatIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
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

ExportReportTaskVM::~ExportReportTaskVM()
{
}

void ExportReportTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value ExportReportTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_exportParametersIsSet)
    {
        val[utility::conversions::to_string_t("exportParameters")] = ModelBase::toJson(m_exportParameters);
    }
    if(m_formatIsSet)
    {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(m_format);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t("pagesCount")] = ModelBase::toJson(m_pagesCount);
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

bool ExportReportTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exportParameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exportParameters"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_exportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_exportParameters);
            setExportParameters(refVal_exportParameters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExportFormat> refVal_format;
            ok &= ModelBase::fromJson(fieldValue, refVal_format);
            setFormat(refVal_format);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pagesCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pagesCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pagesCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_pagesCount);
            setPagesCount(refVal_pagesCount);
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

void ExportReportTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_exportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exportParameters"), m_exportParameters));
    }
    if(m_formatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("format"), m_format));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pagesCount"), m_pagesCount));
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

bool ExportReportTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("exportParameters")))
    {
        std::map<utility::string_t, utility::string_t> refVal_exportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exportParameters")), refVal_exportParameters );
        setExportParameters(refVal_exportParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("format")))
    {
        std::shared_ptr<ExportFormat> refVal_format;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("format")), refVal_format );
        setFormat(refVal_format);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pagesCount")))
    {
        int32_t refVal_pagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pagesCount")), refVal_pagesCount );
        setPagesCount(refVal_pagesCount);
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

std::map<utility::string_t, utility::string_t>& ExportReportTaskVM::getExportParameters()
{
    return m_exportParameters;
}

void ExportReportTaskVM::setExportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_exportParameters = value;
    m_exportParametersIsSet = true;
}

bool ExportReportTaskVM::exportParametersIsSet() const
{
    return m_exportParametersIsSet;
}

void ExportReportTaskVM::unsetexportParameters()
{
    m_exportParametersIsSet = false;
}
std::shared_ptr<ExportFormat> ExportReportTaskVM::getFormat() const
{
    return m_format;
}

void ExportReportTaskVM::setFormat(const std::shared_ptr<ExportFormat>& value)
{
    m_format = value;
    m_formatIsSet = true;
}

bool ExportReportTaskVM::formatIsSet() const
{
    return m_formatIsSet;
}

void ExportReportTaskVM::unsetformat()
{
    m_formatIsSet = false;
}
int32_t ExportReportTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void ExportReportTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool ExportReportTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void ExportReportTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
utility::string_t ExportReportTaskVM::getName() const
{
    return m_name;
}

void ExportReportTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool ExportReportTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void ExportReportTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t ExportReportTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void ExportReportTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool ExportReportTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void ExportReportTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> ExportReportTaskVM::getType() const
{
    return m_type;
}

void ExportReportTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool ExportReportTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void ExportReportTaskVM::unsettype()
{
    m_typeIsSet = false;
}
utility::datetime ExportReportTaskVM::getDelayedRunTime() const
{
    return m_delayedRunTime;
}

void ExportReportTaskVM::setDelayedRunTime(const utility::datetime& value)
{
    m_delayedRunTime = value;
    m_delayedRunTimeIsSet = true;
}

bool ExportReportTaskVM::delayedRunTimeIsSet() const
{
    return m_delayedRunTimeIsSet;
}

void ExportReportTaskVM::unsetdelayedRunTime()
{
    m_delayedRunTimeIsSet = false;
}
utility::string_t ExportReportTaskVM::getCronExpression() const
{
    return m_cronExpression;
}

void ExportReportTaskVM::setCronExpression(const utility::string_t& value)
{
    m_cronExpression = value;
    m_cronExpressionIsSet = true;
}

bool ExportReportTaskVM::cronExpressionIsSet() const
{
    return m_cronExpressionIsSet;
}

void ExportReportTaskVM::unsetcronExpression()
{
    m_cronExpressionIsSet = false;
}
}
}
}


