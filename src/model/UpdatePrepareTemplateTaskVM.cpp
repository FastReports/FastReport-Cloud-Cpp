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



#include "CppRestOpenAPIClient/model/UpdatePrepareTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdatePrepareTemplateTaskVM::UpdatePrepareTemplateTaskVM()
{
    m_exportIdsIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
    m_reportParametersIsSet = false;
}

UpdatePrepareTemplateTaskVM::~UpdatePrepareTemplateTaskVM()
{
}

void UpdatePrepareTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdatePrepareTemplateTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_exportIdsIsSet)
    {
        val[utility::conversions::to_string_t(U("exportIds"))] = ModelBase::toJson(m_exportIds);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t(U("pagesCount"))] = ModelBase::toJson(m_pagesCount);
    }
    if(m_reportParametersIsSet)
    {
        val[utility::conversions::to_string_t(U("reportParameters"))] = ModelBase::toJson(m_reportParameters);
    }

    return val;
}

bool UpdatePrepareTemplateTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("exportIds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exportIds")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setExportIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExportIds);
            setExportIds(refVal_setExportIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pagesCount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pagesCount")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPagesCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPagesCount);
            setPagesCount(refVal_setPagesCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reportParameters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reportParameters")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setReportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReportParameters);
            setReportParameters(refVal_setReportParameters);
        }
    }
    return ok;
}

void UpdatePrepareTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_exportIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exportIds")), m_exportIds));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pagesCount")), m_pagesCount));
    }
    if(m_reportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportParameters")), m_reportParameters));
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

bool UpdatePrepareTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("exportIds"))))
    {
        std::vector<utility::string_t> refVal_setExportIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exportIds"))), refVal_setExportIds );
        setExportIds(refVal_setExportIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pagesCount"))))
    {
        int32_t refVal_setPagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pagesCount"))), refVal_setPagesCount );
        setPagesCount(refVal_setPagesCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reportParameters"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setReportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reportParameters"))), refVal_setReportParameters );
        setReportParameters(refVal_setReportParameters);
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

std::vector<utility::string_t>& UpdatePrepareTemplateTaskVM::getExportIds()
{
    return m_exportIds;
}

void UpdatePrepareTemplateTaskVM::setExportIds(const std::vector<utility::string_t>& value)
{
    m_exportIds = value;
    m_exportIdsIsSet = true;
}

bool UpdatePrepareTemplateTaskVM::exportIdsIsSet() const
{
    return m_exportIdsIsSet;
}

void UpdatePrepareTemplateTaskVM::unsetexportIds()
{
    m_exportIdsIsSet = false;
}
int32_t UpdatePrepareTemplateTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void UpdatePrepareTemplateTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool UpdatePrepareTemplateTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void UpdatePrepareTemplateTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
std::map<utility::string_t, utility::string_t>& UpdatePrepareTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void UpdatePrepareTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool UpdatePrepareTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void UpdatePrepareTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
}
}
}

