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



#include "CppRestOpenAPIClient/model/GroupUpdate.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = int64_t;

GroupUpdate::eGroupUpdate toEnum(const EnumUnderlyingType& val)
{
    switch (val)
    {
    case 0:
        return GroupUpdate::eGroupUpdate::GroupUpdate__0;
    case 1:
        return GroupUpdate::eGroupUpdate::GroupUpdate__1;
    case -1:
        return GroupUpdate::eGroupUpdate::GroupUpdate__12;
    default:
        break;
    }
    return {};
}

EnumUnderlyingType fromEnum(GroupUpdate::eGroupUpdate e)
{
    switch (e)
    {
    case GroupUpdate::eGroupUpdate::GroupUpdate__0:
        return 0;
    case GroupUpdate::eGroupUpdate::GroupUpdate__1:
        return 1;
    case GroupUpdate::eGroupUpdate::GroupUpdate__12:
        return -1;
    default:
        break;
    }
    return {};
}
}

GroupUpdate::GroupUpdate()
{
}

GroupUpdate::~GroupUpdate()
{
}

void GroupUpdate::validate()
{
    // TODO: implement validation
}

web::json::value GroupUpdate::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool GroupUpdate::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_number().to_int64());
    return true;
}

void GroupUpdate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool GroupUpdate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

GroupUpdate::eGroupUpdate GroupUpdate::getValue() const
{
   return m_value;
}

void GroupUpdate::setValue(GroupUpdate::eGroupUpdate const value)
{
   m_value = value;
}


}
}
}


