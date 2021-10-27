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



#include "FileVM.h"

namespace fastreport {
namespace cloud {
namespace models {




FileVM::FileVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_parentId = utility::conversions::to_string_t("");
    m_parentIdIsSet = false;
    m_tagsIsSet = false;
    m_iconIsSet = false;
    m_typeIsSet = false;
    m_size = 0L;
    m_sizeIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_statusIsSet = false;
    m_statusReasonIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_createdTime = utility::datetime();
    m_createdTimeIsSet = false;
    m_creatorUserId = utility::conversions::to_string_t("");
    m_creatorUserIdIsSet = false;
    m_editedTime = utility::datetime();
    m_editedTimeIsSet = false;
    m_editorUserId = utility::conversions::to_string_t("");
    m_editorUserIdIsSet = false;
}

FileVM::~FileVM()
{
}

void FileVM::validate()
{
    // TODO: implement validation
}

web::json::value FileVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_parentIdIsSet)
    {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(m_parentId);
    }
    if(m_tagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_tags);
    }
    if(m_iconIsSet)
    {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(m_icon);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_type);
    }
    if(m_sizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_size);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t("subscriptionId")] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_statusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_status);
    }
    if(m_statusReasonIsSet)
    {
        val[utility::conversions::to_string_t("statusReason")] = ModelBase::toJson(m_statusReason);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_id);
    }
    if(m_createdTimeIsSet)
    {
        val[utility::conversions::to_string_t("createdTime")] = ModelBase::toJson(m_createdTime);
    }
    if(m_creatorUserIdIsSet)
    {
        val[utility::conversions::to_string_t("creatorUserId")] = ModelBase::toJson(m_creatorUserId);
    }
    if(m_editedTimeIsSet)
    {
        val[utility::conversions::to_string_t("editedTime")] = ModelBase::toJson(m_editedTime);
    }
    if(m_editorUserIdIsSet)
    {
        val[utility::conversions::to_string_t("editorUserId")] = ModelBase::toJson(m_editorUserId);
    }

    return val;
}

bool FileVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentId);
            setParentId(refVal_parentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FileType> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptionId);
            setSubscriptionId(refVal_subscriptionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FileStatus> refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statusReason")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statusReason"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<FileStatusReason> refVal_statusReason;
            ok &= ModelBase::fromJson(fieldValue, refVal_statusReason);
            setStatusReason(refVal_statusReason);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createdTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_createdTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_createdTime);
            setCreatedTime(refVal_createdTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatorUserId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatorUserId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_creatorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_creatorUserId);
            setCreatorUserId(refVal_creatorUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editedTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editedTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_editedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_editedTime);
            setEditedTime(refVal_editedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editorUserId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editorUserId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_editorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_editorUserId);
            setEditorUserId(refVal_editorUserId);
        }
    }
    return ok;
}

void FileVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
    if(m_parentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentId"), m_parentId));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_tags));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("icon"), m_icon));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_type));
    }
    if(m_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_size));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionId"), m_subscriptionId));
    }
    if(m_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_status));
    }
    if(m_statusReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("statusReason"), m_statusReason));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_id));
    }
    if(m_createdTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdTime"), m_createdTime));
    }
    if(m_creatorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("creatorUserId"), m_creatorUserId));
    }
    if(m_editedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editedTime"), m_editedTime));
    }
    if(m_editorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("editorUserId"), m_editorUserId));
    }
}

bool FileVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentId")))
    {
        utility::string_t refVal_parentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentId")), refVal_parentId );
        setParentId(refVal_parentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<utility::string_t> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("icon")))
    {
        utility::string_t refVal_icon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("icon")), refVal_icon );
        setIcon(refVal_icon);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<FileType> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        int64_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptionId")))
    {
        utility::string_t refVal_subscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptionId")), refVal_subscriptionId );
        setSubscriptionId(refVal_subscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        std::shared_ptr<FileStatus> refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("statusReason")))
    {
        std::shared_ptr<FileStatusReason> refVal_statusReason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("statusReason")), refVal_statusReason );
        setStatusReason(refVal_statusReason);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("createdTime")))
    {
        utility::datetime refVal_createdTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdTime")), refVal_createdTime );
        setCreatedTime(refVal_createdTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("creatorUserId")))
    {
        utility::string_t refVal_creatorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("creatorUserId")), refVal_creatorUserId );
        setCreatorUserId(refVal_creatorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editedTime")))
    {
        utility::datetime refVal_editedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editedTime")), refVal_editedTime );
        setEditedTime(refVal_editedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("editorUserId")))
    {
        utility::string_t refVal_editorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("editorUserId")), refVal_editorUserId );
        setEditorUserId(refVal_editorUserId);
    }
    return ok;
}

utility::string_t FileVM::getName() const
{
    return m_name;
}

void FileVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool FileVM::nameIsSet() const
{
    return m_nameIsSet;
}

void FileVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t FileVM::getParentId() const
{
    return m_parentId;
}

void FileVM::setParentId(const utility::string_t& value)
{
    m_parentId = value;
    m_parentIdIsSet = true;
}

bool FileVM::parentIdIsSet() const
{
    return m_parentIdIsSet;
}

void FileVM::unsetparentId()
{
    m_parentIdIsSet = false;
}
std::vector<utility::string_t>& FileVM::getTags()
{
    return m_tags;
}

void FileVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool FileVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void FileVM::unsettags()
{
    m_tagsIsSet = false;
}
utility::string_t FileVM::getIcon() const
{
    return m_icon;
}

void FileVM::setIcon(const utility::string_t& value)
{
    m_icon = value;
    m_iconIsSet = true;
}

bool FileVM::iconIsSet() const
{
    return m_iconIsSet;
}

void FileVM::unseticon()
{
    m_iconIsSet = false;
}
std::shared_ptr<FileType> FileVM::getType() const
{
    return m_type;
}

void FileVM::setType(const std::shared_ptr<FileType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool FileVM::typeIsSet() const
{
    return m_typeIsSet;
}

void FileVM::unsettype()
{
    m_typeIsSet = false;
}
int64_t FileVM::getSize() const
{
    return m_size;
}

void FileVM::setSize(int64_t value)
{
    m_size = value;
    m_sizeIsSet = true;
}

bool FileVM::sizeIsSet() const
{
    return m_sizeIsSet;
}

void FileVM::unsetsize()
{
    m_sizeIsSet = false;
}
utility::string_t FileVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void FileVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool FileVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void FileVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<FileStatus> FileVM::getStatus() const
{
    return m_status;
}

void FileVM::setStatus(const std::shared_ptr<FileStatus>& value)
{
    m_status = value;
    m_statusIsSet = true;
}

bool FileVM::statusIsSet() const
{
    return m_statusIsSet;
}

void FileVM::unsetstatus()
{
    m_statusIsSet = false;
}
std::shared_ptr<FileStatusReason> FileVM::getStatusReason() const
{
    return m_statusReason;
}

void FileVM::setStatusReason(const std::shared_ptr<FileStatusReason>& value)
{
    m_statusReason = value;
    m_statusReasonIsSet = true;
}

bool FileVM::statusReasonIsSet() const
{
    return m_statusReasonIsSet;
}

void FileVM::unsetstatusReason()
{
    m_statusReasonIsSet = false;
}
utility::string_t FileVM::getId() const
{
    return m_id;
}

void FileVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool FileVM::idIsSet() const
{
    return m_idIsSet;
}

void FileVM::unsetid()
{
    m_idIsSet = false;
}
utility::datetime FileVM::getCreatedTime() const
{
    return m_createdTime;
}

void FileVM::setCreatedTime(const utility::datetime& value)
{
    m_createdTime = value;
    m_createdTimeIsSet = true;
}

bool FileVM::createdTimeIsSet() const
{
    return m_createdTimeIsSet;
}

void FileVM::unsetcreatedTime()
{
    m_createdTimeIsSet = false;
}
utility::string_t FileVM::getCreatorUserId() const
{
    return m_creatorUserId;
}

void FileVM::setCreatorUserId(const utility::string_t& value)
{
    m_creatorUserId = value;
    m_creatorUserIdIsSet = true;
}

bool FileVM::creatorUserIdIsSet() const
{
    return m_creatorUserIdIsSet;
}

void FileVM::unsetcreatorUserId()
{
    m_creatorUserIdIsSet = false;
}
utility::datetime FileVM::getEditedTime() const
{
    return m_editedTime;
}

void FileVM::setEditedTime(const utility::datetime& value)
{
    m_editedTime = value;
    m_editedTimeIsSet = true;
}

bool FileVM::editedTimeIsSet() const
{
    return m_editedTimeIsSet;
}

void FileVM::unseteditedTime()
{
    m_editedTimeIsSet = false;
}
utility::string_t FileVM::getEditorUserId() const
{
    return m_editorUserId;
}

void FileVM::setEditorUserId(const utility::string_t& value)
{
    m_editorUserId = value;
    m_editorUserIdIsSet = true;
}

bool FileVM::editorUserIdIsSet() const
{
    return m_editorUserIdIsSet;
}

void FileVM::unseteditorUserId()
{
    m_editorUserIdIsSet = false;
}
}
}
}


