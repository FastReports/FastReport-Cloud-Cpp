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



#include "SubscriptionDelete.h"

namespace fastreport {
namespace cloud {
namespace models {



SubscriptionDelete::SubscriptionDelete()
{
}

SubscriptionDelete::~SubscriptionDelete()
{
}

void SubscriptionDelete::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionDelete::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eSubscriptionDelete::SubscriptionDelete__0) val = web::json::value::string(U(0));
    if (m_value == eSubscriptionDelete::SubscriptionDelete__1) val = web::json::value::string(U(1));
    if (m_value == eSubscriptionDelete::SubscriptionDelete__2) val = web::json::value::string(U(2));
    if (m_value == eSubscriptionDelete::SubscriptionDelete__1) val = web::json::value::string(U(-1));

    return val;
}

bool SubscriptionDelete::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(0)) m_value = eSubscriptionDelete::SubscriptionDelete__0;
    if (s == utility::conversions::to_string_t(1)) m_value = eSubscriptionDelete::SubscriptionDelete__1;
    if (s == utility::conversions::to_string_t(2)) m_value = eSubscriptionDelete::SubscriptionDelete__2;
    if (s == utility::conversions::to_string_t(-1)) m_value = eSubscriptionDelete::SubscriptionDelete__1;
    return true;
}

void SubscriptionDelete::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eSubscriptionDelete::SubscriptionDelete__0) s = utility::conversions::to_string_t(0);
    if (m_value == eSubscriptionDelete::SubscriptionDelete__1) s = utility::conversions::to_string_t(1);
    if (m_value == eSubscriptionDelete::SubscriptionDelete__2) s = utility::conversions::to_string_t(2);
    if (m_value == eSubscriptionDelete::SubscriptionDelete__1) s = utility::conversions::to_string_t(-1);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool SubscriptionDelete::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eSubscriptionDelete v;

        
        if (s == utility::conversions::to_string_t(0)) v = eSubscriptionDelete::SubscriptionDelete__0;
        if (s == utility::conversions::to_string_t(1)) v = eSubscriptionDelete::SubscriptionDelete__1;
        if (s == utility::conversions::to_string_t(2)) v = eSubscriptionDelete::SubscriptionDelete__2;
        if (s == utility::conversions::to_string_t(-1)) v = eSubscriptionDelete::SubscriptionDelete__1;

        setValue(v);
    }
    return ok;
}

SubscriptionDelete::eSubscriptionDelete SubscriptionDelete::getValue() const
{
   return m_value;
}

void SubscriptionDelete::setValue(SubscriptionDelete::eSubscriptionDelete const value)
{
   m_value = value;
}


}
}
}


