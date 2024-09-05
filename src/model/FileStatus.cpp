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



#include "CppRestOpenAPIClient/model/FileStatus.h"

namespace fastreport {
namespace cloud {
namespace models {


namespace
{
using EnumUnderlyingType = utility::string_t;

FileStatus::eFileStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("None")))
        return FileStatus::eFileStatus::FileStatus_NONE;
    if (val == utility::conversions::to_string_t(U("InQueue")))
        return FileStatus::eFileStatus::FileStatus_INQUEUE;
    if (val == utility::conversions::to_string_t(U("InProcess")))
        return FileStatus::eFileStatus::FileStatus_INPROCESS;
    if (val == utility::conversions::to_string_t(U("Success")))
        return FileStatus::eFileStatus::FileStatus_SUCCESS;
    if (val == utility::conversions::to_string_t(U("Failed")))
        return FileStatus::eFileStatus::FileStatus_FAILED;
    return {};
}

EnumUnderlyingType fromEnum(FileStatus::eFileStatus e)
{
    switch (e)
    {
    case FileStatus::eFileStatus::FileStatus_NONE:
        return U("None");
    case FileStatus::eFileStatus::FileStatus_INQUEUE:
        return U("InQueue");
    case FileStatus::eFileStatus::FileStatus_INPROCESS:
        return U("InProcess");
    case FileStatus::eFileStatus::FileStatus_SUCCESS:
        return U("Success");
    case FileStatus::eFileStatus::FileStatus_FAILED:
        return U("Failed");
    default:
        break;
    }
    return {};
}
}

FileStatus::FileStatus()
{
}

FileStatus::~FileStatus()
{
}

void FileStatus::validate()
{
    // TODO: implement validation
}

web::json::value FileStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool FileStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void FileStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool FileStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

FileStatus::eFileStatus FileStatus::getValue() const
{
   return m_value;
}

void FileStatus::setValue(FileStatus::eFileStatus const value)
{
   m_value = value;
}


}
}
}


