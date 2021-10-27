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



#include "CreateTransformTaskBaseVM.h"

namespace fastreport {
namespace cloud {
namespace models {




CreateTransformTaskBaseVM::CreateTransformTaskBaseVM()
{
    m_locale = utility::conversions::to_string_t("");
    m_localeIsSet = false;
    m_inputFileIsSet = false;
    m_outputFileIsSet = false;
    m_transportsIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
}

CreateTransformTaskBaseVM::~CreateTransformTaskBaseVM()
{
}

void CreateTransformTaskBaseVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateTransformTaskBaseVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_localeIsSet)
    {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_locale);
    }
    if(m_inputFileIsSet)
    {
        val[utility::conversions::to_string_t("inputFile")] = ModelBase::toJson(m_inputFile);
    }
    if(m_outputFileIsSet)
    {
        val[utility::conversions::to_string_t("outputFile")] = ModelBase::toJson(m_outputFile);
    }
    if(m_transportsIsSet)
    {
        val[utility::conversions::to_string_t("transports")] = ModelBase::toJson(m_transports);
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

bool CreateTransformTaskBaseVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locale")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_locale;
            ok &= ModelBase::fromJson(fieldValue, refVal_locale);
            setLocale(refVal_locale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputFile")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputFile"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<InputFileVM> refVal_inputFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_inputFile);
            setInputFile(refVal_inputFile);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputFile")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputFile"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<OutputFileVM> refVal_outputFile;
            ok &= ModelBase::fromJson(fieldValue, refVal_outputFile);
            setOutputFile(refVal_outputFile);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transports")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<CreateTransportTaskBaseVM>> refVal_transports;
            ok &= ModelBase::fromJson(fieldValue, refVal_transports);
            setTransports(refVal_transports);
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

void CreateTransformTaskBaseVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locale"), m_locale));
    }
    if(m_inputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inputFile"), m_inputFile));
    }
    if(m_outputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("outputFile"), m_outputFile));
    }
    if(m_transportsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transports"), m_transports));
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

bool CreateTransformTaskBaseVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("locale")))
    {
        utility::string_t refVal_locale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("locale")), refVal_locale );
        setLocale(refVal_locale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("inputFile")))
    {
        std::shared_ptr<InputFileVM> refVal_inputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inputFile")), refVal_inputFile );
        setInputFile(refVal_inputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("outputFile")))
    {
        std::shared_ptr<OutputFileVM> refVal_outputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("outputFile")), refVal_outputFile );
        setOutputFile(refVal_outputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transports")))
    {
        std::vector<std::shared_ptr<CreateTransportTaskBaseVM>> refVal_transports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("transports")), refVal_transports );
        setTransports(refVal_transports);
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

utility::string_t CreateTransformTaskBaseVM::getLocale() const
{
    return m_locale;
}

void CreateTransformTaskBaseVM::setLocale(const utility::string_t& value)
{
    m_locale = value;
    m_localeIsSet = true;
}

bool CreateTransformTaskBaseVM::localeIsSet() const
{
    return m_localeIsSet;
}

void CreateTransformTaskBaseVM::unsetlocale()
{
    m_localeIsSet = false;
}
std::shared_ptr<InputFileVM> CreateTransformTaskBaseVM::getInputFile() const
{
    return m_inputFile;
}

void CreateTransformTaskBaseVM::setInputFile(const std::shared_ptr<InputFileVM>& value)
{
    m_inputFile = value;
    m_inputFileIsSet = true;
}

bool CreateTransformTaskBaseVM::inputFileIsSet() const
{
    return m_inputFileIsSet;
}

void CreateTransformTaskBaseVM::unsetinputFile()
{
    m_inputFileIsSet = false;
}
std::shared_ptr<OutputFileVM> CreateTransformTaskBaseVM::getOutputFile() const
{
    return m_outputFile;
}

void CreateTransformTaskBaseVM::setOutputFile(const std::shared_ptr<OutputFileVM>& value)
{
    m_outputFile = value;
    m_outputFileIsSet = true;
}

bool CreateTransformTaskBaseVM::outputFileIsSet() const
{
    return m_outputFileIsSet;
}

void CreateTransformTaskBaseVM::unsetoutputFile()
{
    m_outputFileIsSet = false;
}
std::vector<std::shared_ptr<CreateTransportTaskBaseVM>>& CreateTransformTaskBaseVM::getTransports()
{
    return m_transports;
}

void CreateTransformTaskBaseVM::setTransports(const std::vector<std::shared_ptr<CreateTransportTaskBaseVM>>& value)
{
    m_transports = value;
    m_transportsIsSet = true;
}

bool CreateTransformTaskBaseVM::transportsIsSet() const
{
    return m_transportsIsSet;
}

void CreateTransformTaskBaseVM::unsettransports()
{
    m_transportsIsSet = false;
}
utility::string_t CreateTransformTaskBaseVM::getName() const
{
    return m_name;
}

void CreateTransformTaskBaseVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool CreateTransformTaskBaseVM::nameIsSet() const
{
    return m_nameIsSet;
}

void CreateTransformTaskBaseVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t CreateTransformTaskBaseVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void CreateTransformTaskBaseVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool CreateTransformTaskBaseVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void CreateTransformTaskBaseVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> CreateTransformTaskBaseVM::getType() const
{
    return m_type;
}

void CreateTransformTaskBaseVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool CreateTransformTaskBaseVM::typeIsSet() const
{
    return m_typeIsSet;
}

void CreateTransformTaskBaseVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}

