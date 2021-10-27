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



#include "GroupCreate.h"

namespace fastreport {
namespace cloud {
namespace models {



GroupCreate::GroupCreate()
{
}

GroupCreate::~GroupCreate()
{
}

void GroupCreate::validate()
{
    // TODO: implement validation
}

web::json::value GroupCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eGroupCreate::GroupCreate__0) val = web::json::value::string(U(0));
    if (m_value == eGroupCreate::GroupCreate__1) val = web::json::value::string(U(1));
    if (m_value == eGroupCreate::GroupCreate__1) val = web::json::value::string(U(-1));

    return val;
}

bool GroupCreate::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(0)) m_value = eGroupCreate::GroupCreate__0;
    if (s == utility::conversions::to_string_t(1)) m_value = eGroupCreate::GroupCreate__1;
    if (s == utility::conversions::to_string_t(-1)) m_value = eGroupCreate::GroupCreate__1;
    return true;
}

void GroupCreate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eGroupCreate::GroupCreate__0) s = utility::conversions::to_string_t(0);
    if (m_value == eGroupCreate::GroupCreate__1) s = utility::conversions::to_string_t(1);
    if (m_value == eGroupCreate::GroupCreate__1) s = utility::conversions::to_string_t(-1);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool GroupCreate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eGroupCreate v;

        
        if (s == utility::conversions::to_string_t(0)) v = eGroupCreate::GroupCreate__0;
        if (s == utility::conversions::to_string_t(1)) v = eGroupCreate::GroupCreate__1;
        if (s == utility::conversions::to_string_t(-1)) v = eGroupCreate::GroupCreate__1;

        setValue(v);
    }
    return ok;
}

GroupCreate::eGroupCreate GroupCreate::getValue() const
{
   return m_value;
}

void GroupCreate::setValue(GroupCreate::eGroupCreate const value)
{
   m_value = value;
}


}
}
}


