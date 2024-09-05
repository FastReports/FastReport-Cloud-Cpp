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



#include "CppRestOpenAPIClient/model/DataSourceSelectCommandVM.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourceSelectCommandVM::DataSourceSelectCommandVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_command = utility::conversions::to_string_t("");
    m_commandIsSet = false;
    m_parametersIsSet = false;
}

DataSourceSelectCommandVM::~DataSourceSelectCommandVM()
{
}

void DataSourceSelectCommandVM::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceSelectCommandVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_commandIsSet)
    {
        val[utility::conversions::to_string_t(U("command"))] = ModelBase::toJson(m_command);
    }
    if(m_parametersIsSet)
    {
        val[utility::conversions::to_string_t(U("parameters"))] = ModelBase::toJson(m_parameters);
    }

    return val;
}

bool DataSourceSelectCommandVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("command"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("command")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCommand;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCommand);
            setCommand(refVal_setCommand);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parameters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parameters")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DataSourceSelectCommandParameterVM>> refVal_setParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParameters);
            setParameters(refVal_setParameters);
        }
    }
    return ok;
}

void DataSourceSelectCommandVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_commandIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("command")), m_command));
    }
    if(m_parametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parameters")), m_parameters));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool DataSourceSelectCommandVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("command"))))
    {
        utility::string_t refVal_setCommand;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("command"))), refVal_setCommand );
        setCommand(refVal_setCommand);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parameters"))))
    {
        std::vector<std::shared_ptr<DataSourceSelectCommandParameterVM>> refVal_setParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parameters"))), refVal_setParameters );
        setParameters(refVal_setParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t DataSourceSelectCommandVM::getName() const
{
    return m_name;
}

void DataSourceSelectCommandVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool DataSourceSelectCommandVM::nameIsSet() const
{
    return m_nameIsSet;
}

void DataSourceSelectCommandVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t DataSourceSelectCommandVM::getCommand() const
{
    return m_command;
}

void DataSourceSelectCommandVM::setCommand(const utility::string_t& value)
{
    m_command = value;
    m_commandIsSet = true;
}

bool DataSourceSelectCommandVM::commandIsSet() const
{
    return m_commandIsSet;
}

void DataSourceSelectCommandVM::unsetcommand()
{
    m_commandIsSet = false;
}
std::vector<std::shared_ptr<DataSourceSelectCommandParameterVM>>& DataSourceSelectCommandVM::getParameters()
{
    return m_parameters;
}

void DataSourceSelectCommandVM::setParameters(const std::vector<std::shared_ptr<DataSourceSelectCommandParameterVM>>& value)
{
    m_parameters = value;
    m_parametersIsSet = true;
}

bool DataSourceSelectCommandVM::parametersIsSet() const
{
    return m_parametersIsSet;
}

void DataSourceSelectCommandVM::unsetparameters()
{
    m_parametersIsSet = false;
}
}
}
}


