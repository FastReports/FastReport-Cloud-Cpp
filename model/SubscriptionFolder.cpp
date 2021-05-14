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



#include "SubscriptionFolder.h"

namespace fastreport {
namespace cloud {
namespace models {




SubscriptionFolder::SubscriptionFolder()
{
    m_folderId = utility::conversions::to_string_t("");
    m_folderIdIsSet = false;
    m_bytesUsed = 0L;
    m_bytesUsedIsSet = false;
}

SubscriptionFolder::~SubscriptionFolder()
{
}

void SubscriptionFolder::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionFolder::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_folderIdIsSet)
    {
        val[utility::conversions::to_string_t("folderId")] = ModelBase::toJson(m_folderId);
    }
    if(m_bytesUsedIsSet)
    {
        val[utility::conversions::to_string_t("bytesUsed")] = ModelBase::toJson(m_bytesUsed);
    }

    return val;
}

bool SubscriptionFolder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("folderId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folderId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_folderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_folderId);
            setFolderId(refVal_folderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesUsed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bytesUsed"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_bytesUsed;
            ok &= ModelBase::fromJson(fieldValue, refVal_bytesUsed);
            setBytesUsed(refVal_bytesUsed);
        }
    }
    return ok;
}

void SubscriptionFolder::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_folderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("folderId"), m_folderId));
    }
    if(m_bytesUsedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesUsed"), m_bytesUsed));
    }
}

bool SubscriptionFolder::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("folderId")))
    {
        utility::string_t refVal_folderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("folderId")), refVal_folderId );
        setFolderId(refVal_folderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesUsed")))
    {
        int64_t refVal_bytesUsed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesUsed")), refVal_bytesUsed );
        setBytesUsed(refVal_bytesUsed);
    }
    return ok;
}

utility::string_t SubscriptionFolder::getFolderId() const
{
    return m_folderId;
}

void SubscriptionFolder::setFolderId(const utility::string_t& value)
{
    m_folderId = value;
    m_folderIdIsSet = true;
}

bool SubscriptionFolder::folderIdIsSet() const
{
    return m_folderIdIsSet;
}

void SubscriptionFolder::unsetfolderId()
{
    m_folderIdIsSet = false;
}
int64_t SubscriptionFolder::getBytesUsed() const
{
    return m_bytesUsed;
}

void SubscriptionFolder::setBytesUsed(int64_t value)
{
    m_bytesUsed = value;
    m_bytesUsedIsSet = true;
}

bool SubscriptionFolder::bytesUsedIsSet() const
{
    return m_bytesUsedIsSet;
}

void SubscriptionFolder::unsetbytesUsed()
{
    m_bytesUsedIsSet = false;
}
}
}
}


