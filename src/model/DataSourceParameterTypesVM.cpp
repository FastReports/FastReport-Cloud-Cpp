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



#include "CppRestOpenAPIClient/model/DataSourceParameterTypesVM.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourceParameterTypesVM::DataSourceParameterTypesVM()
{
    m_dataTypesIsSet = false;
}

DataSourceParameterTypesVM::~DataSourceParameterTypesVM()
{
}

void DataSourceParameterTypesVM::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceParameterTypesVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_dataTypesIsSet)
    {
        val[utility::conversions::to_string_t(U("dataTypes"))] = ModelBase::toJson(m_dataTypes);
    }

    return val;
}

bool DataSourceParameterTypesVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("dataTypes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataTypes")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DataSourceParameterTypeVM>> refVal_setDataTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataTypes);
            setDataTypes(refVal_setDataTypes);
        }
    }
    return ok;
}

void DataSourceParameterTypesVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_dataTypesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataTypes")), m_dataTypes));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool DataSourceParameterTypesVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("dataTypes"))))
    {
        std::vector<std::shared_ptr<DataSourceParameterTypeVM>> refVal_setDataTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataTypes"))), refVal_setDataTypes );
        setDataTypes(refVal_setDataTypes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

std::vector<std::shared_ptr<DataSourceParameterTypeVM>>& DataSourceParameterTypesVM::getDataTypes()
{
    return m_dataTypes;
}

void DataSourceParameterTypesVM::setDataTypes(const std::vector<std::shared_ptr<DataSourceParameterTypeVM>>& value)
{
    m_dataTypes = value;
    m_dataTypesIsSet = true;
}

bool DataSourceParameterTypesVM::dataTypesIsSet() const
{
    return m_dataTypesIsSet;
}

void DataSourceParameterTypesVM::unsetdataTypes()
{
    m_dataTypesIsSet = false;
}
}
}
}


