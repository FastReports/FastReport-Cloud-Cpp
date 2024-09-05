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



#include "CppRestOpenAPIClient/model/FileCreateFormVM.h"

namespace fastreport {
namespace cloud {
namespace models {



FileCreateFormVM::FileCreateFormVM()
{
    m_tagsIsSet = false;
    m_iconIsSet = false;
    m_fileContentIsSet = false;
}

FileCreateFormVM::~FileCreateFormVM()
{
}

void FileCreateFormVM::validate()
{
    // TODO: implement validation
}

web::json::value FileCreateFormVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_tagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_tags);
    }
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t(U("icon"))] = ModelBase::toJson(m_icon);
    }
    if(m_fileContentIsSet)
    {
        val[utility::conversions::to_string_t(U("fileContent"))] = ModelBase::toJson(m_fileContent);
    }

    return val;
}

bool FileCreateFormVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("icon"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("icon")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<HttpContent> refVal_setIcon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIcon);
            setIcon(refVal_setIcon);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("fileContent"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fileContent")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<HttpContent> refVal_setFileContent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFileContent);
            setFileContent(refVal_setFileContent);
        }
    }
    return ok;
}

void FileCreateFormVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_tags));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("icon")), m_icon));
    }
    if(m_fileContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fileContent")), m_fileContent));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool FileCreateFormVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("icon"))))
    {
        std::shared_ptr<HttpContent> refVal_setIcon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("icon"))), refVal_setIcon );
        setIcon(refVal_setIcon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fileContent"))))
    {
        std::shared_ptr<HttpContent> refVal_setFileContent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fileContent"))), refVal_setFileContent );
        setFileContent(refVal_setFileContent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

std::vector<utility::string_t>& FileCreateFormVM::getTags()
{
    return m_tags;
}

void FileCreateFormVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool FileCreateFormVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void FileCreateFormVM::unsettags()
{
    m_tagsIsSet = false;
}
std::shared_ptr<HttpContent> FileCreateFormVM::getIcon() const
{
    return m_icon;
}

void FileCreateFormVM::setIcon(const std::shared_ptr<HttpContent>& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool FileCreateFormVM::iconIsSet() const
{
    return m_iconIsSet;
}

void FileCreateFormVM::unseticon()
{
    m_iconIsSet = false;
}
std::shared_ptr<HttpContent> FileCreateFormVM::getFileContent() const
{
    return m_fileContent;
}

void FileCreateFormVM::setFileContent(const std::shared_ptr<HttpContent>& value)
{
    m_fileContent = value;
    m_fileContentIsSet = true;
}

bool FileCreateFormVM::fileContentIsSet() const
{
    return m_fileContentIsSet;
}

void FileCreateFormVM::unsetfileContent()
{
    m_fileContentIsSet = false;
}
}
}
}

