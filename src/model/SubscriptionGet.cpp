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



#include "CppRestOpenAPIClient/model/SubscriptionGet.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = int64_t;

SubscriptionGet::eSubscriptionGet toEnum(const EnumUnderlyingType& val)
{
    switch (val)
    {
    case 0:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__0;
    case 1:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__1;
    case 2:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__2;
    case 4:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__4;
    case 8:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__8;
    case 16:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__16;
    case 32:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__32;
    case 64:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__64;
    case 128:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__128;
    case 256:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__256;
    case 512:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__512;
    case 1024:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__1024;
    case -1:
        return SubscriptionGet::eSubscriptionGet::SubscriptionGet__12;
    default:
        break;
    }
    return {};
}

EnumUnderlyingType fromEnum(SubscriptionGet::eSubscriptionGet e)
{
    switch (e)
    {
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__0:
        return 0;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__1:
        return 1;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__2:
        return 2;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__4:
        return 4;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__8:
        return 8;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__16:
        return 16;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__32:
        return 32;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__64:
        return 64;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__128:
        return 128;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__256:
        return 256;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__512:
        return 512;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__1024:
        return 1024;
    case SubscriptionGet::eSubscriptionGet::SubscriptionGet__12:
        return -1;
    default:
        break;
    }
    return {};
}
}

SubscriptionGet::SubscriptionGet()
{
}

SubscriptionGet::~SubscriptionGet()
{
}

void SubscriptionGet::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionGet::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool SubscriptionGet::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_number().to_int64());
    return true;
}

void SubscriptionGet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool SubscriptionGet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

SubscriptionGet::eSubscriptionGet SubscriptionGet::getValue() const
{
   return m_value;
}

void SubscriptionGet::setValue(SubscriptionGet::eSubscriptionGet const value)
{
   m_value = value;
}


}
}
}


