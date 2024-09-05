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



#include "CppRestOpenAPIClient/model/FileUpdateVM.h"

namespace fastreport {
namespace cloud {
namespace models {



FileUpdateVM::FileUpdateVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_parentId = utility::conversions::to_string_t("");
    m_parentIdIsSet = false;
    m_tagsIsSet = false;
    m_iconIsSet = false;
}

FileUpdateVM::~FileUpdateVM()
{
}

void FileUpdateVM::validate()
{
    // TODO: implement validation
}

web::json::value FileUpdateVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_parentIdIsSet)
    {
        val[utility::conversions::to_string_t(U("parentId"))] = ModelBase::toJson(m_parentId);
    }
    if(m_tagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_tags);
    }
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t(U("icon"))] = ModelBase::toJson(m_icon);
    }

    return val;
}

bool FileUpdateVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("parentId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parentId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentId);
            setParentId(refVal_setParentId);
        }
    }
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
            utility::string_t refVal_setIcon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIcon);
            setIcon(refVal_setIcon);
        }
    }
    return ok;
}

void FileUpdateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_parentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parentId")), m_parentId));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_tags));
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

bool FileUpdateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parentId"))))
    {
        utility::string_t refVal_setParentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parentId"))), refVal_setParentId );
        setParentId(refVal_setParentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
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

utility::string_t FileUpdateVM::getName() const
{
    return m_name;
}

void FileUpdateVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool FileUpdateVM::nameIsSet() const
{
    return m_nameIsSet;
}

void FileUpdateVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t FileUpdateVM::getParentId() const
{
    return m_parentId;
}

void FileUpdateVM::setParentId(const utility::string_t& value)
{
    m_parentId = value;
    m_parentIdIsSet = true;
}

bool FileUpdateVM::parentIdIsSet() const
{
    return m_parentIdIsSet;
}

void FileUpdateVM::unsetparentId()
{
    m_parentIdIsSet = false;
}
std::vector<utility::string_t>& FileUpdateVM::getTags()
{
    return m_tags;
}

void FileUpdateVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool FileUpdateVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void FileUpdateVM::unsettags()
{
    m_tagsIsSet = false;
}
utility::string_t FileUpdateVM::getIcon() const
{
    return m_icon;
}

void FileUpdateVM::setIcon(const utility::string_t& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool FileUpdateVM::iconIsSet() const
{
    return m_iconIsSet;
}

void FileUpdateVM::unseticon()
{
    m_iconIsSet = false;
}
}
}
}


