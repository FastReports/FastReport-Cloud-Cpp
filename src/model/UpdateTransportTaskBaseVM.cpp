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



#include "CppRestOpenAPIClient/model/UpdateTransportTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateTransportTaskBaseVM::UpdateTransportTaskBaseVM()
{
    m_inputFileIsSet = false;
}

UpdateTransportTaskBaseVM::~UpdateTransportTaskBaseVM()
{
}

void UpdateTransportTaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateTransportTaskBaseVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_inputFileIsSet)
    {
        val[utility::conversions::to_string_t(U("inputFile"))] = ModelBase::toJson(m_inputFile);
    }

    return val;
}

bool UpdateTransportTaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void UpdateTransportTaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool UpdateTransportTaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::shared_ptr<InputFileVM> UpdateTransportTaskBaseVM::getInputFile() const
{
    return m_inputFile;
}

void UpdateTransportTaskBaseVM::setInputFile(const std::shared_ptr<InputFileVM>& value)
{
    m_inputFile = value;
    m_inputFileIsSet = true;
}

bool UpdateTransportTaskBaseVM::inputFileIsSet() const
{
    return m_inputFileIsSet;
}

void UpdateTransportTaskBaseVM::unsetinputFile()
{
    m_inputFileIsSet = false;
}
}
}
}


