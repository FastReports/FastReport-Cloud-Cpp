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



#include "CppRestOpenAPIClient/model/DataSourceGet.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = int64_t;

DataSourceGet::eDataSourceGet toEnum(const EnumUnderlyingType& val)
{
    switch (val)
    {
    case 0:
        return DataSourceGet::eDataSourceGet::DataSourceGet__0;
    case 1:
        return DataSourceGet::eDataSourceGet::DataSourceGet__1;
    case 2:
        return DataSourceGet::eDataSourceGet::DataSourceGet__2;
    case -1:
        return DataSourceGet::eDataSourceGet::DataSourceGet__1;
    default:
        break;
    }
    return {};
}

EnumUnderlyingType fromEnum(DataSourceGet::eDataSourceGet e)
{
    switch (e)
    {
    case DataSourceGet::eDataSourceGet::DataSourceGet__0:
        return 0;
    case DataSourceGet::eDataSourceGet::DataSourceGet__1:
        return 1;
    case DataSourceGet::eDataSourceGet::DataSourceGet__2:
        return 2;
    case DataSourceGet::eDataSourceGet::DataSourceGet__1:
        return -1;
    default:
        break;
    }
    return {};
}
}

DataSourceGet::DataSourceGet()
{
}

DataSourceGet::~DataSourceGet()
{
}

void DataSourceGet::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceGet::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool DataSourceGet::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_number().to_int64());
    return true;
}

void DataSourceGet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool DataSourceGet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

DataSourceGet::eDataSourceGet DataSourceGet::getValue() const
{
   return m_value;
}

void DataSourceGet::setValue(DataSourceGet::eDataSourceGet const value)
{
   m_value = value;
}


}
}
}

