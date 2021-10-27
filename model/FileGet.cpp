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



#include "FileGet.h"

namespace fastreport {
namespace cloud {
namespace models {



FileGet::FileGet()
{
}

FileGet::~FileGet()
{
}

void FileGet::validate()
{
    // TODO: implement validation
}

web::json::value FileGet::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eFileGet::FileGet__0) val = web::json::value::string(U(0));
    if (m_value == eFileGet::FileGet__1) val = web::json::value::string(U(1));
    if (m_value == eFileGet::FileGet__2) val = web::json::value::string(U(2));
    if (m_value == eFileGet::FileGet__4) val = web::json::value::string(U(4));
    if (m_value == eFileGet::FileGet__8) val = web::json::value::string(U(8));
    if (m_value == eFileGet::FileGet__16) val = web::json::value::string(U(16));
    if (m_value == eFileGet::FileGet__1) val = web::json::value::string(U(-1));

    return val;
}

bool FileGet::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(0)) m_value = eFileGet::FileGet__0;
    if (s == utility::conversions::to_string_t(1)) m_value = eFileGet::FileGet__1;
    if (s == utility::conversions::to_string_t(2)) m_value = eFileGet::FileGet__2;
    if (s == utility::conversions::to_string_t(4)) m_value = eFileGet::FileGet__4;
    if (s == utility::conversions::to_string_t(8)) m_value = eFileGet::FileGet__8;
    if (s == utility::conversions::to_string_t(16)) m_value = eFileGet::FileGet__16;
    if (s == utility::conversions::to_string_t(-1)) m_value = eFileGet::FileGet__1;
    return true;
}

void FileGet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eFileGet::FileGet__0) s = utility::conversions::to_string_t(0);
    if (m_value == eFileGet::FileGet__1) s = utility::conversions::to_string_t(1);
    if (m_value == eFileGet::FileGet__2) s = utility::conversions::to_string_t(2);
    if (m_value == eFileGet::FileGet__4) s = utility::conversions::to_string_t(4);
    if (m_value == eFileGet::FileGet__8) s = utility::conversions::to_string_t(8);
    if (m_value == eFileGet::FileGet__16) s = utility::conversions::to_string_t(16);
    if (m_value == eFileGet::FileGet__1) s = utility::conversions::to_string_t(-1);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool FileGet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eFileGet v;

        
        if (s == utility::conversions::to_string_t(0)) v = eFileGet::FileGet__0;
        if (s == utility::conversions::to_string_t(1)) v = eFileGet::FileGet__1;
        if (s == utility::conversions::to_string_t(2)) v = eFileGet::FileGet__2;
        if (s == utility::conversions::to_string_t(4)) v = eFileGet::FileGet__4;
        if (s == utility::conversions::to_string_t(8)) v = eFileGet::FileGet__8;
        if (s == utility::conversions::to_string_t(16)) v = eFileGet::FileGet__16;
        if (s == utility::conversions::to_string_t(-1)) v = eFileGet::FileGet__1;

        setValue(v);
    }
    return ok;
}

FileGet::eFileGet FileGet::getValue() const
{
   return m_value;
}

void FileGet::setValue(FileGet::eFileGet const value)
{
   m_value = value;
}


}
}
}


