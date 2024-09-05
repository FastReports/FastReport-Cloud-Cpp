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



#include "CppRestOpenAPIClient/model/TimePeriodType.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

TimePeriodType::eTimePeriodType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("Second")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_SECOND;
    if (val == utility::conversions::to_string_t(U("Minute")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_MINUTE;
    if (val == utility::conversions::to_string_t(U("Hour")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_HOUR;
    if (val == utility::conversions::to_string_t(U("Day")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_DAY;
    if (val == utility::conversions::to_string_t(U("Week")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_WEEK;
    if (val == utility::conversions::to_string_t(U("Month")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_MONTH;
    if (val == utility::conversions::to_string_t(U("Year")))
        return TimePeriodType::eTimePeriodType::TimePeriodType_YEAR;
    return {};
}

EnumUnderlyingType fromEnum(TimePeriodType::eTimePeriodType e)
{
    switch (e)
    {
    case TimePeriodType::eTimePeriodType::TimePeriodType_SECOND:
        return U("Second");
    case TimePeriodType::eTimePeriodType::TimePeriodType_MINUTE:
        return U("Minute");
    case TimePeriodType::eTimePeriodType::TimePeriodType_HOUR:
        return U("Hour");
    case TimePeriodType::eTimePeriodType::TimePeriodType_DAY:
        return U("Day");
    case TimePeriodType::eTimePeriodType::TimePeriodType_WEEK:
        return U("Week");
    case TimePeriodType::eTimePeriodType::TimePeriodType_MONTH:
        return U("Month");
    case TimePeriodType::eTimePeriodType::TimePeriodType_YEAR:
        return U("Year");
    default:
        break;
    }
    return {};
}
}

TimePeriodType::TimePeriodType()
{
}

TimePeriodType::~TimePeriodType()
{
}

void TimePeriodType::validate()
{
    // TODO: implement validation
}

web::json::value TimePeriodType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool TimePeriodType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void TimePeriodType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool TimePeriodType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

TimePeriodType::eTimePeriodType TimePeriodType::getValue() const
{
   return m_value;
}

void TimePeriodType::setValue(TimePeriodType::eTimePeriodType const value)
{
   m_value = value;
}


}
}
}


