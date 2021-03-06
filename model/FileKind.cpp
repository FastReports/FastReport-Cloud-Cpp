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



#include "FileKind.h"

namespace fastreport {
namespace cloud {
namespace models {



FileKind::FileKind()
{
}

FileKind::~FileKind()
{
}

void FileKind::validate()
{
    // TODO: implement validation
}

web::json::value FileKind::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eFileKind::FileKind_TEMPLATE) val = web::json::value::string(U(Template));
    if (m_value == eFileKind::FileKind_REPORT) val = web::json::value::string(U(Report));
    if (m_value == eFileKind::FileKind_EXPORT) val = web::json::value::string(U(Export));
    if (m_value == eFileKind::FileKind_DATASOURCE) val = web::json::value::string(U(DataSource));

    return val;
}

bool FileKind::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(Template)) m_value = eFileKind::FileKind_TEMPLATE;
    if (s == utility::conversions::to_string_t(Report)) m_value = eFileKind::FileKind_REPORT;
    if (s == utility::conversions::to_string_t(Export)) m_value = eFileKind::FileKind_EXPORT;
    if (s == utility::conversions::to_string_t(DataSource)) m_value = eFileKind::FileKind_DATASOURCE;
    return true;
}

void FileKind::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eFileKind::FileKind_TEMPLATE) s = utility::conversions::to_string_t(Template);
    if (m_value == eFileKind::FileKind_REPORT) s = utility::conversions::to_string_t(Report);
    if (m_value == eFileKind::FileKind_EXPORT) s = utility::conversions::to_string_t(Export);
    if (m_value == eFileKind::FileKind_DATASOURCE) s = utility::conversions::to_string_t(DataSource);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool FileKind::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eFileKind v;

        
        if (s == utility::conversions::to_string_t(Template)) v = eFileKind::FileKind_TEMPLATE;
        if (s == utility::conversions::to_string_t(Report)) v = eFileKind::FileKind_REPORT;
        if (s == utility::conversions::to_string_t(Export)) v = eFileKind::FileKind_EXPORT;
        if (s == utility::conversions::to_string_t(DataSource)) v = eFileKind::FileKind_DATASOURCE;

        setValue(v);
    }
    return ok;
}

FileKind::eFileKind FileKind::getValue() const
{
   return m_value;
}

void FileKind::setValue(FileKind::eFileKind const value)
{
   m_value = value;
}


}
}
}


