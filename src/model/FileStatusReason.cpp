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



#include "CppRestOpenAPIClient/model/FileStatusReason.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

FileStatusReason::eFileStatusReason toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("None")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_NONE;
    if (val == utility::conversions::to_string_t(U("AllRight")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_ALLRIGHT;
    if (val == utility::conversions::to_string_t(U("Hang")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_HANG;
    if (val == utility::conversions::to_string_t(U("Error")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_ERROR;
    if (val == utility::conversions::to_string_t(U("NotFound")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_NOTFOUND;
    if (val == utility::conversions::to_string_t(U("NotEnoughSpace")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_NOTENOUGHSPACE;
    if (val == utility::conversions::to_string_t(U("ExportStarted")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_EXPORTSTARTED;
    if (val == utility::conversions::to_string_t(U("PreparationStarted")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_PREPARATIONSTARTED;
    if (val == utility::conversions::to_string_t(U("CrashLoop")))
        return FileStatusReason::eFileStatusReason::FileStatusReason_CRASHLOOP;
    return {};
}

EnumUnderlyingType fromEnum(FileStatusReason::eFileStatusReason e)
{
    switch (e)
    {
    case FileStatusReason::eFileStatusReason::FileStatusReason_NONE:
        return U("None");
    case FileStatusReason::eFileStatusReason::FileStatusReason_ALLRIGHT:
        return U("AllRight");
    case FileStatusReason::eFileStatusReason::FileStatusReason_HANG:
        return U("Hang");
    case FileStatusReason::eFileStatusReason::FileStatusReason_ERROR:
        return U("Error");
    case FileStatusReason::eFileStatusReason::FileStatusReason_NOTFOUND:
        return U("NotFound");
    case FileStatusReason::eFileStatusReason::FileStatusReason_NOTENOUGHSPACE:
        return U("NotEnoughSpace");
    case FileStatusReason::eFileStatusReason::FileStatusReason_EXPORTSTARTED:
        return U("ExportStarted");
    case FileStatusReason::eFileStatusReason::FileStatusReason_PREPARATIONSTARTED:
        return U("PreparationStarted");
    case FileStatusReason::eFileStatusReason::FileStatusReason_CRASHLOOP:
        return U("CrashLoop");
    default:
        break;
    }
    return {};
}
}

FileStatusReason::FileStatusReason()
{
}

FileStatusReason::~FileStatusReason()
{
}

void FileStatusReason::validate()
{
    // TODO: implement validation
}

web::json::value FileStatusReason::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool FileStatusReason::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void FileStatusReason::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool FileStatusReason::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

FileStatusReason::eFileStatusReason FileStatusReason::getValue() const
{
   return m_value;
}

void FileStatusReason::setValue(FileStatusReason::eFileStatusReason const value)
{
   m_value = value;
}


}
}
}


