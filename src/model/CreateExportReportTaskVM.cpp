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



#include "CppRestOpenAPIClient/model/CreateExportReportTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateExportReportTaskVM::CreateExportReportTaskVM()
{
    m_exportParametersIsSet = false;
    m_formatIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
}

CreateExportReportTaskVM::~CreateExportReportTaskVM()
{
}

void CreateExportReportTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateExportReportTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_exportParametersIsSet)
    {
        val[utility::conversions::to_string_t(U("exportParameters"))] = ModelBase::toJson(m_exportParameters);
    }
    if(m_formatIsSet)
    {
        val[utility::conversions::to_string_t(U("format"))] = ModelBase::toJson(m_format);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t(U("pagesCount"))] = ModelBase::toJson(m_pagesCount);
    }

    return val;
}

bool CreateExportReportTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("exportParameters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exportParameters")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setExportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExportParameters);
            setExportParameters(refVal_setExportParameters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExportFormat> refVal_setFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFormat);
            setFormat(refVal_setFormat);
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
    return ok;
}

void CreateExportReportTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_exportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exportParameters")), m_exportParameters));
    }
    if(m_formatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("format")), m_format));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pagesCount")), m_pagesCount));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
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
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool CreateExportReportTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("exportParameters"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setExportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exportParameters"))), refVal_setExportParameters );
        setExportParameters(refVal_setExportParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        std::shared_ptr<ExportFormat> refVal_setFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_setFormat );
        setFormat(refVal_setFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pagesCount"))))
    {
        int32_t refVal_setPagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pagesCount"))), refVal_setPagesCount );
        setPagesCount(refVal_setPagesCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    return ok;
}

std::map<utility::string_t, utility::string_t>& CreateExportReportTaskVM::getExportParameters()
{
    return m_exportParameters;
}

void CreateExportReportTaskVM::setExportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_exportParameters = value;
    m_exportParametersIsSet = true;
}

bool CreateExportReportTaskVM::exportParametersIsSet() const
{
    return m_exportParametersIsSet;
}

void CreateExportReportTaskVM::unsetexportParameters()
{
    m_exportParametersIsSet = false;
}
std::shared_ptr<ExportFormat> CreateExportReportTaskVM::getFormat() const
{
    return m_format;
}

void CreateExportReportTaskVM::setFormat(const std::shared_ptr<ExportFormat>& value)
{
    m_format = value;
    m_formatIsSet = true;
}

bool CreateExportReportTaskVM::formatIsSet() const
{
    return m_formatIsSet;
}

void CreateExportReportTaskVM::unsetformat()
{
    m_formatIsSet = false;
}
int32_t CreateExportReportTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void CreateExportReportTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool CreateExportReportTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void CreateExportReportTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
}
}
}


