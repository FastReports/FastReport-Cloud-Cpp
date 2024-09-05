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



#include "CppRestOpenAPIClient/model/DataSourceSelectCommandParameterVM.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourceSelectCommandParameterVM::DataSourceSelectCommandParameterVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_dataType = utility::conversions::to_string_t("");
    m_dataTypeIsSet = false;
    m_defaultValue = utility::conversions::to_string_t("");
    m_defaultValueIsSet = false;
    m_size = 0;
    m_sizeIsSet = false;
}

DataSourceSelectCommandParameterVM::~DataSourceSelectCommandParameterVM()
{
}

void DataSourceSelectCommandParameterVM::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceSelectCommandParameterVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_dataTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("dataType"))] = ModelBase::toJson(m_dataType);
    }
    if(m_defaultValueIsSet)
    {
        val[utility::conversions::to_string_t(U("defaultValue"))] = ModelBase::toJson(m_defaultValue);
    }
    if(m_sizeIsSet)
    {
        val[utility::conversions::to_string_t(U("size"))] = ModelBase::toJson(m_size);
    }

    return val;
}

bool DataSourceSelectCommandParameterVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("dataType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDataType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataType);
            setDataType(refVal_setDataType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("defaultValue"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("defaultValue")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDefaultValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultValue);
            setDefaultValue(refVal_setDefaultValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("size"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("size")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSize);
            setSize(refVal_setSize);
        }
    }
    return ok;
}

void DataSourceSelectCommandParameterVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_dataTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataType")), m_dataType));
    }
    if(m_defaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("defaultValue")), m_defaultValue));
    }
    if(m_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("size")), m_size));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool DataSourceSelectCommandParameterVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataType"))))
    {
        utility::string_t refVal_setDataType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataType"))), refVal_setDataType );
        setDataType(refVal_setDataType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("defaultValue"))))
    {
        utility::string_t refVal_setDefaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("defaultValue"))), refVal_setDefaultValue );
        setDefaultValue(refVal_setDefaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("size"))))
    {
        int32_t refVal_setSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("size"))), refVal_setSize );
        setSize(refVal_setSize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t DataSourceSelectCommandParameterVM::getName() const
{
    return m_name;
}

void DataSourceSelectCommandParameterVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool DataSourceSelectCommandParameterVM::nameIsSet() const
{
    return m_nameIsSet;
}

void DataSourceSelectCommandParameterVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t DataSourceSelectCommandParameterVM::getDataType() const
{
    return m_dataType;
}

void DataSourceSelectCommandParameterVM::setDataType(const utility::string_t& value)
{
    m_dataType = value;
    m_dataTypeIsSet = true;
}

bool DataSourceSelectCommandParameterVM::dataTypeIsSet() const
{
    return m_dataTypeIsSet;
}

void DataSourceSelectCommandParameterVM::unsetdataType()
{
    m_dataTypeIsSet = false;
}
utility::string_t DataSourceSelectCommandParameterVM::getDefaultValue() const
{
    return m_defaultValue;
}

void DataSourceSelectCommandParameterVM::setDefaultValue(const utility::string_t& value)
{
    m_defaultValue = value;
    m_defaultValueIsSet = true;
}

bool DataSourceSelectCommandParameterVM::defaultValueIsSet() const
{
    return m_defaultValueIsSet;
}

void DataSourceSelectCommandParameterVM::unsetdefaultValue()
{
    m_defaultValueIsSet = false;
}
int32_t DataSourceSelectCommandParameterVM::getSize() const
{
    return m_size;
}

void DataSourceSelectCommandParameterVM::setSize(int32_t value)
{
    m_size = value;
    m_sizeIsSet = true;
}

bool DataSourceSelectCommandParameterVM::sizeIsSet() const
{
    return m_sizeIsSet;
}

void DataSourceSelectCommandParameterVM::unsetsize()
{
    m_sizeIsSet = false;
}
}
}
}

