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



#include "DataSourceStatus.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourceStatus::DataSourceStatus()
{
}

DataSourceStatus::~DataSourceStatus()
{
}

void DataSourceStatus::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eDataSourceStatus::DataSourceStatus_CONNECTED) val = web::json::value::string(U(Connected));
    if (m_value == eDataSourceStatus::DataSourceStatus_ERROR) val = web::json::value::string(U(Error));
    if (m_value == eDataSourceStatus::DataSourceStatus_UPDATING) val = web::json::value::string(U(Updating));

    return val;
}

bool DataSourceStatus::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(Connected)) m_value = eDataSourceStatus::DataSourceStatus_CONNECTED;
    if (s == utility::conversions::to_string_t(Error)) m_value = eDataSourceStatus::DataSourceStatus_ERROR;
    if (s == utility::conversions::to_string_t(Updating)) m_value = eDataSourceStatus::DataSourceStatus_UPDATING;
    return true;
}

void DataSourceStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eDataSourceStatus::DataSourceStatus_CONNECTED) s = utility::conversions::to_string_t(Connected);
    if (m_value == eDataSourceStatus::DataSourceStatus_ERROR) s = utility::conversions::to_string_t(Error);
    if (m_value == eDataSourceStatus::DataSourceStatus_UPDATING) s = utility::conversions::to_string_t(Updating);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool DataSourceStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eDataSourceStatus v;

        
        if (s == utility::conversions::to_string_t(Connected)) v = eDataSourceStatus::DataSourceStatus_CONNECTED;
        if (s == utility::conversions::to_string_t(Error)) v = eDataSourceStatus::DataSourceStatus_ERROR;
        if (s == utility::conversions::to_string_t(Updating)) v = eDataSourceStatus::DataSourceStatus_UPDATING;

        setValue(v);
    }
    return ok;
}

DataSourceStatus::eDataSourceStatus DataSourceStatus::getValue() const
{
   return m_value;
}

void DataSourceStatus::setValue(DataSourceStatus::eDataSourceStatus const value)
{
   m_value = value;
}


}
}
}


