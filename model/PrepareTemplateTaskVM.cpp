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



#include "PrepareTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




PrepareTemplateTaskVM::PrepareTemplateTaskVM()
{
    m_exportsIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
    m_reportParametersIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
}

PrepareTemplateTaskVM::~PrepareTemplateTaskVM()
{
}

void PrepareTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value PrepareTemplateTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_exportsIsSet)
    {
        val[utility::conversions::to_string_t("exports")] = ModelBase::toJson(m_exports);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t("pagesCount")] = ModelBase::toJson(m_pagesCount);
    }
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

    return val;
}

bool PrepareTemplateTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exports")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ExportReportTaskVM>> refVal_exports;
            ok &= ModelBase::fromJson(fieldValue, refVal_exports);
            setExports(refVal_exports);
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
    return ok;
}

void PrepareTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_exportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exports"), m_exports));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pagesCount"), m_pagesCount));
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
}

bool PrepareTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("exports")))
    {
        std::vector<std::shared_ptr<ExportReportTaskVM>> refVal_exports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exports")), refVal_exports );
        setExports(refVal_exports);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pagesCount")))
    {
        int32_t refVal_pagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pagesCount")), refVal_pagesCount );
        setPagesCount(refVal_pagesCount);
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
    return ok;
}

std::vector<std::shared_ptr<ExportReportTaskVM>>& PrepareTemplateTaskVM::getExports()
{
    return m_exports;
}

void PrepareTemplateTaskVM::setExports(const std::vector<std::shared_ptr<ExportReportTaskVM>>& value)
{
    m_exports = value;
    m_exportsIsSet = true;
}

bool PrepareTemplateTaskVM::exportsIsSet() const
{
    return m_exportsIsSet;
}

void PrepareTemplateTaskVM::unsetexports()
{
    m_exportsIsSet = false;
}
int32_t PrepareTemplateTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void PrepareTemplateTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool PrepareTemplateTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void PrepareTemplateTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
std::map<utility::string_t, utility::string_t>& PrepareTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void PrepareTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool PrepareTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void PrepareTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
utility::string_t PrepareTemplateTaskVM::getName() const
{
    return m_name;
}

void PrepareTemplateTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool PrepareTemplateTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void PrepareTemplateTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t PrepareTemplateTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void PrepareTemplateTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool PrepareTemplateTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void PrepareTemplateTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> PrepareTemplateTaskVM::getType() const
{
    return m_type;
}

void PrepareTemplateTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool PrepareTemplateTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void PrepareTemplateTaskVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}


