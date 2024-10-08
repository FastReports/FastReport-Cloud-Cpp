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



#include "CppRestOpenAPIClient/model/UpdateTransformTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateTransformTaskBaseVM::UpdateTransformTaskBaseVM()
{
    m_inputFileIsSet = false;
    m_locale = utility::conversions::to_string_t("");
    m_localeIsSet = false;
    m_outputFileIsSet = false;
    m_transportIdsIsSet = false;
}

UpdateTransformTaskBaseVM::~UpdateTransformTaskBaseVM()
{
}

void UpdateTransformTaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateTransformTaskBaseVM::toJson() const
{
    web::json::value val = this->UpdateTaskBaseVM::toJson();
    
    if(m_inputFileIsSet)
    {
        val[utility::conversions::to_string_t(U("inputFile"))] = ModelBase::toJson(m_inputFile);
    }
    if(m_localeIsSet)
    {
        val[utility::conversions::to_string_t(U("locale"))] = ModelBase::toJson(m_locale);
    }
    if(m_outputFileIsSet)
    {
        val[utility::conversions::to_string_t(U("outputFile"))] = ModelBase::toJson(m_outputFile);
    }
    if(m_transportIdsIsSet)
    {
        val[utility::conversions::to_string_t(U("transportIds"))] = ModelBase::toJson(m_transportIds);
    }

    return val;
}

bool UpdateTransformTaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->UpdateTaskBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("inputFile"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inputFile")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<InputFileVM> refVal_setInputFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInputFile);
            setInputFile(refVal_setInputFile);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("locale"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("locale")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLocale;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLocale);
            setLocale(refVal_setLocale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("outputFile"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("outputFile")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<OutputFileVM> refVal_setOutputFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOutputFile);
            setOutputFile(refVal_setOutputFile);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("transportIds"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("transportIds")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTransportIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTransportIds);
            setTransportIds(refVal_setTransportIds);
        }
    }
    return ok;
}

void UpdateTransformTaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
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
}

bool UpdateTransformTaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    return ok;
}

std::shared_ptr<InputFileVM> UpdateTransformTaskBaseVM::getInputFile() const
{
    return m_inputFile;
}

void UpdateTransformTaskBaseVM::setInputFile(const std::shared_ptr<InputFileVM>& value)
{
    m_inputFile = value;
    m_inputFileIsSet = true;
}

bool UpdateTransformTaskBaseVM::inputFileIsSet() const
{
    return m_inputFileIsSet;
}

void UpdateTransformTaskBaseVM::unsetinputFile()
{
    m_inputFileIsSet = false;
}
utility::string_t UpdateTransformTaskBaseVM::getLocale() const
{
    return m_locale;
}

void UpdateTransformTaskBaseVM::setLocale(const utility::string_t& value)
{
    m_locale = value;
    m_localeIsSet = true;
}

bool UpdateTransformTaskBaseVM::localeIsSet() const
{
    return m_localeIsSet;
}

void UpdateTransformTaskBaseVM::unsetlocale()
{
    m_localeIsSet = false;
}
std::shared_ptr<OutputFileVM> UpdateTransformTaskBaseVM::getOutputFile() const
{
    return m_outputFile;
}

void UpdateTransformTaskBaseVM::setOutputFile(const std::shared_ptr<OutputFileVM>& value)
{
    m_outputFile = value;
    m_outputFileIsSet = true;
}

bool UpdateTransformTaskBaseVM::outputFileIsSet() const
{
    return m_outputFileIsSet;
}

void UpdateTransformTaskBaseVM::unsetoutputFile()
{
    m_outputFileIsSet = false;
}
std::vector<utility::string_t>& UpdateTransformTaskBaseVM::getTransportIds()
{
    return m_transportIds;
}

void UpdateTransformTaskBaseVM::setTransportIds(const std::vector<utility::string_t>& value)
{
    m_transportIds = value;
    m_transportIdsIsSet = true;
}

bool UpdateTransformTaskBaseVM::transportIdsIsSet() const
{
    return m_transportIdsIsSet;
}

void UpdateTransformTaskBaseVM::unsettransportIds()
{
    m_transportIdsIsSet = false;
}
}
}
}


