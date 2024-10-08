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



#include "CppRestOpenAPIClient/model/DataSourceConnectionType.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

DataSourceConnectionType::eDataSourceConnectionType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("JSON")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_JSON;
    if (val == utility::conversions::to_string_t(U("MSSQL")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MSSQL;
    if (val == utility::conversions::to_string_t(U("CSV")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_CSV;
    if (val == utility::conversions::to_string_t(U("XML")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_XML;
    if (val == utility::conversions::to_string_t(U("MySQL")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MYSQL;
    if (val == utility::conversions::to_string_t(U("Postgres")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_POSTGRES;
    if (val == utility::conversions::to_string_t(U("OracleDB")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_ORACLEDB;
    if (val == utility::conversions::to_string_t(U("FirebirdDB")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_FIREBIRDDB;
    if (val == utility::conversions::to_string_t(U("MongoDB")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MONGODB;
    if (val == utility::conversions::to_string_t(U("ClickHouse")))
        return DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_CLICKHOUSE;
    return {};
}

EnumUnderlyingType fromEnum(DataSourceConnectionType::eDataSourceConnectionType e)
{
    switch (e)
    {
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_JSON:
        return U("JSON");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MSSQL:
        return U("MSSQL");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_CSV:
        return U("CSV");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_XML:
        return U("XML");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MYSQL:
        return U("MySQL");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_POSTGRES:
        return U("Postgres");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_ORACLEDB:
        return U("OracleDB");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_FIREBIRDDB:
        return U("FirebirdDB");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_MONGODB:
        return U("MongoDB");
    case DataSourceConnectionType::eDataSourceConnectionType::DataSourceConnectionType_CLICKHOUSE:
        return U("ClickHouse");
    default:
        break;
    }
    return {};
}
}

DataSourceConnectionType::DataSourceConnectionType()
{
}

DataSourceConnectionType::~DataSourceConnectionType()
{
}

void DataSourceConnectionType::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceConnectionType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DataSourceConnectionType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void DataSourceConnectionType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DataSourceConnectionType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

DataSourceConnectionType::eDataSourceConnectionType DataSourceConnectionType::getValue() const
{
   return m_value;
}

void DataSourceConnectionType::setValue(DataSourceConnectionType::eDataSourceConnectionType const value)
{
   m_value = value;
}


}
}
}


