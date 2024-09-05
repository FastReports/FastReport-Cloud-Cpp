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



#include "CppRestOpenAPIClient/model/ExportReportTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ExportReportTaskVM::ExportReportTaskVM()
{
    m_exportParametersIsSet = false;
    m_formatIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
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
    web::json::value val = this->TransformTaskBaseVM::toJson();
    
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

bool ExportReportTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->TransformTaskBaseVM::fromJson(val);
    
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

void ExportReportTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_inputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inputFile")), m_inputFile));
    }
    if(m_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("locale")), m_locale));
    }
    if(m_outputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("outputFile")), m_outputFile));
    }
    if(m_transportIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transportIds")), m_transportIds));
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
}

bool ExportReportTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("inputFile"))))
    {
        std::shared_ptr<InputFileVM> refVal_setInputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inputFile"))), refVal_setInputFile );
        setInputFile(refVal_setInputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("locale"))))
    {
        utility::string_t refVal_setLocale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("locale"))), refVal_setLocale );
        setLocale(refVal_setLocale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("outputFile"))))
    {
        std::shared_ptr<OutputFileVM> refVal_setOutputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("outputFile"))), refVal_setOutputFile );
        setOutputFile(refVal_setOutputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("transportIds"))))
    {
        std::vector<utility::string_t> refVal_setTransportIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transportIds"))), refVal_setTransportIds );
        setTransportIds(refVal_setTransportIds);
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
}
}
}


