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



#include "FileIconVM.h"

namespace fastreport {
namespace cloud {
namespace models {




FileIconVM::FileIconVM()
{
    m_icon = utility::conversions::to_string_t("");
    m_iconIsSet = false;
}

FileIconVM::~FileIconVM()
{
}

void FileIconVM::validate()
{
    // TODO: implement validation
}

web::json::value FileIconVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(m_icon);
    }

    return val;
}

bool FileIconVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("icon")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_icon;
            ok &= ModelBase::fromJson(fieldValue, refVal_icon);
            setIcon(refVal_icon);
        }
    }
    return ok;
}

void FileIconVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("icon"), m_icon));
    }
}

bool FileIconVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("icon")))
    {
        utility::string_t refVal_icon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("icon")), refVal_icon );
        setIcon(refVal_icon);
    }
    return ok;
}

utility::string_t FileIconVM::getIcon() const
{
    return m_icon;
}

void FileIconVM::setIcon(const utility::string_t& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool FileIconVM::iconIsSet() const
{
    return m_iconIsSet;
}

void FileIconVM::unseticon()
{
    m_iconIsSet = false;
}
}
}
}


