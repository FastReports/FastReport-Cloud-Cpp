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



#include "CppRestOpenAPIClient/model/GroupAdministrate.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = int64_t;

GroupAdministrate::eGroupAdministrate toEnum(const EnumUnderlyingType& val)
{
    switch (val)
    {
    case 0:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__0;
    case 1:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__1;
    case 2:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__2;
    case 4:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__4;
    case 8:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__8;
    case -1:
        return GroupAdministrate::eGroupAdministrate::GroupAdministrate__12;
    default:
        break;
    }
    return {};
}

EnumUnderlyingType fromEnum(GroupAdministrate::eGroupAdministrate e)
{
    switch (e)
    {
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__0:
        return 0;
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__1:
        return 1;
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__2:
        return 2;
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__4:
        return 4;
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__8:
        return 8;
    case GroupAdministrate::eGroupAdministrate::GroupAdministrate__12:
        return -1;
    default:
        break;
    }
    return {};
}
}

GroupAdministrate::GroupAdministrate()
{
}

GroupAdministrate::~GroupAdministrate()
{
}

void GroupAdministrate::validate()
{
    // TODO: implement validation
}

web::json::value GroupAdministrate::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool GroupAdministrate::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_number().to_int64());
    return true;
}

void GroupAdministrate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool GroupAdministrate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

GroupAdministrate::eGroupAdministrate GroupAdministrate::getValue() const
{
   return m_value;
}

void GroupAdministrate::setValue(GroupAdministrate::eGroupAdministrate const value)
{
   m_value = value;
}


}
}
}


