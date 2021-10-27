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



#include "RunInputFileVM.h"

namespace fastreport {
namespace cloud {
namespace models {




RunInputFileVM::RunInputFileVM()
{
    m_contentIsSet = false;
    m_entityId = utility::conversions::to_string_t("");
    m_entityIdIsSet = false;
    m_fileName = utility::conversions::to_string_t("");
    m_fileNameIsSet = false;
    m_typeIsSet = false;
}

RunInputFileVM::~RunInputFileVM()
{
}

void RunInputFileVM::validate()
{
    // TODO: implement validation
}

web::json::value RunInputFileVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_contentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_content);
    }
    if(m_entityIdIsSet)
    {
        val[utility::conversions::to_string_t("entityId")] = ModelBase::toJson(m_entityId);
    }
    if(m_fileNameIsSet)
    {
        val[utility::conversions::to_string_t("fileName")] = ModelBase::toJson(m_fileName);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_type);
    }

    return val;
}

bool RunInputFileVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_content);
            setContent(refVal_content);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entityId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entityId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_entityId;
            ok &= ModelBase::fromJson(fieldValue, refVal_entityId);
            setEntityId(refVal_entityId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fileName;
            ok &= ModelBase::fromJson(fieldValue, refVal_fileName);
            setFileName(refVal_fileName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FileKind> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void RunInputFileVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_contentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_content));
    }
    if(m_entityIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityId"), m_entityId));
    }
    if(m_fileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileName"), m_fileName));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_type));
    }
}

bool RunInputFileVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        utility::string_t refVal_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("content")), refVal_content );
        setContent(refVal_content);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entityId")))
    {
        utility::string_t refVal_entityId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityId")), refVal_entityId );
        setEntityId(refVal_entityId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fileName")))
    {
        utility::string_t refVal_fileName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileName")), refVal_fileName );
        setFileName(refVal_fileName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<FileKind> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

utility::string_t RunInputFileVM::getContent() const
{
    return m_content;
}

void RunInputFileVM::setContent(const utility::string_t& value)
{
    m_content = value;
    m_contentIsSet = true;
}

bool RunInputFileVM::contentIsSet() const
{
    return m_contentIsSet;
}

void RunInputFileVM::unsetcontent()
{
    m_contentIsSet = false;
}
utility::string_t RunInputFileVM::getEntityId() const
{
    return m_entityId;
}

void RunInputFileVM::setEntityId(const utility::string_t& value)
{
    m_entityId = value;
    m_entityIdIsSet = true;
}

bool RunInputFileVM::entityIdIsSet() const
{
    return m_entityIdIsSet;
}

void RunInputFileVM::unsetentityId()
{
    m_entityIdIsSet = false;
}
utility::string_t RunInputFileVM::getFileName() const
{
    return m_fileName;
}

void RunInputFileVM::setFileName(const utility::string_t& value)
{
    m_fileName = value;
    m_fileNameIsSet = true;
}

bool RunInputFileVM::fileNameIsSet() const
{
    return m_fileNameIsSet;
}

void RunInputFileVM::unsetfileName()
{
    m_fileNameIsSet = false;
}
std::shared_ptr<FileKind> RunInputFileVM::getType() const
{
    return m_type;
}

void RunInputFileVM::setType(const std::shared_ptr<FileKind>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool RunInputFileVM::typeIsSet() const
{
    return m_typeIsSet;
}

void RunInputFileVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}


