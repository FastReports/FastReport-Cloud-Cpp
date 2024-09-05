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



#include "CppRestOpenAPIClient/model/RunTransportTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {



RunTransportTaskBaseVM::RunTransportTaskBaseVM()
{
    m_inputFileIsSet = false;
}

RunTransportTaskBaseVM::~RunTransportTaskBaseVM()
{
}

void RunTransportTaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value RunTransportTaskBaseVM::toJson() const
{
    web::json::value val = this->RunTaskBaseVM::toJson();
    
    if(m_inputFileIsSet)
    {
        val[utility::conversions::to_string_t(U("inputFile"))] = ModelBase::toJson(m_inputFile);
    }

    return val;
}

bool RunTransportTaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->RunTaskBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("inputFile"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("inputFile")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RunInputFileVM> refVal_setInputFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInputFile);
            setInputFile(refVal_setInputFile);
        }
    }
    return ok;
}

void RunTransportTaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool RunTransportTaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("inputFile"))))
    {
        std::shared_ptr<RunInputFileVM> refVal_setInputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inputFile"))), refVal_setInputFile );
        setInputFile(refVal_setInputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    return ok;
}

std::shared_ptr<RunInputFileVM> RunTransportTaskBaseVM::getInputFile() const
{
    return m_inputFile;
}

void RunTransportTaskBaseVM::setInputFile(const std::shared_ptr<RunInputFileVM>& value)
{
    m_inputFile = value;
    m_inputFileIsSet = true;
}

bool RunTransportTaskBaseVM::inputFileIsSet() const
{
    return m_inputFileIsSet;
}

void RunTransportTaskBaseVM::unsetinputFile()
{
    m_inputFileIsSet = false;
}
}
}
}


