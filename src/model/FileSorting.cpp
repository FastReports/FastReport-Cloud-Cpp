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



#include "CppRestOpenAPIClient/model/FileSorting.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

FileSorting::eFileSorting toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("CreatedTime")))
        return FileSorting::eFileSorting::FileSorting_CREATEDTIME;
    if (val == utility::conversions::to_string_t(U("EditedTime")))
        return FileSorting::eFileSorting::FileSorting_EDITEDTIME;
    if (val == utility::conversions::to_string_t(U("Size")))
        return FileSorting::eFileSorting::FileSorting_SIZE;
    if (val == utility::conversions::to_string_t(U("Name")))
        return FileSorting::eFileSorting::FileSorting_NAME;
    return {};
}

EnumUnderlyingType fromEnum(FileSorting::eFileSorting e)
{
    switch (e)
    {
    case FileSorting::eFileSorting::FileSorting_CREATEDTIME:
        return U("CreatedTime");
    case FileSorting::eFileSorting::FileSorting_EDITEDTIME:
        return U("EditedTime");
    case FileSorting::eFileSorting::FileSorting_SIZE:
        return U("Size");
    case FileSorting::eFileSorting::FileSorting_NAME:
        return U("Name");
    default:
        break;
    }
    return {};
}
}

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
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool FileSorting::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void FileSorting::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool FileSorting::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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


