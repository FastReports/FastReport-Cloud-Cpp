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



#include "CppRestOpenAPIClient/model/CreatePrepareTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreatePrepareTemplateTaskVM::CreatePrepareTemplateTaskVM()
{
    m_exportsIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
    m_reportParametersIsSet = false;
}

CreatePrepareTemplateTaskVM::~CreatePrepareTemplateTaskVM()
{
}

void CreatePrepareTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value CreatePrepareTemplateTaskVM::toJson() const
{
    web::json::value val = this->CreateTransformTaskBaseVM::toJson();
    
    if(m_exportsIsSet)
    {
        val[utility::conversions::to_string_t(U("exports"))] = ModelBase::toJson(m_exports);
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

bool CreatePrepareTemplateTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CreateTransformTaskBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("exports"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exports")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CreateExportReportTaskVM>> refVal_setExports;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExports);
            setExports(refVal_setExports);
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

void CreatePrepareTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_exportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exports")), m_exports));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pagesCount")), m_pagesCount));
    }
    if(m_reportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reportParameters")), m_reportParameters));
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
    if(m_transportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("transports")), m_transports));
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
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool CreatePrepareTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("exports"))))
    {
        std::vector<std::shared_ptr<CreateExportReportTaskVM>> refVal_setExports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exports"))), refVal_setExports );
        setExports(refVal_setExports);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("transports"))))
    {
        std::vector<std::shared_ptr<CreateTransportTaskBaseVM>> refVal_setTransports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("transports"))), refVal_setTransports );
        setTransports(refVal_setTransports);
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
        std::shared_ptr<CreateTaskEndVM> refVal_setEnds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ends"))), refVal_setEnds );
        setEnds(refVal_setEnds);
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

std::vector<std::shared_ptr<CreateExportReportTaskVM>>& CreatePrepareTemplateTaskVM::getExports()
{
    return m_exports;
}

void CreatePrepareTemplateTaskVM::setExports(const std::vector<std::shared_ptr<CreateExportReportTaskVM>>& value)
{
    m_exports = value;
    m_exportsIsSet = true;
}

bool CreatePrepareTemplateTaskVM::exportsIsSet() const
{
    return m_exportsIsSet;
}

void CreatePrepareTemplateTaskVM::unsetexports()
{
    m_exportsIsSet = false;
}
int32_t CreatePrepareTemplateTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void CreatePrepareTemplateTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool CreatePrepareTemplateTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void CreatePrepareTemplateTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
std::map<utility::string_t, utility::string_t>& CreatePrepareTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void CreatePrepareTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool CreatePrepareTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void CreatePrepareTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
}
}
}


