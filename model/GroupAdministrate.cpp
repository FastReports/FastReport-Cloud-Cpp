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



#include "GroupAdministrate.h"

namespace fastreport {
namespace cloud {
namespace models {



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
    web::json::value val = web::json::value::object();

    
    if (m_value == eGroupAdministrate::GroupAdministrate__0) val = web::json::value::string(U(0));
    if (m_value == eGroupAdministrate::GroupAdministrate__1) val = web::json::value::string(U(1));
    if (m_value == eGroupAdministrate::GroupAdministrate__2) val = web::json::value::string(U(2));
    if (m_value == eGroupAdministrate::GroupAdministrate__4) val = web::json::value::string(U(4));
    if (m_value == eGroupAdministrate::GroupAdministrate__8) val = web::json::value::string(U(8));
    if (m_value == eGroupAdministrate::GroupAdministrate__1) val = web::json::value::string(U(-1));

    return val;
}

bool GroupAdministrate::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(0)) m_value = eGroupAdministrate::GroupAdministrate__0;
    if (s == utility::conversions::to_string_t(1)) m_value = eGroupAdministrate::GroupAdministrate__1;
    if (s == utility::conversions::to_string_t(2)) m_value = eGroupAdministrate::GroupAdministrate__2;
    if (s == utility::conversions::to_string_t(4)) m_value = eGroupAdministrate::GroupAdministrate__4;
    if (s == utility::conversions::to_string_t(8)) m_value = eGroupAdministrate::GroupAdministrate__8;
    if (s == utility::conversions::to_string_t(-1)) m_value = eGroupAdministrate::GroupAdministrate__1;
    return true;
}

void GroupAdministrate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eGroupAdministrate::GroupAdministrate__0) s = utility::conversions::to_string_t(0);
    if (m_value == eGroupAdministrate::GroupAdministrate__1) s = utility::conversions::to_string_t(1);
    if (m_value == eGroupAdministrate::GroupAdministrate__2) s = utility::conversions::to_string_t(2);
    if (m_value == eGroupAdministrate::GroupAdministrate__4) s = utility::conversions::to_string_t(4);
    if (m_value == eGroupAdministrate::GroupAdministrate__8) s = utility::conversions::to_string_t(8);
    if (m_value == eGroupAdministrate::GroupAdministrate__1) s = utility::conversions::to_string_t(-1);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool GroupAdministrate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eGroupAdministrate v;

        
        if (s == utility::conversions::to_string_t(0)) v = eGroupAdministrate::GroupAdministrate__0;
        if (s == utility::conversions::to_string_t(1)) v = eGroupAdministrate::GroupAdministrate__1;
        if (s == utility::conversions::to_string_t(2)) v = eGroupAdministrate::GroupAdministrate__2;
        if (s == utility::conversions::to_string_t(4)) v = eGroupAdministrate::GroupAdministrate__4;
        if (s == utility::conversions::to_string_t(8)) v = eGroupAdministrate::GroupAdministrate__8;
        if (s == utility::conversions::to_string_t(-1)) v = eGroupAdministrate::GroupAdministrate__1;

        setValue(v);
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

