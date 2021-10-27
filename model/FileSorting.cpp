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



#include "FileSorting.h"

namespace fastreport {
namespace cloud {
namespace models {



FileSorting::FileSorting()
{
}

FileSorting::~FileSorting()
{
}

void FileSorting::validate()
{
    // TODO: implement validation
}

web::json::value FileSorting::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eFileSorting::FileSorting_NONE) val = web::json::value::string(U(None));
    if (m_value == eFileSorting::FileSorting_CREATEDTIME) val = web::json::value::string(U(CreatedTime));
    if (m_value == eFileSorting::FileSorting_EDITEDTIME) val = web::json::value::string(U(EditedTime));
    if (m_value == eFileSorting::FileSorting_SIZE) val = web::json::value::string(U(Size));
    if (m_value == eFileSorting::FileSorting_NAME) val = web::json::value::string(U(Name));

    return val;
}

bool FileSorting::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(None)) m_value = eFileSorting::FileSorting_NONE;
    if (s == utility::conversions::to_string_t(CreatedTime)) m_value = eFileSorting::FileSorting_CREATEDTIME;
    if (s == utility::conversions::to_string_t(EditedTime)) m_value = eFileSorting::FileSorting_EDITEDTIME;
    if (s == utility::conversions::to_string_t(Size)) m_value = eFileSorting::FileSorting_SIZE;
    if (s == utility::conversions::to_string_t(Name)) m_value = eFileSorting::FileSorting_NAME;
    return true;
}

void FileSorting::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eFileSorting::FileSorting_NONE) s = utility::conversions::to_string_t(None);
    if (m_value == eFileSorting::FileSorting_CREATEDTIME) s = utility::conversions::to_string_t(CreatedTime);
    if (m_value == eFileSorting::FileSorting_EDITEDTIME) s = utility::conversions::to_string_t(EditedTime);
    if (m_value == eFileSorting::FileSorting_SIZE) s = utility::conversions::to_string_t(Size);
    if (m_value == eFileSorting::FileSorting_NAME) s = utility::conversions::to_string_t(Name);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool FileSorting::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eFileSorting v;

        
        if (s == utility::conversions::to_string_t(None)) v = eFileSorting::FileSorting_NONE;
        if (s == utility::conversions::to_string_t(CreatedTime)) v = eFileSorting::FileSorting_CREATEDTIME;
        if (s == utility::conversions::to_string_t(EditedTime)) v = eFileSorting::FileSorting_EDITEDTIME;
        if (s == utility::conversions::to_string_t(Size)) v = eFileSorting::FileSorting_SIZE;
        if (s == utility::conversions::to_string_t(Name)) v = eFileSorting::FileSorting_NAME;

        setValue(v);
    }
    return ok;
}

FileSorting::eFileSorting FileSorting::getValue() const
{
   return m_value;
}

void FileSorting::setValue(FileSorting::eFileSorting const value)
{
   m_value = value;
}


}
}
}


