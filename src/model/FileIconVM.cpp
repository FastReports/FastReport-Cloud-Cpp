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



#include "CppRestOpenAPIClient/model/FileIconVM.h"

namespace fastreport {
namespace cloud {
namespace models {



FileIconVM::FileIconVM()
{
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
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t(U("icon"))] = ModelBase::toJson(m_icon);
    }

    return val;
}

bool FileIconVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("icon"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("icon")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIcon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIcon);
            setIcon(refVal_setIcon);
        }
    }
    return ok;
}

void FileIconVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("icon")), m_icon));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool FileIconVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("icon"))))
    {
        utility::string_t refVal_setIcon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("icon"))), refVal_setIcon );
        setIcon(refVal_setIcon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
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


