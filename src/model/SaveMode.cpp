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



#include "CppRestOpenAPIClient/model/SaveMode.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

SaveMode::eSaveMode toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("All")))
        return SaveMode::eSaveMode::SaveMode_ALL;
    if (val == utility::conversions::to_string_t(U("Original")))
        return SaveMode::eSaveMode::SaveMode_ORIGINAL;
    if (val == utility::conversions::to_string_t(U("User")))
        return SaveMode::eSaveMode::SaveMode_USER;
    if (val == utility::conversions::to_string_t(U("Role")))
        return SaveMode::eSaveMode::SaveMode_ROLE;
    if (val == utility::conversions::to_string_t(U("Security")))
        return SaveMode::eSaveMode::SaveMode_SECURITY;
    if (val == utility::conversions::to_string_t(U("Deny")))
        return SaveMode::eSaveMode::SaveMode_DENY;
    if (val == utility::conversions::to_string_t(U("Custom")))
        return SaveMode::eSaveMode::SaveMode_CUSTOM;
    return {};
}

EnumUnderlyingType fromEnum(SaveMode::eSaveMode e)
{
    switch (e)
    {
    case SaveMode::eSaveMode::SaveMode_ALL:
        return U("All");
    case SaveMode::eSaveMode::SaveMode_ORIGINAL:
        return U("Original");
    case SaveMode::eSaveMode::SaveMode_USER:
        return U("User");
    case SaveMode::eSaveMode::SaveMode_ROLE:
        return U("Role");
    case SaveMode::eSaveMode::SaveMode_SECURITY:
        return U("Security");
    case SaveMode::eSaveMode::SaveMode_DENY:
        return U("Deny");
    case SaveMode::eSaveMode::SaveMode_CUSTOM:
        return U("Custom");
    default:
        break;
    }
    return {};
}
}

SaveMode::SaveMode()
{
}

SaveMode::~SaveMode()
{
}

void SaveMode::validate()
{
    // TODO: implement validation
}

web::json::value SaveMode::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool SaveMode::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void SaveMode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool SaveMode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

SaveMode::eSaveMode SaveMode::getValue() const
{
   return m_value;
}

void SaveMode::setValue(SaveMode::eSaveMode const value)
{
   m_value = value;
}


}
}
}


