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



#include "CppRestOpenAPIClient/model/DataSourceStatus.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

DataSourceStatus::eDataSourceStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Connected")))
        return DataSourceStatus::eDataSourceStatus::DataSourceStatus_CONNECTED;
    if (val == utility::conversions::to_string_t(U("Error")))
        return DataSourceStatus::eDataSourceStatus::DataSourceStatus_ERROR;
    if (val == utility::conversions::to_string_t(U("Updating")))
        return DataSourceStatus::eDataSourceStatus::DataSourceStatus_UPDATING;
    return {};
}

EnumUnderlyingType fromEnum(DataSourceStatus::eDataSourceStatus e)
{
    switch (e)
    {
    case DataSourceStatus::eDataSourceStatus::DataSourceStatus_CONNECTED:
        return U("Connected");
    case DataSourceStatus::eDataSourceStatus::DataSourceStatus_ERROR:
        return U("Error");
    case DataSourceStatus::eDataSourceStatus::DataSourceStatus_UPDATING:
        return U("Updating");
    default:
        break;
    }
    return {};
}
}

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
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DataSourceStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void DataSourceStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DataSourceStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
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


